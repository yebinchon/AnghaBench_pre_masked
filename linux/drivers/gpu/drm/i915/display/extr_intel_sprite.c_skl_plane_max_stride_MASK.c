
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_plane {int dummy; } ;
struct drm_format_info {int* cpp; } ;


 struct drm_format_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int,int) ;

__attribute__((used)) static unsigned int
FUNC_3(struct intel_plane *VAR_0,
       u32 VAR_1, u64 VAR_2,
       unsigned int VAR_3)
{
 const struct drm_format_info *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = VAR_4->cpp[0];





 if (FUNC_1(VAR_3))
  return FUNC_2(8192, 32768 / VAR_5);
 else
  return FUNC_2(8192 * VAR_5, 32768);
}
