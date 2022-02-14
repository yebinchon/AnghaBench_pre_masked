
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_lanes; scalar_t__ rate; } ;
struct cdn_dp_device {int active; int ports; int * edid; int connected; TYPE_1__ link; int dev; int * port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_device*,int ) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int) ;
 int FUNC_4 (struct cdn_dp_device*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cdn_dp_device *VAR_3)
{
 int VAR_4, VAR_5;

 if (!VAR_3->active)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->ports; VAR_5++)
  FUNC_2(VAR_3, VAR_3->port[VAR_5]);

 VAR_4 = FUNC_3(VAR_3, VAR_2,
          VAR_1 | VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "Failed to clear hpd sel %d\n",
         VAR_4);
  return VAR_4;
 }

 FUNC_4(VAR_3, 0);
 FUNC_1(VAR_3);
 VAR_3->active = 0;
 VAR_3->link.rate = 0;
 VAR_3->link.num_lanes = 0;
 if (!VAR_3->connected) {
  FUNC_5(VAR_3->edid);
  VAR_3->edid = ((void*)0);
 }

 return 0;
}
