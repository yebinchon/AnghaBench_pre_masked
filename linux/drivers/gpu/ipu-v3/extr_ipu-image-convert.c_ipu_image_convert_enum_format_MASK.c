
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_image_pixfmt {int fourcc; } ;


 scalar_t__ FUNC_0 (struct ipu_image_pixfmt*) ;
 int VAR_0 ;
 struct ipu_image_pixfmt* VAR_1 ;

int FUNC_1(int VAR_2, u32 *VAR_3)
{
 const struct ipu_image_pixfmt *VAR_4;

 if (VAR_2 >= (int)FUNC_0(VAR_1))
  return -VAR_0;


 VAR_4 = &VAR_1[VAR_2];
 *VAR_3 = VAR_4->fourcc;
 return 0;
}
