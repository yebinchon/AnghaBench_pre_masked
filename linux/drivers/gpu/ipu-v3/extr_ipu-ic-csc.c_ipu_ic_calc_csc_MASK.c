
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_ic_csc {int out_cs; int in_cs; } ;
typedef enum v4l2_ycbcr_encoding { ____Placeholder_v4l2_ycbcr_encoding } v4l2_ycbcr_encoding ;
typedef enum v4l2_quantization { ____Placeholder_v4l2_quantization } v4l2_quantization ;
typedef enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;


 int FUNC_0 (struct ipu_ic_csc*) ;
 int FUNC_1 (int *,int,int,int) ;

int FUNC_2(struct ipu_ic_csc *VAR_0,
      enum v4l2_ycbcr_encoding VAR_1,
      enum v4l2_quantization VAR_2,
      enum ipu_color_space VAR_3,
      enum v4l2_ycbcr_encoding VAR_4,
      enum v4l2_quantization VAR_5,
      enum ipu_color_space VAR_6)
{
 FUNC_1(&VAR_0->in_cs, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->out_cs, VAR_4, VAR_5, VAR_6);

 return FUNC_0(VAR_0);
}
