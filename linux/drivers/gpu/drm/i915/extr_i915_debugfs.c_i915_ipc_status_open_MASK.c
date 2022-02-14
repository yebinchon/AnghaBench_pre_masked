
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct drm_i915_private* i_private; } ;
struct file {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_1 (struct file*,int ,struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_2->i_private;

 if (!FUNC_0(VAR_4))
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_1, VAR_4);
}
