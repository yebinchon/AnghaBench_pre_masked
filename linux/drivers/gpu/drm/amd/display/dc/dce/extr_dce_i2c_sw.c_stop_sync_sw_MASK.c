
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ddc {int dummy; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ddc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dc_context*,struct ddc*,int ) ;
 int FUNC_3 (struct ddc*,int ,int) ;

__attribute__((used)) static bool FUNC_4(
 struct dc_context *VAR_2,
 struct ddc *VAR_3,
 uint16_t VAR_4)
{
 uint32_t VAR_5 = 0;





 FUNC_3(VAR_3, VAR_0, 0);

 FUNC_1(VAR_4);

 FUNC_3(VAR_3, VAR_1, 0);

 FUNC_1(VAR_4);

 FUNC_3(VAR_3, VAR_0, 1);

 if (!FUNC_2(VAR_2, VAR_3, VAR_4))
  return 0;

 FUNC_3(VAR_3, VAR_1, 1);

 do {
  FUNC_1(VAR_4);

  if (FUNC_0(VAR_3, VAR_1))
   return 1;

  ++VAR_5;
 } while (VAR_5 <= 2);

 return 0;
}
