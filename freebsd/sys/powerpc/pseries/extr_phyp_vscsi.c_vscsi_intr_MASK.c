
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsi_softc {int io_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vscsi_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct vscsi_softc *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->io_lock);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->io_lock);
}
