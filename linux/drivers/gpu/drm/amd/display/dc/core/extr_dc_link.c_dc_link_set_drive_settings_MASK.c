
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_training_settings {int dummy; } ;
struct dc_link {int dummy; } ;
struct dc {int link_count; struct dc_link const** links; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dc_link const*,struct link_training_settings*) ;

void FUNC_2(struct dc *VAR_0,
    struct link_training_settings *VAR_1,
    const struct dc_link *VAR_2)
{

 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->link_count; VAR_3++) {
  if (VAR_0->links[VAR_3] == VAR_2)
   break;
 }

 if (VAR_3 >= VAR_0->link_count)
  FUNC_0(0);

 FUNC_1(VAR_0->links[VAR_3], VAR_1);
}
