
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link {scalar_t__ connector_signal; } ;
struct dc {int link_count; struct dc_link** links; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct dc_link *FUNC_0(struct dc *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->link_count; VAR_2++) {
  if (VAR_1->links[VAR_2]->connector_signal == VAR_0)
   return VAR_1->links[VAR_2];
 }
 return ((void*)0);
}
