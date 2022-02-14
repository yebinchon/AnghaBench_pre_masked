
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {int dummy; } ;
struct ipu_image_convert_run {int out_phys; int in_phys; struct ipu_image_convert_ctx* ctx; } ;
struct ipu_image_convert_ctx {int dummy; } ;
struct ipu_image {int phys0; } ;
typedef int ipu_image_convert_cb_t ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;
typedef enum ipu_ic_task { ____Placeholder_ipu_ic_task } ipu_ic_task ;


 int VAR_0 ;
 struct ipu_image_convert_run* FUNC_0 (struct ipu_image_convert_ctx*) ;
 struct ipu_image_convert_run* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ipu_image_convert_ctx*) ;
 struct ipu_image_convert_ctx* FUNC_3 (struct ipu_soc*,int,struct ipu_image*,struct ipu_image*,int,int ,void*) ;
 int FUNC_4 (struct ipu_image_convert_run*) ;
 int FUNC_5 (struct ipu_image_convert_ctx*) ;
 int FUNC_6 (struct ipu_image_convert_run*) ;
 struct ipu_image_convert_run* FUNC_7 (int,int ) ;

struct ipu_image_convert_run *
FUNC_8(struct ipu_soc *VAR_2, enum ipu_ic_task VAR_3,
    struct ipu_image *VAR_4, struct ipu_image *VAR_5,
    enum ipu_rotate_mode VAR_6,
    ipu_image_convert_cb_t VAR_7,
    void *VAR_8)
{
 struct ipu_image_convert_ctx *VAR_9;
 struct ipu_image_convert_run *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  FUNC_5(VAR_9);
  return FUNC_1(-VAR_0);
 }

 VAR_10->ctx = VAR_9;
 VAR_10->in_phys = VAR_4->phys0;
 VAR_10->out_phys = VAR_5->phys0;

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11) {
  FUNC_5(VAR_9);
  FUNC_6(VAR_10);
  return FUNC_1(VAR_11);
 }

 return VAR_10;
}
