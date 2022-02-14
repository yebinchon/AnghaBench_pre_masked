
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct i2c_payloads {int payloads; } ;
struct i2c_payload {int dummy; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct dc_context*,int ,int) ;
 int FUNC_1 (struct i2c_payloads*) ;
 struct i2c_payloads* FUNC_2 (int,int ) ;

__attribute__((used)) static struct i2c_payloads *FUNC_3(struct dc_context *VAR_1, uint32_t VAR_2)
{
 struct i2c_payloads *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct i2c_payloads), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 if (FUNC_0(
  &VAR_3->payloads, VAR_1, VAR_2, sizeof(struct i2c_payload)))
  return VAR_3;

 FUNC_1(VAR_3);
 return ((void*)0);

}
