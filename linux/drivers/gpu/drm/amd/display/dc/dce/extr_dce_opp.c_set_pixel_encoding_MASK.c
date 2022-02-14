
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce110_opp {TYPE_1__* opp_mask; } ;
struct clamping_and_pixel_encoding_params {scalar_t__ pixel_encoding; } ;
struct TYPE_2__ {scalar_t__ FMT_CBCR_BIT_REDUCTION_BYPASS; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_2(
 struct dce110_opp *VAR_7,
 const struct clamping_and_pixel_encoding_params *VAR_8)
{
 if (VAR_7->opp_mask->FMT_CBCR_BIT_REDUCTION_BYPASS)
  FUNC_1(VAR_1,
    VAR_2, 0,
    VAR_3, 0,
    VAR_0, 0);
 else
  FUNC_0(VAR_1,
    VAR_2, 0,
    VAR_3, 0);

 if (VAR_8->pixel_encoding == VAR_6) {
  FUNC_0(VAR_1,
    VAR_2, 1,
    VAR_4, 0);
 }
 if (VAR_8->pixel_encoding == VAR_5) {
  FUNC_1(VAR_1,
    VAR_2, 2,
    VAR_3, 2,
    VAR_0, 1);
 }

}
