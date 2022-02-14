
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int out_pixel_fmt; int in_pixel_fmt; int out_width; int in_width; int out_height; int in_height; } ;
union ipu_channel_param {TYPE_1__ video; } ;
typedef int uint32_t ;
struct ipu {int dev; } ;
typedef enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipu*,int ) ;
 int FUNC_4 (struct ipu*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct ipu *VAR_4,
         union ipu_channel_param *VAR_5, bool VAR_6)
{
 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10;
 enum ipu_color_space VAR_11, VAR_12;


 FUNC_0(VAR_5->video.in_height,
       VAR_5->video.out_height,
       &VAR_10, &VAR_9);
 VAR_7 = (VAR_9 << 30) | (VAR_10 << 16);


 FUNC_0(VAR_5->video.in_width,
       VAR_5->video.out_width,
       &VAR_10, &VAR_9);
 VAR_7 |= (VAR_9 << 14) | VAR_10;


 VAR_11 = FUNC_2(VAR_5->video.in_pixel_fmt);
 VAR_12 = FUNC_2(VAR_5->video.out_pixel_fmt);





 if (VAR_11 != VAR_12) {
  FUNC_1(VAR_4->dev, "Colourspace conversion unsupported!\n");
  return -VAR_0;
 }

 FUNC_4(VAR_4, VAR_7, VAR_3);

 VAR_8 = FUNC_3(VAR_4, VAR_1);

 if (VAR_6)
  VAR_8 &= ~VAR_2;
 else
  VAR_8 |= VAR_2;

 FUNC_4(VAR_4, VAR_8, VAR_1);

 return 0;
}
