
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct ddc {int dummy; } ;
struct dc_context {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ddc*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(
 struct dc_context *VAR_2,
 struct ddc *VAR_3,
 uint16_t VAR_4)
{
 uint32_t VAR_5 = 0;
 uint32_t VAR_6 = VAR_0 / VAR_4;

 FUNC_1(VAR_4);

 do {
  if (FUNC_0(VAR_3, VAR_1))
   return 1;

  FUNC_1(VAR_4);

  ++VAR_5;
 } while (VAR_5 <= VAR_6);

 return 0;
}
