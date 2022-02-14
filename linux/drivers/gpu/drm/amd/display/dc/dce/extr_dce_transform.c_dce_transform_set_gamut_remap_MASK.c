
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct xfm_grph_csc_adjustment {scalar_t__ gamut_adjust_type; struct fixed31_32* temperature_matrix; } ;
struct transform {int dummy; } ;
struct fixed31_32 {int dummy; } ;
struct dce_transform {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dce_transform* FUNC_0 (struct transform*) ;
 int FUNC_1 (int *,struct fixed31_32*,int) ;
 int FUNC_2 (struct dce_transform*,int *) ;

__attribute__((used)) static void FUNC_3(
 struct transform *VAR_2,
 const struct xfm_grph_csc_adjustment *VAR_3)
{
 struct dce_transform *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 if (VAR_3->gamut_adjust_type != VAR_1)

  FUNC_2(VAR_4, ((void*)0));
 else {
  struct fixed31_32 VAR_6[VAR_0];
  uint16_t VAR_7[VAR_0];

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_6[VAR_5] = VAR_3->temperature_matrix[VAR_5];

  FUNC_1(
   VAR_7, VAR_6, VAR_0);

  FUNC_2(VAR_4, VAR_7);
 }
}
