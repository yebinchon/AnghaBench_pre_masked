
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct opal_nvram_softc {int sc_buf_phys; int sc_buf; scalar_t__ sc_size; } ;
struct cdev {struct opal_nvram_softc* si_drv1; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 int FUNC_2 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 off_t VAR_9;
 int VAR_10, VAR_11;
 struct opal_nvram_softc *VAR_12 = VAR_6->si_drv1;

 VAR_10 = 0;
 while (VAR_7->uio_resid > 0) {
  VAR_11 = FUNC_0(VAR_7->uio_resid, VAR_12->sc_size - VAR_7->uio_offset);
  VAR_11 = FUNC_0(VAR_11, VAR_3);
  if (VAR_11 == 0) {
   VAR_10 = VAR_2;
   break;
  }
  VAR_9 = VAR_7->uio_offset;
  VAR_10 = FUNC_2(VAR_12->sc_buf, VAR_11, VAR_7);
  if (VAR_10 != 0)
   break;
  VAR_10 = FUNC_1(VAR_5, VAR_12->sc_buf_phys, VAR_11,
      VAR_9);
  if (VAR_10 != VAR_4) {
   switch (VAR_10) {
   case 129:
    VAR_10 = VAR_1;
    break;
   case 128:
    VAR_10 = VAR_0;
    break;
   }
   break;
  }
 }
 return (VAR_10);
}
