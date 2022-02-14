
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_format_info {int* cpp; } ;





 struct drm_format_info* FUNC_0 (int) ;

int FUNC_1(u32 VAR_0)
{
 const struct drm_format_info *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = VAR_1->cpp[0] * 8;

 if (VAR_2 == 0) {
  switch (VAR_0) {
  case 130:
   VAR_2 = 30;
   break;
  case 129:
   VAR_2 = 15;
   break;
  case 128:
   VAR_2 = 12;
   break;
  default:
   VAR_2 = 0;
  }
 }

 return VAR_2;
}
