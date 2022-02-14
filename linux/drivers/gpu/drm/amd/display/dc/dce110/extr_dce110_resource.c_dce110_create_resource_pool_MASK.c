
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct resource_pool {int dummy; } ;
struct hw_asic_id {int dummy; } ;
struct dce110_resource_pool {struct resource_pool base; } ;
struct dc {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct dc*,struct dce110_resource_pool*,struct hw_asic_id) ;
 int FUNC_2 (struct dce110_resource_pool*) ;
 struct dce110_resource_pool* FUNC_3 (int,int ) ;

struct resource_pool *FUNC_4(
 uint8_t VAR_1,
 struct dc *VAR_2,
 struct hw_asic_id VAR_3)
{
 struct dce110_resource_pool *VAR_4 =
  FUNC_3(sizeof(struct dce110_resource_pool), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 if (FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3))
  return &VAR_4->base;

 FUNC_2(VAR_4);
 FUNC_0();
 return ((void*)0);
}
