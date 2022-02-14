
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dce_i2c_hw {int dummy; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce_i2c_hw*,struct dc_context*,size_t,int *,int *,int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dce_i2c_hw* FUNC_1 (int,int ) ;

struct dce_i2c_hw *FUNC_2(
 struct dc_context *VAR_4,
 uint32_t VAR_5)
{
 struct dce_i2c_hw *VAR_6 =
  FUNC_1(sizeof(struct dce_i2c_hw), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 FUNC_0(VAR_6, VAR_4, VAR_5,
        &VAR_1[VAR_5], &VAR_3, &VAR_2);

 return VAR_6;
}
