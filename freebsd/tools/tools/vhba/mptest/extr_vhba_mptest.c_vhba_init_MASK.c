
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; TYPE_2__* private; } ;
typedef TYPE_1__ vhba_softc_t ;
struct TYPE_7__ {int disk_size; int* luns; int qt; int inproc; int tick; int disk; TYPE_1__* vhba; } ;
typedef TYPE_2__ mptest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_5(vhba_softc_t *VAR_7)
{
 static mptest_t VAR_8;

 VAR_8.vhba = VAR_7;
 VAR_8.disk_size = VAR_0 << 20;
 VAR_8.disk = FUNC_4(VAR_8.disk_size, VAR_1, VAR_2|VAR_3);
 VAR_7->private = &VAR_8;
 FUNC_2(&VAR_8.tick, &VAR_7->lock, 0);
 FUNC_3(&VAR_8.tick, VAR_4, VAR_6, VAR_7);
 FUNC_0(&VAR_8.inproc);
 FUNC_1(&VAR_8.qt, 0, VAR_5, &VAR_8);
 VAR_8.luns[0] = 1;
 VAR_8.luns[1] = 1;
}
