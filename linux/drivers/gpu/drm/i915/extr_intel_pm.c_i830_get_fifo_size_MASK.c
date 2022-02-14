
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;


 int FUNC_0 (char*,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_private *VAR_3,
         enum i9xx_plane_id VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_0);
 int VAR_6;

 VAR_6 = VAR_5 & 0x1ff;
 if (VAR_4 == VAR_2)
  VAR_6 = ((VAR_5 >> VAR_1) & 0x1ff) - VAR_6;
 VAR_6 >>= 1;

 FUNC_0("FIFO size - (0x%08x) %c: %d\n",
        VAR_5, FUNC_2(VAR_4), VAR_6);

 return VAR_6;
}
