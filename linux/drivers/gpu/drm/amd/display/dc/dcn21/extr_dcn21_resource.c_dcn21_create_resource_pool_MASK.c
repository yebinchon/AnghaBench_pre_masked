
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int dummy; } ;
struct dcn21_resource_pool {struct resource_pool base; } ;
struct dc_init_data {int num_virtual_links; } ;
struct dc {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct dc*,struct dcn21_resource_pool*) ;
 int FUNC_2 (struct dcn21_resource_pool*) ;
 struct dcn21_resource_pool* FUNC_3 (int,int ) ;

struct resource_pool *FUNC_4(
  const struct dc_init_data *VAR_1,
  struct dc *VAR_2)
{
 struct dcn21_resource_pool *VAR_3 =
  FUNC_3(sizeof(struct dcn21_resource_pool), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 if (FUNC_1(VAR_1->num_virtual_links, VAR_2, VAR_3))
  return &VAR_3->base;

 FUNC_0();
 FUNC_2(VAR_3);
 return ((void*)0);
}
