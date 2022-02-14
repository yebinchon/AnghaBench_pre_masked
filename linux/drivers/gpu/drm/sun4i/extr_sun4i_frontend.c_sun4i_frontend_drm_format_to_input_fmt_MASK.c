
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_format_info {int is_yuv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_format_info const*) ;
 scalar_t__ FUNC_1 (struct drm_format_info const*) ;
 scalar_t__ FUNC_2 (struct drm_format_info const*) ;
 scalar_t__ FUNC_3 (struct drm_format_info const*) ;

__attribute__((used)) static int
FUNC_4(const struct drm_format_info *VAR_6,
           u32 *VAR_7)
{
 if (!VAR_6->is_yuv)
  *VAR_7 = VAR_1;
 else if (FUNC_0(VAR_6))
  *VAR_7 = VAR_2;
 else if (FUNC_1(VAR_6))
  *VAR_7 = VAR_3;
 else if (FUNC_2(VAR_6))
  *VAR_7 = VAR_4;
 else if (FUNC_3(VAR_6))
  *VAR_7 = VAR_5;
 else
  return -VAR_0;

 return 0;
}
