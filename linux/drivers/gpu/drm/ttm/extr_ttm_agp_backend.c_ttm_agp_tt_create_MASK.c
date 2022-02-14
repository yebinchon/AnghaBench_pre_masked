
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {int * func; } ;
struct ttm_buffer_object {int dummy; } ;
struct ttm_agp_backend {struct ttm_tt ttm; struct agp_bridge_data* bridge; int * mem; } ;
struct agp_bridge_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_agp_backend*) ;
 struct ttm_agp_backend* FUNC_1 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ttm_tt*,struct ttm_buffer_object*,int ) ;

struct ttm_tt *FUNC_3(struct ttm_buffer_object *VAR_2,
     struct agp_bridge_data *VAR_3,
     uint32_t VAR_4)
{
 struct ttm_agp_backend *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->mem = ((void*)0);
 VAR_5->bridge = VAR_3;
 VAR_5->ttm.func = &VAR_1;

 if (FUNC_2(&VAR_5->ttm, VAR_2, VAR_4)) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 return &VAR_5->ttm;
}
