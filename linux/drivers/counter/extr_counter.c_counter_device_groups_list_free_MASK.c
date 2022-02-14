
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct counter_device_attr_group* const attrs; struct counter_device_attr_group* const name; } ;
struct counter_device_attr_group {int attr_list; TYPE_1__ attr_group; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct counter_device_attr_group* const) ;

__attribute__((used)) static void FUNC_2(
 struct counter_device_attr_group *const VAR_0,
 const size_t VAR_1)
{
 struct counter_device_attr_group *VAR_2;
 size_t VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = VAR_0 + VAR_3;


  FUNC_1(VAR_2->attr_group.name);
  FUNC_1(VAR_2->attr_group.attrs);
  FUNC_0(&VAR_2->attr_list);
 }

 FUNC_1(VAR_0);
}
