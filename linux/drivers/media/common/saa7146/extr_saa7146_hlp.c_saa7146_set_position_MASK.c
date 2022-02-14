
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {int bytesperline; } ;
struct TYPE_7__ {scalar_t__ base; TYPE_2__ fmt; } ;
struct saa7146_vv {scalar_t__ vflip; TYPE_4__* standard; TYPE_3__ ov_fb; TYPE_1__* ov_fmt; } ;
struct saa7146_video_dma {int pitch; scalar_t__ num_line_byte; int base_page; void* prot_addr; void* base_even; void* base_odd; } ;
struct saa7146_format {int swap; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_8__ {int v_field; scalar_t__ h_pixels; } ;
struct TYPE_5__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 struct saa7146_format* FUNC_1 (struct saa7146_dev*,void*) ;
 int FUNC_2 (struct saa7146_dev*,int,struct saa7146_video_dma*) ;

__attribute__((used)) static void FUNC_3(struct saa7146_dev *VAR_3, int VAR_4, int VAR_5, int VAR_6, enum v4l2_field VAR_7, u32 VAR_8)
{
 struct saa7146_vv *VAR_9 = VAR_3->vv_data;
 struct saa7146_format *VAR_10 = FUNC_1(VAR_3, VAR_8);

 int VAR_11 = VAR_9->ov_fmt->depth;
 int VAR_12 = VAR_9->ov_fb.fmt.bytesperline;







 u32 VAR_13 = (u32)(unsigned long)VAR_9->ov_fb.base;

 struct saa7146_video_dma VAR_14;


 VAR_14 = 2*VAR_12;
 if ( 0 == VAR_9->vflip ) {
  VAR_14 = VAR_13 + (VAR_5 * (VAR_14/2)) + (VAR_4 * (VAR_11 / 8));
  VAR_14 = VAR_14 + (VAR_14 / 2);
  VAR_14 = VAR_14 + (VAR_6 * (VAR_14 / 2));
 }
 else {
  VAR_14 = VAR_13 + ((VAR_5+VAR_6) * (VAR_14/2)) + (VAR_4 * (VAR_11 / 8));
  VAR_14 = VAR_14 - (VAR_14 / 2);
  VAR_14 = VAR_14 - (VAR_6 * (VAR_14 / 2));
 }

 if (FUNC_0(VAR_7)) {
 } else if (VAR_7 == VAR_0) {

  VAR_14 = VAR_14;
  VAR_14 /= 2;
 } else if (VAR_7 == VAR_2) {
  VAR_14 = VAR_14;
  VAR_14 /= 2;
 } else if (VAR_7 == VAR_1) {
  VAR_14 = VAR_14;
  VAR_14 = VAR_14;
  VAR_14 /= 2;
 }

 if ( 0 != VAR_9->vflip ) {
  VAR_14 *= -1;
 }

 VAR_14 = VAR_10->swap;
 VAR_14 = (VAR_9->standard->v_field<<16)+VAR_9->standard->h_pixels;

 FUNC_2(VAR_3, 1, &VAR_14);
}
