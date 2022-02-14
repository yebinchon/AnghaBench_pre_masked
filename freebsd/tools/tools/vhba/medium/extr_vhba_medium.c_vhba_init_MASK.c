
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int disk_size; int qt; int disk; TYPE_2__* vhba; } ;
typedef TYPE_1__ vhbamedium_t ;
struct TYPE_6__ {TYPE_1__* private; } ;
typedef TYPE_2__ vhba_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_4 ;

void
FUNC_2(vhba_softc_t *VAR_5)
{
 static vhbamedium_t VAR_6;
 VAR_6.vhba = VAR_5;
 VAR_6.disk_size = VAR_0 << 20;
 VAR_6.disk = FUNC_1(VAR_6.disk_size, VAR_1, VAR_2|VAR_3);
 VAR_5->private = &VAR_6;
 FUNC_0(&VAR_6.qt, 0, VAR_4, &VAR_6);
}
