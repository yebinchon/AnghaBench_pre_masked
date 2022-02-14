
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fixed31_32 {int dummy; } ;
struct dpp_grph_csc_adjustment {scalar_t__ gamut_adjust_type; struct fixed31_32* temperature_matrix; } ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dcn10_dpp* FUNC_0 (struct dpp*) ;
 int FUNC_1 (int *,struct fixed31_32*,int) ;
 int FUNC_2 (struct dcn10_dpp*,int *,int ) ;

void FUNC_3(
 struct dpp *VAR_3,
 const struct dpp_grph_csc_adjustment *VAR_4)
{
 struct dcn10_dpp *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = 0;

 if (VAR_4->gamut_adjust_type != VAR_2)

  FUNC_2(VAR_5, ((void*)0), VAR_0);
 else {
  struct fixed31_32 VAR_7[12];
  uint16_t VAR_8[12];

  for (VAR_6 = 0; VAR_6 < 12; VAR_6++)
   VAR_7[VAR_6] = VAR_4->temperature_matrix[VAR_6];

  FUNC_1(
   VAR_8, VAR_7, 12);

  FUNC_2(VAR_5, VAR_8, VAR_1);
 }
}
