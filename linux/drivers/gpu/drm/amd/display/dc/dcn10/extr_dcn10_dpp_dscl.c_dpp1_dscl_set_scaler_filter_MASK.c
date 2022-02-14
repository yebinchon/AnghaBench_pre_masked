
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct dcn10_dpp {int dummy; } ;
typedef enum dcn10_coef_filter_type_sel { ____Placeholder_dcn10_coef_filter_type_sel } dcn10_coef_filter_type_sel ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int ,int,int ,scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(
  struct dcn10_dpp *VAR_10,
  uint32_t VAR_11,
  enum dcn10_coef_filter_type_sel VAR_12,
  const uint16_t *VAR_13)
{
 const int VAR_14 = (VAR_11 + 1) / 2;
 int VAR_15;
 int VAR_16;
 uint16_t VAR_17, VAR_18;

 FUNC_0(VAR_9, 0,
  VAR_8, 0,
  VAR_6, 0,
  VAR_3, VAR_12);

 for (VAR_15 = 0; VAR_15 < (VAR_0 / 2 + 1); VAR_15++) {
  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
   VAR_18 = VAR_13[VAR_15 * VAR_11 + 2 * VAR_16];
   if ((VAR_16 * 2 + 1) < VAR_11)
    VAR_17 = VAR_13[VAR_15 * VAR_11 + 2 * VAR_16 + 1];
   else
    VAR_17 = 0;

   FUNC_1(VAR_7, 0,

    VAR_1, VAR_18,

    VAR_2, 1,

    VAR_4, VAR_17,

    VAR_5, 1);
  }
 }

}
