
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int wp; int core; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct omap_hdmi *VAR_0)
{
 FUNC_1(&VAR_0->wp, 1);
 FUNC_0(&VAR_0->core, &VAR_0->wp);
}
