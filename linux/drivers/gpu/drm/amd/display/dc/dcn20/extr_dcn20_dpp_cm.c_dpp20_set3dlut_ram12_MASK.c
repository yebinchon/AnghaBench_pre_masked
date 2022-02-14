
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
struct dc_rgb {int red; int green; int blue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int ,int) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static void FUNC_2(
  struct dpp *VAR_3,
  const struct dc_rgb *VAR_4,
  uint32_t VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct dcn20_dpp *VAR_13 = FUNC_1(VAR_3);

 for (VAR_6 = 0 ; VAR_6 < VAR_5; VAR_6 += 2) {
  VAR_7 = VAR_4[VAR_6].red<<4;
  VAR_8 = VAR_4[VAR_6].green<<4;
  VAR_9 = VAR_4[VAR_6].blue<<4;
  VAR_10 = VAR_4[VAR_6+1].red<<4;
  VAR_11 = VAR_4[VAR_6+1].green<<4;
  VAR_12 = VAR_4[VAR_6+1].blue<<4;

  FUNC_0(VAR_0, 0,
    VAR_1, VAR_7,
    VAR_2, VAR_10);

  FUNC_0(VAR_0, 0,
    VAR_1, VAR_8,
    VAR_2, VAR_11);

  FUNC_0(VAR_0, 0,
    VAR_1, VAR_9,
    VAR_2, VAR_12);

 }
}
