
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ipu_image_pixfmt {scalar_t__ fourcc; } ;


 unsigned int FUNC_0 (struct ipu_image_pixfmt*) ;
 struct ipu_image_pixfmt* VAR_0 ;

__attribute__((used)) static const struct ipu_image_pixfmt *FUNC_1(u32 VAR_1)
{
 const struct ipu_image_pixfmt *VAR_2 = ((void*)0);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].fourcc == VAR_1) {
   VAR_2 = &VAR_0[VAR_3];
   break;
  }
 }

 return VAR_2;
}
