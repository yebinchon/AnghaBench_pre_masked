
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {int * func; } ;
struct ttm_buffer_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_tt*) ;
 struct ttm_tt* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ttm_tt*,struct ttm_buffer_object*,int ) ;

__attribute__((used)) static struct ttm_tt *FUNC_3(struct ttm_buffer_object *VAR_2,
           uint32_t VAR_3)
{
 struct ttm_tt *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->func = &VAR_1;

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto err_ttm_tt_init;

 return VAR_4;

err_ttm_tt_init:
 FUNC_0(VAR_4);
 return ((void*)0);
}
