
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_pixel_processor {int dummy; } ;
struct oppbuf_params {int num_segment_padded_pixels; int pixel_repetition; int mso_overlap_pixel_num; int mso_segmentation; int active_width; } ;
struct dcn10_opp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct dcn10_opp* FUNC_2 (struct output_pixel_processor*) ;

void FUNC_3(
 struct output_pixel_processor *VAR_7,
 struct oppbuf_params *VAR_8)
{
 struct dcn10_opp *VAR_9 = FUNC_2(VAR_7);


 FUNC_1(VAR_1, VAR_0, VAR_8->active_width);







 FUNC_1(VAR_1, VAR_3, VAR_8->mso_segmentation);


 FUNC_1(VAR_1, VAR_5, VAR_8->mso_overlap_pixel_num);




 FUNC_1(VAR_1, VAR_6, VAR_8->pixel_repetition);






}
