
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int gmbus_wait_queue; int uncore; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct drm_i915_private *VAR_5)
{
 FUNC_0(VAR_4);
 u32 VAR_6;
 int VAR_7;


 VAR_6 = 0;
 if (FUNC_1(VAR_5))
  VAR_6 = VAR_3;

 FUNC_3(&VAR_5->gmbus_wait_queue, &VAR_4);
 FUNC_2(VAR_1, VAR_6);

 VAR_7 = FUNC_4(&VAR_5->uncore,
      VAR_0, VAR_2, 0,
      10);

 FUNC_2(VAR_1, 0);
 FUNC_5(&VAR_5->gmbus_wait_queue, &VAR_4);

 return VAR_7;
}
