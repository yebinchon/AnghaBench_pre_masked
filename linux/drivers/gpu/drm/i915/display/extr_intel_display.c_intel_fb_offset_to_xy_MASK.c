
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {scalar_t__ modifier; int* offsets; int * pitches; int height; int dev; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,int,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 unsigned int FUNC_3 (int ,struct drm_framebuffer const*,int) ;
 int FUNC_4 (int*,int*,struct drm_framebuffer const*,int,int ,int ,int,int ) ;
 int FUNC_5 (struct drm_framebuffer const*,int) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (unsigned int,int ) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(int *VAR_5, int *VAR_6,
     const struct drm_framebuffer *VAR_7,
     int VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_8(VAR_7->dev);
 unsigned int VAR_10;

 if (VAR_7->modifier != VAR_0 &&
     VAR_7->offsets[VAR_8] % FUNC_6(VAR_9)) {
  FUNC_1("Misaligned offset 0x%08x for color plane %d\n",
         VAR_7->offsets[VAR_8], VAR_8);
  return -VAR_2;
 }

 VAR_10 = FUNC_3(VAR_7->height, VAR_7, VAR_8);
 VAR_10 = FUNC_0(VAR_10, FUNC_5(VAR_7, VAR_8));


 if (FUNC_2(VAR_4, FUNC_7(VAR_10, VAR_7->pitches[VAR_8]),
       VAR_7->offsets[VAR_8])) {
  FUNC_1("Bad offset 0x%08x or pitch %d for color plane %d\n",
         VAR_7->offsets[VAR_8], VAR_7->pitches[VAR_8],
         VAR_8);
  return -VAR_3;
 }

 *VAR_5 = 0;
 *VAR_6 = 0;

 FUNC_4(VAR_5, VAR_6,
        VAR_7, VAR_8, VAR_1,
        VAR_7->pitches[VAR_8],
        VAR_7->offsets[VAR_8], 0);

 return 0;
}
