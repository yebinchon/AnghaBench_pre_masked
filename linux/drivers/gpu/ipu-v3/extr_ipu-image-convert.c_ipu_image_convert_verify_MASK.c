
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct ipu_image {TYPE_1__ pix; } ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;


 int VAR_0 ;
 int FUNC_0 (struct ipu_image*,struct ipu_image*,int) ;

int FUNC_1(struct ipu_image *VAR_1, struct ipu_image *VAR_2,
        enum ipu_rotate_mode VAR_3)
{
 struct ipu_image VAR_4, VAR_5;

 VAR_4 = *VAR_1;
 VAR_5 = *VAR_2;

 FUNC_0(&VAR_4, &VAR_5, VAR_3);

 if (VAR_4.pix.width != VAR_1->pix.width ||
     VAR_4.pix.height != VAR_1->pix.height ||
     VAR_5.pix.width != VAR_2->pix.width ||
     VAR_5.pix.height != VAR_2->pix.height)
  return -VAR_0;

 return 0;
}
