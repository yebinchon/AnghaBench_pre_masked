
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_tvout {int debugfs_registered; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_2__ {int primary; } ;


 struct sti_tvout* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct sti_tvout*,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_encoder *VAR_0)
{
 struct sti_tvout *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 if (VAR_1->debugfs_registered)
  return 0;

 VAR_2 = FUNC_1(VAR_1, VAR_0->dev->primary);
 if (VAR_2)
  return VAR_2;

 VAR_1->debugfs_registered = 1;
 return 0;
}
