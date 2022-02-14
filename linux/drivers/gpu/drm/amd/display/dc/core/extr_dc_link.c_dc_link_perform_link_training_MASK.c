
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link_settings {int dummy; } ;
struct dc {int link_count; int * links; } ;


 int FUNC_0 (int ,struct dc_link_settings*,int) ;

void FUNC_1(struct dc *VAR_0,
       struct dc_link_settings *VAR_1,
       bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->link_count; VAR_3++)
  FUNC_0(
   VAR_0->links[VAR_3],
   VAR_1,
   VAR_2);
}
