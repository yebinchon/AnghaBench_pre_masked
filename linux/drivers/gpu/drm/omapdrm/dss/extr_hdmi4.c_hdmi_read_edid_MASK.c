
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_hdmi {int core_enabled; int core; } ;
struct omap_dss_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 struct omap_hdmi* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct omap_hdmi*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct omap_dss_device *VAR_1,
  u8 *VAR_2, int VAR_3)
{
 struct omap_hdmi *VAR_4 = FUNC_1(VAR_1);
 bool VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->core_enabled == 0;

 if (VAR_5) {
  VAR_6 = FUNC_4(&VAR_4->core);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_4, VAR_2, VAR_3);
 if (VAR_6 >= 256)
  FUNC_2(&VAR_4->core,
     FUNC_0(VAR_2, VAR_6, ((void*)0)));
 else
  FUNC_2(&VAR_4->core, VAR_0);
 if (VAR_5)
  FUNC_3(&VAR_4->core);

 return VAR_6;
}
