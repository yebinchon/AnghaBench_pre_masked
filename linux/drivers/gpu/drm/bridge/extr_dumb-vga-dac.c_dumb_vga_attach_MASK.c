
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumb_vga {int connector; int ddc; } ;
struct drm_bridge {int encoder; int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dumb_vga* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct drm_bridge *VAR_4)
{
 struct dumb_vga *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (!VAR_4->encoder) {
  FUNC_0("Missing encoder\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_5->connector,
     &VAR_3);
 VAR_6 = FUNC_4(VAR_4->dev, &VAR_5->connector,
       &VAR_2,
       VAR_0,
       VAR_5->ddc);
 if (VAR_6) {
  FUNC_0("Failed to initialize connector\n");
  return VAR_6;
 }

 FUNC_2(&VAR_5->connector,
       VAR_4->encoder);

 return 0;
}
