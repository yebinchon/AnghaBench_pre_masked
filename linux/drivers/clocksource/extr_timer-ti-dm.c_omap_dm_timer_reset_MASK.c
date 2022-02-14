
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_dm_timer {int revision; scalar_t__ posted; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct omap_dm_timer*,int ,int ) ;
 int FUNC_1 (struct omap_dm_timer*,int ,int,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct omap_dm_timer*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct omap_dm_timer *VAR_5)
{
 u32 VAR_6, VAR_7 = 100000;

 if (VAR_5->revision != 1)
  return -VAR_0;

 FUNC_3(VAR_5, VAR_2, 0x06);

 do {
  VAR_6 = FUNC_0(VAR_5,
      VAR_4, 0);
 } while (!VAR_6 && VAR_7--);

 if (!VAR_7) {
  FUNC_2(&VAR_5->pdev->dev, "Timer failed to reset\n");
  return -VAR_1;
 }


 VAR_6 = FUNC_0(VAR_5, VAR_3, 0);
 VAR_6 |= 0x2 << 0x3;
 FUNC_1(VAR_5, VAR_3, VAR_6, 0);

 VAR_5->posted = 0;

 return 0;
}
