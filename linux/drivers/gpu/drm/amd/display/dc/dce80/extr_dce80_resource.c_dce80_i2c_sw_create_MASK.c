
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_i2c_sw {int dummy; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce_i2c_sw*,struct dc_context*) ;
 struct dce_i2c_sw* FUNC_1 (int,int ) ;

struct dce_i2c_sw *FUNC_2(
 struct dc_context *VAR_1)
{
 struct dce_i2c_sw *VAR_2 =
  FUNC_1(sizeof(struct dce_i2c_sw), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, VAR_1);

 return VAR_2;
}
