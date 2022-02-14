
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct omap_hdmi*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct omap_hdmi *VAR_0)
{
 FUNC_0("Enter omapdss_hdmi_core_disable\n");

 FUNC_2(&VAR_0->lock);

 FUNC_1(VAR_0);

 FUNC_3(&VAR_0->lock);
}
