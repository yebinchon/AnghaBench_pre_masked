
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ dev_id; } ;
typedef TYPE_1__ dbdev_tab_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static dbdev_tab_t *FUNC_0(u32 VAR_2)
{
 int VAR_3;
 dbdev_tab_t *VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_4 = &VAR_1[VAR_3];
  if (VAR_4->dev_id == VAR_2)
   return VAR_4;
 }
 return ((void*)0);
}
