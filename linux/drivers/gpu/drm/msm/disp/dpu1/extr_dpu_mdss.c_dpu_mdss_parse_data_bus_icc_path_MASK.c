
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icc_path {int dummy; } ;
struct drm_device {int dev; } ;
struct dpu_mdss {int num_paths; struct icc_path** path; } ;


 scalar_t__ FUNC_0 (struct icc_path*) ;
 int FUNC_1 (struct icc_path*) ;
 struct icc_path* FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_0,
      struct dpu_mdss *VAR_1)
{
 struct icc_path *VAR_2 = FUNC_2(VAR_0->dev, "mdp0-mem");
 struct icc_path *VAR_3 = FUNC_2(VAR_0->dev, "mdp1-mem");

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->path[0] = VAR_2;
 VAR_1->num_paths = 1;

 if (!FUNC_0(VAR_3)) {
  VAR_1->path[1] = VAR_3;
  VAR_1->num_paths++;
 }

 return 0;
}
