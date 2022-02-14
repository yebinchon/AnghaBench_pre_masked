
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int gmbus_wait_queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct drm_i915_private *VAR_5, u32 VAR_6, u32 VAR_7)
{
 FUNC_0(VAR_4);
 u32 VAR_8;
 int VAR_9;





 if (!FUNC_1(VAR_5))
  VAR_7 = 0;

 FUNC_4(&VAR_5->gmbus_wait_queue, &VAR_4);
 FUNC_3(VAR_2, VAR_7);

 VAR_6 |= VAR_3;
 VAR_9 = FUNC_7((VAR_8 = FUNC_2(VAR_1)) & VAR_6, 2);
 if (VAR_9)
  VAR_9 = FUNC_6((VAR_8 = FUNC_2(VAR_1)) & VAR_6, 50);

 FUNC_3(VAR_2, 0);
 FUNC_5(&VAR_5->gmbus_wait_queue, &VAR_4);

 if (VAR_8 & VAR_3)
  return -VAR_0;

 return VAR_9;
}
