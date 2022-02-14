
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct dc_context {int dummy; } ;
struct color_matrices_reg {scalar_t__ csc_c11_c12; scalar_t__ csc_c33_c34; } ;


 int FUNC_0 (scalar_t__,int ,int ,int const,int ,int const) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(
  struct dc_context *VAR_2,
  const uint16_t *VAR_3,
  const struct color_matrices_reg *VAR_4)
{
 uint32_t VAR_5;
 unsigned int VAR_6 = 0;

 for (VAR_5 = VAR_4->csc_c11_c12;
   VAR_5 <= VAR_4->csc_c33_c34;
   VAR_5++) {

  const uint16_t *VAR_7 = &(VAR_3[2 * VAR_6]);
  const uint16_t *VAR_8 = &(VAR_3[(2 * VAR_6) + 1]);

  FUNC_0(VAR_5, 0,
    VAR_0, *VAR_7,
    VAR_1, *VAR_8);

  VAR_6++;
 }

}
