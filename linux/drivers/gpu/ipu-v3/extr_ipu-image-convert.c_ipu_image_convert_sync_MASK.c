
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {int dummy; } ;
struct ipu_image_convert_run {int ctx; } ;
struct ipu_image {int dummy; } ;
struct completion {int dummy; } ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;
typedef enum ipu_ic_task { ____Placeholder_ipu_ic_task } ipu_ic_task ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipu_image_convert_run*) ;
 int FUNC_1 (struct ipu_image_convert_run*) ;
 int VAR_1 ;
 int FUNC_2 (struct completion*) ;
 struct ipu_image_convert_run* FUNC_3 (struct ipu_soc*,int,struct ipu_image*,struct ipu_image*,int,int ,struct completion*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ipu_image_convert_run*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct completion*,int ) ;

int FUNC_8(struct ipu_soc *VAR_2, enum ipu_ic_task VAR_3,
      struct ipu_image *VAR_4, struct ipu_image *VAR_5,
      enum ipu_rotate_mode VAR_6)
{
 struct ipu_image_convert_run *VAR_7;
 struct completion VAR_8;
 int VAR_9;

 FUNC_2(&VAR_8);

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_1, &VAR_8);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_9 = FUNC_7(&VAR_8, FUNC_6(10000));
 VAR_9 = (VAR_9 == 0) ? -VAR_0 : 0;

 FUNC_4(VAR_7->ctx);
 FUNC_5(VAR_7);

 return VAR_9;
}
