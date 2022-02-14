
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct ddc {int dummy; } ;
struct dc_context {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ddc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dc_context*,struct ddc*,int ) ;
 int FUNC_3 (struct ddc*,int ,int) ;

__attribute__((used)) static bool FUNC_4(
 struct dc_context *VAR_3,
 struct ddc *VAR_4,
 uint16_t VAR_5)
{
 uint32_t VAR_6 = 0;





 FUNC_3(VAR_4, VAR_1, 1);

 FUNC_1(VAR_5);

 do {
  FUNC_3(VAR_4, VAR_2, 1);

  if (!FUNC_0(VAR_4, VAR_2)) {
   ++VAR_6;
   continue;
  }

  FUNC_1(VAR_5);

  FUNC_3(VAR_4, VAR_1, 1);

  if (!FUNC_2(VAR_3, VAR_4, VAR_5))
   break;

  FUNC_3(VAR_4, VAR_2, 0);

  FUNC_1(VAR_5);

  FUNC_3(VAR_4, VAR_1, 0);

  FUNC_1(VAR_5);

  return 1;
 } while (VAR_6 <= VAR_0);

 return 0;
}
