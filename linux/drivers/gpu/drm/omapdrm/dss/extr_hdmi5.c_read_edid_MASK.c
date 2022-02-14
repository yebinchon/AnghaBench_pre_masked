
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int base; } ;
struct omap_hdmi {int lock; TYPE_1__ wp; int core; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct omap_hdmi*) ;
 int FUNC_5 (struct omap_hdmi*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct omap_hdmi *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_6(&VAR_1->lock);

 VAR_4 = FUNC_4(VAR_1);
 FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_1->wp.base, VAR_0, 3, 2);

 FUNC_1(VAR_1->wp.base, VAR_0, 1, 3, 2);

 VAR_4 = FUNC_3(&VAR_1->core, VAR_2, VAR_3);

 FUNC_1(VAR_1->wp.base, VAR_0, VAR_5, 3, 2);

 FUNC_5(VAR_1);
 FUNC_7(&VAR_1->lock);

 return VAR_4;
}
