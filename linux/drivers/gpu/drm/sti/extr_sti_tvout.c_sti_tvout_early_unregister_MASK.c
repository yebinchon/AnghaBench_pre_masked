
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_tvout {int debugfs_registered; } ;
struct drm_encoder {int dummy; } ;


 struct sti_tvout* FUNC_0 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_0)
{
 struct sti_tvout *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->debugfs_registered)
  return;

 VAR_1->debugfs_registered = 0;
}
