
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct omap_hdmi*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct omap_hdmi *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0("ENTER omapdss_hdmi_core_enable\n");

 FUNC_3(&VAR_0->lock);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_1("failed to power on device\n");
  goto err0;
 }

 FUNC_4(&VAR_0->lock);
 return 0;

err0:
 FUNC_4(&VAR_0->lock);
 return VAR_1;
}
