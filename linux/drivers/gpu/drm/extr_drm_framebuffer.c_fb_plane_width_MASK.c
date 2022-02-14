
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_format_info {int hsub; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_0,
     const struct drm_format_info *VAR_1, int VAR_2)
{
 if (VAR_2 == 0)
  return VAR_0;

 return FUNC_0(VAR_0, VAR_1->hsub);
}
