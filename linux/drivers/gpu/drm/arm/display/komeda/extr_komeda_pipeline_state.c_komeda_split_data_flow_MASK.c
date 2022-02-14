
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct komeda_scaler {scalar_t__ scaling_split_overlap; scalar_t__ enh_split_overlap; } ;
struct komeda_data_flow_cfg {int right_part; int overlap; int in_h; int in_w; int out_w; int out_x; scalar_t__ left_crop; scalar_t__ right_crop; scalar_t__ en_img_enhancement; scalar_t__ en_scaling; scalar_t__ in_x; scalar_t__ is_yuv; scalar_t__ in_y; scalar_t__ blending_zorder; int rot; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*,int) ;

__attribute__((used)) static void FUNC_4(struct komeda_scaler *VAR_0,
       struct komeda_data_flow_cfg *VAR_1,
       struct komeda_data_flow_cfg *VAR_2,
       struct komeda_data_flow_cfg *VAR_3)
{
 bool VAR_4 = FUNC_1(VAR_1->rot);
 bool VAR_5 = FUNC_2(VAR_1->rot);
 u32 VAR_6, VAR_7, VAR_8;

 FUNC_3(VAR_2, VAR_1, sizeof(*VAR_1));
 FUNC_3(VAR_3, VAR_1, sizeof(*VAR_1));

 VAR_2->right_part = 0;
 VAR_3->right_part = 1;
 VAR_3->blending_zorder = VAR_1->blending_zorder + 1;

 VAR_8 = 0;
 if (VAR_1->en_scaling && VAR_0)
  VAR_8 += VAR_0->scaling_split_overlap;




 VAR_1->overlap = VAR_8;

 if (VAR_1->en_img_enhancement && VAR_0)
  VAR_8 += VAR_0->enh_split_overlap;

 VAR_2->overlap = VAR_8;
 VAR_3->overlap = VAR_8;






 if (VAR_4) {
  if (VAR_1->en_scaling) {
   VAR_2->in_h = FUNC_0(VAR_1->in_h, 2) / 2 + VAR_2->overlap;
   VAR_3->in_h = VAR_2->in_h;
  } else if (VAR_1->en_img_enhancement) {

   VAR_2->in_h = FUNC_0(VAR_1->in_h, 2) / 2 + VAR_2->overlap;
   VAR_3->in_h = VAR_1->in_h / 2 + VAR_3->overlap;
  } else {

   VAR_2->in_h = FUNC_0(((VAR_1->in_h + 1) >> 1), 2);
   VAR_3->in_h = VAR_1->in_h - VAR_2->in_h;
  }
  if ((VAR_8 != 0) && VAR_1->is_yuv) {
   VAR_2->in_h = FUNC_0(VAR_2->in_h, 2);
   VAR_3->in_h = FUNC_0(VAR_3->in_h, 2);
  }

  if (VAR_5)
   VAR_2->in_y = VAR_1->in_y + VAR_1->in_h - VAR_2->in_h;
  else
   VAR_3->in_y = VAR_1->in_y + VAR_1->in_h - VAR_3->in_h;
 } else {
  if (VAR_1->en_scaling) {
   VAR_2->in_w = FUNC_0(VAR_1->in_w, 2) / 2 + VAR_2->overlap;
   VAR_3->in_w = VAR_2->in_w;
  } else if (VAR_1->en_img_enhancement) {
   VAR_2->in_w = FUNC_0(VAR_1->in_w, 2) / 2 + VAR_2->overlap;
   VAR_3->in_w = VAR_1->in_w / 2 + VAR_3->overlap;
  } else {
   VAR_2->in_w = FUNC_0(((VAR_1->in_w + 1) >> 1), 2);
   VAR_3->in_w = VAR_1->in_w - VAR_2->in_w;
  }


  if ((VAR_8 != 0) && VAR_1->is_yuv) {
   VAR_2->in_w = FUNC_0(VAR_2->in_w, 2);
   VAR_3->in_w = FUNC_0(VAR_3->in_w, 2);
  }


  if (VAR_5)
   VAR_2->in_x = VAR_1->in_w + VAR_1->in_x - VAR_2->in_w;
  else
   VAR_3->in_x = VAR_1->in_w + VAR_1->in_x - VAR_3->in_w;
 }


 if (VAR_1->en_scaling || VAR_1->en_img_enhancement)
  VAR_2->out_w = ((VAR_1->out_w + 1) >> 1);
 else
  VAR_2->out_w = FUNC_0(((VAR_1->out_w + 1) >> 1), 2);

 VAR_3->out_w = VAR_1->out_w - VAR_2->out_w;

 VAR_2->out_x = VAR_1->out_x;
 VAR_3->out_x = VAR_2->out_w + VAR_2->out_x;



 if (VAR_4) {
  VAR_6 = (VAR_1->out_w * VAR_2->in_h) / VAR_1->in_h;
  VAR_7 = (VAR_1->out_w * VAR_3->in_h) / VAR_1->in_h;
 } else {
  VAR_6 = (VAR_1->out_w * VAR_2->in_w) / VAR_1->in_w;
  VAR_7 = (VAR_1->out_w * VAR_3->in_w) / VAR_1->in_w;
 }

 VAR_2->left_crop = 0;
 VAR_2->right_crop = VAR_6 - VAR_2->out_w;
 VAR_3->left_crop = VAR_7 - VAR_3->out_w;
 VAR_3->right_crop = 0;


 VAR_2->out_w += VAR_2->right_crop + VAR_2->left_crop;
 VAR_3->out_w += VAR_3->right_crop + VAR_3->left_crop;
}
