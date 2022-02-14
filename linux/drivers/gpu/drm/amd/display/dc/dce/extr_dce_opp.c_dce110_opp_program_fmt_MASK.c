
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_pixel_processor {int dummy; } ;
struct clamping_and_pixel_encoding_params {scalar_t__ pixel_encoding; } ;
struct bit_depth_reduction_params {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct output_pixel_processor*,struct bit_depth_reduction_params*) ;
 int FUNC_1 (struct output_pixel_processor*,struct clamping_and_pixel_encoding_params*) ;
 int FUNC_2 (struct output_pixel_processor*) ;
 int FUNC_3 (struct output_pixel_processor*) ;

void FUNC_4(
 struct output_pixel_processor *VAR_1,
 struct bit_depth_reduction_params *VAR_2,
 struct clamping_and_pixel_encoding_params *VAR_3)
{



 if (VAR_3->pixel_encoding == VAR_0)
  FUNC_2(VAR_1);

 FUNC_0(
  VAR_1,
  VAR_2);

 FUNC_1(
  VAR_1,
  VAR_3);

 if (VAR_3->pixel_encoding == VAR_0)
  FUNC_3(VAR_1);

 return;
}
