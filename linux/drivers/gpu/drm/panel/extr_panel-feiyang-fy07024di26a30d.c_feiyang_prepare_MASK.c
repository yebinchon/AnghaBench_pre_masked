
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dummy; } ;
struct feiyang_init_cmd {int data; } ;
struct feiyang {int reset; int avdd; int dvdd; struct mipi_dsi_device* dsi; } ;
struct drm_panel {int dummy; } ;


 unsigned int FUNC_0 (struct feiyang_init_cmd*) ;
 int VAR_0 ;
 struct feiyang_init_cmd* VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mipi_dsi_device*,int ,int ) ;
 int FUNC_3 (int) ;
 struct feiyang* FUNC_4 (struct drm_panel*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_2)
{
 struct feiyang *VAR_3 = FUNC_4(VAR_2);
 struct mipi_dsi_device *VAR_4 = VAR_3->dsi;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_3->dvdd);
 if (VAR_6)
  return VAR_6;


 FUNC_3(10);

 VAR_6 = FUNC_5(VAR_3->avdd);
 if (VAR_6)
  return VAR_6;


 FUNC_3(20);

 FUNC_1(VAR_3->reset, 0);





 FUNC_3(20);

 FUNC_1(VAR_3->reset, 1);


 FUNC_3(200);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  const struct feiyang_init_cmd *VAR_7 =
      &VAR_1[VAR_5];

  VAR_6 = FUNC_2(VAR_4, VAR_7->data,
      VAR_0);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
