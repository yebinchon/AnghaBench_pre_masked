
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev_id; } ;
typedef TYPE_1__ dbdev_tab_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(u32 VAR_0)
{
 dbdev_tab_t *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 != ((void*)0)) {
  FUNC_1(VAR_1, 0, sizeof(dbdev_tab_t));
  VAR_1->dev_id = ~0;
 }
}
