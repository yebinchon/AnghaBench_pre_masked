
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct drm_device *VAR_0, u32 VAR_1,
  u32 VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 100000;

 while (FUNC_0(FUNC_1(VAR_1), VAR_3, VAR_4) != VAR_2) {
  if (--VAR_5 == 0)
   return 1;
 }

 return 0;
}
