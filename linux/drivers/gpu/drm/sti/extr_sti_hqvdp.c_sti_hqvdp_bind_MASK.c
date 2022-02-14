
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hqvdp {int dev; struct drm_device* drm_dev; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct sti_hqvdp* FUNC_2 (struct device*) ;
 struct drm_plane* FUNC_3 (struct drm_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 struct sti_hqvdp *VAR_4 = FUNC_2(VAR_1);
 struct drm_device *VAR_5 = VAR_3;
 struct drm_plane *VAR_6;

 FUNC_0("\n");

 VAR_4->drm_dev = VAR_5;


 VAR_6 = FUNC_3(VAR_5, VAR_4->dev, VAR_0);
 if (!VAR_6)
  FUNC_1("Can't create HQVDP plane\n");

 return 0;
}
