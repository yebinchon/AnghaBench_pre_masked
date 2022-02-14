
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,char const*,int,...) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0,
       const char *VAR_1,
       const u16 VAR_2[8])
{
 int VAR_3, VAR_4 = FUNC_2(VAR_0);

 for (VAR_3 = 0; VAR_3 <= VAR_4; VAR_3++) {
  unsigned int VAR_5 = VAR_2[VAR_3];

  if (VAR_5 == 0) {
   FUNC_0("%s WM%d latency not provided\n",
          VAR_1, VAR_3);
   continue;
  }





  if (FUNC_1(VAR_0) >= 9)
   VAR_5 *= 10;
  else if (VAR_3 > 0)
   VAR_5 *= 5;

  FUNC_0("%s WM%d latency %u (%u.%u usec)\n",
         VAR_1, VAR_3, VAR_2[VAR_3],
         VAR_5 / 10, VAR_5 % 10);
 }
}
