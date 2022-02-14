
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_pixel_processor {int dummy; } ;
struct dcn10_opp {int dummy; } ;
struct clamping_and_pixel_encoding_params {scalar_t__ pixel_encoding; } ;
struct bit_depth_reduction_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct dcn10_opp* FUNC_1 (struct output_pixel_processor*) ;
 int FUNC_2 (struct output_pixel_processor*,struct bit_depth_reduction_params*) ;
 int FUNC_3 (struct output_pixel_processor*,struct clamping_and_pixel_encoding_params*) ;

void FUNC_4(
 struct output_pixel_processor *VAR_3,
 struct bit_depth_reduction_params *VAR_4,
 struct clamping_and_pixel_encoding_params *VAR_5)
{
 struct dcn10_opp *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->pixel_encoding == VAR_2)
  FUNC_0(VAR_1, VAR_0, 0);



 FUNC_2(
  VAR_3,
  VAR_4);

 FUNC_3(
  VAR_3,
  VAR_5);

 return;
}
