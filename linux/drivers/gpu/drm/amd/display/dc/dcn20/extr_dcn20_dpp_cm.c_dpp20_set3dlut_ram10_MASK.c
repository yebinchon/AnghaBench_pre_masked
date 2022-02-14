
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
struct dc_rgb {size_t red; size_t green; size_t blue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,size_t) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static void FUNC_2(
  struct dpp *VAR_1,
  const struct dc_rgb *VAR_2,
  uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct dcn20_dpp *VAR_9 = FUNC_1(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = VAR_2[VAR_4].red;
  VAR_6 = VAR_2[VAR_4].green;
  VAR_7 = VAR_2[VAR_4].blue;

  VAR_8 = (VAR_5<<20) | (VAR_6<<10) | VAR_7;

  FUNC_0(VAR_0, 0, VAR_0, VAR_8);
 }

}
