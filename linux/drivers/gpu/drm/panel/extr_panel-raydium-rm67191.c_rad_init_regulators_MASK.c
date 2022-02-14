
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rad_panel {int num_supplies; TYPE_2__* supplies; TYPE_1__* dsi; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int supply; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,int,TYPE_2__*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_3(struct rad_panel *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dsi->dev;
 int VAR_5;

 VAR_3->num_supplies = FUNC_0(VAR_2);
 VAR_3->supplies = FUNC_1(VAR_4, VAR_3->num_supplies,
         sizeof(*VAR_3->supplies), VAR_1);
 if (!VAR_3->supplies)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_supplies; VAR_5++)
  VAR_3->supplies[VAR_5].supply = VAR_2[VAR_5];

 return FUNC_2(VAR_4, VAR_3->num_supplies, VAR_3->supplies);
}
