
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsi_softc {int io_lock; int * devq; int * sim; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vscsi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct vscsi_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (VAR_3->sim != ((void*)0)) {
  FUNC_5(&VAR_3->io_lock);
  FUNC_7(FUNC_1(VAR_3->sim));
  FUNC_0(VAR_3->sim, VAR_1);
  VAR_3->sim = ((void*)0);
  FUNC_6(&VAR_3->io_lock);
 }

 if (VAR_3->devq != ((void*)0)) {
  FUNC_2(VAR_3->devq);
  VAR_3->devq = ((void*)0);
 }

 FUNC_4(&VAR_3->io_lock);

 return (0);
}
