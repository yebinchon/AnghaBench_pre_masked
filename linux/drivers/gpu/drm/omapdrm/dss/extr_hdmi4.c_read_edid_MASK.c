
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_hdmi {int lock; int core; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct omap_hdmi*) ;
 int FUNC_3 (struct omap_hdmi*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct omap_hdmi *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_4(&VAR_0->lock);

 VAR_3 = FUNC_2(VAR_0);
 FUNC_0(VAR_3);

 VAR_3 = FUNC_1(&VAR_0->core, VAR_1, VAR_2);

 FUNC_3(VAR_0);
 FUNC_5(&VAR_0->lock);

 return VAR_3;
}
