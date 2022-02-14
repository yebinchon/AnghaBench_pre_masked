
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ddc {int dummy; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 (struct dc_context*,struct ddc*,int ,int *,int) ;
 int FUNC_1 (struct dc_context*,struct ddc*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(
 struct dc_context *VAR_0,
 struct ddc *VAR_1,
 uint16_t VAR_2,
 uint8_t VAR_3,
 uint32_t VAR_4,
 uint8_t *VAR_5)
{
 uint32_t VAR_6 = 0;

 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3))
  return 0;

 while (VAR_6 < VAR_4) {
  if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5 + VAR_6,
   VAR_6 < VAR_4 - 1))
   return 0;
  ++VAR_6;
 }

 return 1;
}
