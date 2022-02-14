
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_image_pixfmt {int bpp; scalar_t__ planar; } ;
struct TYPE_2__ {void* pixelformat; int height; int width; int bytesperline; int sizeimage; int field; } ;
struct ipu_image {TYPE_1__ pix; } ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int,int,int,int) ;
 struct ipu_image_pixfmt* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,struct ipu_image_pixfmt const*,int) ;
 int FUNC_6 (int ,struct ipu_image_pixfmt const*,int) ;

void FUNC_7(struct ipu_image *VAR_9, struct ipu_image *VAR_10,
         enum ipu_rotate_mode VAR_11)
{
 const struct ipu_image_pixfmt *VAR_12, *VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;

 VAR_12 = FUNC_1(VAR_9->pix.pixelformat);
 VAR_13 = FUNC_1(VAR_10->pix.pixelformat);


 if (!VAR_12) {
  VAR_9->pix.pixelformat = VAR_7;
  VAR_12 = FUNC_1(VAR_7);
 }
 if (!VAR_13) {
  VAR_10->pix.pixelformat = VAR_7;
  VAR_13 = FUNC_1(VAR_7);
 }


 VAR_9->pix.field = VAR_10->pix.field = VAR_6;


 if (FUNC_3(VAR_11)) {
  VAR_10->pix.height = FUNC_4(VAR_8, VAR_10->pix.height,
     VAR_9->pix.width / 4);
  VAR_10->pix.width = FUNC_4(VAR_8, VAR_10->pix.width,
           VAR_9->pix.height / 4);
 } else {
  VAR_10->pix.width = FUNC_4(VAR_8, VAR_10->pix.width,
           VAR_9->pix.width / 4);
  VAR_10->pix.height = FUNC_4(VAR_8, VAR_10->pix.height,
     VAR_9->pix.height / 4);
 }


 VAR_16 = FUNC_2(FUNC_6(VAR_0, VAR_12,
         VAR_11));
 VAR_17 = FUNC_2(FUNC_5(VAR_0, VAR_12,
          VAR_11));
 VAR_9->pix.width = FUNC_0(VAR_9->pix.width, VAR_5, VAR_3,
        VAR_16);
 VAR_9->pix.height = FUNC_0(VAR_9->pix.height, VAR_4, VAR_2,
         VAR_17);


 VAR_14 = FUNC_2(FUNC_6(VAR_1, VAR_13,
          VAR_11));
 VAR_15 = FUNC_2(FUNC_5(VAR_1, VAR_13,
           VAR_11));
 VAR_10->pix.width = FUNC_0(VAR_10->pix.width, VAR_5, VAR_3,
         VAR_14);
 VAR_10->pix.height = FUNC_0(VAR_10->pix.height, VAR_4, VAR_2,
          VAR_15);


 VAR_9->pix.bytesperline = VAR_12->planar ?
  FUNC_0(VAR_9->pix.width, 2 << VAR_16, VAR_3,
       VAR_16) :
  FUNC_0((VAR_9->pix.width * VAR_12->bpp) >> 3,
       ((2 << VAR_16) * VAR_12->bpp) >> 3,
       (VAR_3 * VAR_12->bpp) >> 3,
       VAR_16);
 VAR_9->pix.sizeimage = VAR_12->planar ?
  (VAR_9->pix.height * VAR_9->pix.bytesperline * VAR_12->bpp) >> 3 :
  VAR_9->pix.height * VAR_9->pix.bytesperline;
 VAR_10->pix.bytesperline = VAR_13->planar ? VAR_10->pix.width :
  (VAR_10->pix.width * VAR_13->bpp) >> 3;
 VAR_10->pix.sizeimage = VAR_13->planar ?
  (VAR_10->pix.height * VAR_10->pix.bytesperline * VAR_13->bpp) >> 3 :
  VAR_10->pix.height * VAR_10->pix.bytesperline;
}
