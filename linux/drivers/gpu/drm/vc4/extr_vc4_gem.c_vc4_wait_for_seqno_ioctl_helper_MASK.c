
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct drm_device*,unsigned long long,unsigned long long,int) ;

__attribute__((used)) static int
FUNC_2(struct drm_device *VAR_3,
    uint64_t VAR_4,
    uint64_t *VAR_5)
{
 unsigned long VAR_6 = VAR_2;
 int VAR_7 = FUNC_1(VAR_3, VAR_4, *VAR_5, 1);

 if ((VAR_7 == -VAR_0 || VAR_7 == -VAR_1) && *VAR_5 != ~0ull) {
  uint64_t VAR_8 = FUNC_0(VAR_2 - VAR_6);

  if (*VAR_5 >= VAR_8)
   *VAR_5 -= VAR_8;
 }

 return VAR_7;
}
