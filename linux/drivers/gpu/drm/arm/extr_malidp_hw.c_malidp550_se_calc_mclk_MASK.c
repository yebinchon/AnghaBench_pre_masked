
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {unsigned long pixelclock; unsigned long hactive; unsigned long hfront_porch; unsigned long hback_porch; unsigned long hsync_len; } ;
struct malidp_se_config {unsigned long output_w; unsigned long input_h; unsigned long output_h; int input_w; scalar_t__ scale_enable; } ;
struct malidp_hw_device {int mclk; } ;


 int FUNC_0 (char*,unsigned long) ;
 long VAR_0 ;
 long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_4(struct malidp_hw_device *VAR_1,
       struct malidp_se_config *VAR_2,
       struct videomode *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5 = VAR_3->pixelclock;
 unsigned long VAR_6 = VAR_3->hactive + VAR_3->hfront_porch +
          VAR_3->hback_porch + VAR_3->hsync_len;
 unsigned long VAR_7 = 1, VAR_8 = 1;
 long VAR_9;

 if (VAR_2->scale_enable) {
  VAR_7 = FUNC_2(VAR_2->input_w, VAR_2->output_w) *
       VAR_2->input_h;
  VAR_7 += VAR_2->output_w *
        (VAR_2->output_h -
         FUNC_3(VAR_2->input_h, VAR_2->output_h));
  VAR_8 = (VAR_6 - 2) * VAR_2->output_h;
 }


 if (VAR_7 < VAR_8)
  VAR_7 = VAR_8 = 1;
 VAR_4 = (VAR_5 * VAR_7) / VAR_8;
 VAR_9 = FUNC_1(VAR_1->mclk);
 if (VAR_9 < VAR_4) {
  FUNC_0("mclk requirement of %lu kHz can't be met.\n",
     VAR_4 / 1000);
  return -VAR_0;
 }
 return VAR_9;
}
