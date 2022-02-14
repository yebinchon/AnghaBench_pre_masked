
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bo {int gem; int base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct tegra_bo* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct tegra_bo*) ;
 struct tegra_bo* FUNC_6 (int,int ) ;
 size_t FUNC_7 (size_t,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct tegra_bo *FUNC_8(struct drm_device *VAR_4,
           size_t VAR_5)
{
 struct tegra_bo *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_6->base, &VAR_3);
 VAR_5 = FUNC_7(VAR_5, VAR_2);

 VAR_7 = FUNC_2(VAR_4, &VAR_6->gem, VAR_5);
 if (VAR_7 < 0)
  goto free;

 VAR_7 = FUNC_1(&VAR_6->gem);
 if (VAR_7 < 0)
  goto release;

 return VAR_6;

release:
 FUNC_3(&VAR_6->gem);
free:
 FUNC_5(VAR_6);
 return FUNC_0(VAR_7);
}
