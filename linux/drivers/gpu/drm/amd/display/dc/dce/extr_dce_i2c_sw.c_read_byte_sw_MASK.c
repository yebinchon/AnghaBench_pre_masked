
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ddc {int dummy; } ;
struct dc_context {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ddc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dc_context*,struct ddc*,int) ;
 int FUNC_3 (struct ddc*,int ,int) ;

__attribute__((used)) static bool FUNC_4(
 struct dc_context *VAR_2,
 struct ddc *VAR_3,
 uint16_t VAR_4,
 uint8_t *VAR_5,
 bool VAR_6)
{
 int32_t VAR_7 = 7;

 uint8_t VAR_8 = 0;





 do {
  FUNC_3(VAR_3, VAR_0, 1);

  if (!FUNC_2(VAR_2, VAR_3, VAR_4))
   return 0;

  if (FUNC_0(VAR_3, VAR_1))
   VAR_8 |= (1 << VAR_7);

  FUNC_3(VAR_3, VAR_0, 0);

  FUNC_1(VAR_4 << 1);

  --VAR_7;
 } while (VAR_7 >= 0);



 *VAR_5 = VAR_8;

 FUNC_1(VAR_4);





 FUNC_3(VAR_3, VAR_1, !VAR_6);

 FUNC_1(VAR_4);

 FUNC_3(VAR_3, VAR_0, 1);

 if (!FUNC_2(VAR_2, VAR_3, VAR_4))
  return 0;

 FUNC_3(VAR_3, VAR_0, 0);

 FUNC_1(VAR_4);

 FUNC_3(VAR_3, VAR_1, 1);

 FUNC_1(VAR_4);

 return 1;
}
