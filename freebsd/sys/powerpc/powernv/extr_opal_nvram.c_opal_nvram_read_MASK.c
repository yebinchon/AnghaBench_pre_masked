
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct opal_nvram_softc {int sc_buf; int sc_buf_phys; scalar_t__ sc_size; } ;
struct cdev {struct opal_nvram_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 int FUNC_2 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_5, struct uio *VAR_6, int VAR_7)
{
 struct opal_nvram_softc *VAR_8 = VAR_5->si_drv1;
 int VAR_9, VAR_10;

 VAR_9 = 0;
 while (VAR_6->uio_resid > 0) {
  VAR_10 = FUNC_0(VAR_6->uio_resid, VAR_8->sc_size - VAR_6->uio_offset);
  VAR_10 = FUNC_0(VAR_10, VAR_2);
  if (VAR_10 == 0)
   break;

  VAR_9 = FUNC_1(VAR_3, VAR_8->sc_buf_phys,
      VAR_10, VAR_6->uio_offset);
  if (VAR_9 != VAR_4) {
   switch (VAR_9) {
   case 129:
    VAR_9 = VAR_1;
    break;
   case 128:
    VAR_9 = VAR_0;
    break;
   }
   break;
  }
  VAR_9 = FUNC_2(VAR_8->sc_buf, VAR_10, VAR_6);
  if (VAR_9 != 0)
   break;
 }
 return (VAR_9);
}
