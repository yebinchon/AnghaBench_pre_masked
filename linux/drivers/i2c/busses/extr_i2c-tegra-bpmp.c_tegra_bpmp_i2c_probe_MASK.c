
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int of_node; TYPE_4__* parent; } ;
struct TYPE_6__ {TYPE_1__ dev; int * algo; int name; int owner; } ;
struct tegra_bpmp_i2c {TYPE_2__ adapter; int bus; int bpmp; TYPE_4__* dev; } ;
struct TYPE_7__ {int of_node; int parent; } ;
struct platform_device {TYPE_4__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct tegra_bpmp_i2c* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct tegra_bpmp_i2c*) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (struct platform_device*,struct tegra_bpmp_i2c*) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct tegra_bpmp_i2c *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->dev = &VAR_5->dev;

 VAR_6->bpmp = FUNC_0(VAR_5->dev.parent);
 if (!VAR_6->bpmp)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_5->dev.of_node, "nvidia,bpmp-bus-id",
       &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->bus = VAR_7;

 FUNC_3(&VAR_6->adapter, VAR_6);
 VAR_6->adapter.owner = VAR_3;
 FUNC_6(VAR_6->adapter.name, "Tegra BPMP I2C adapter",
  sizeof(VAR_6->adapter.name));
 VAR_6->adapter.algo = &VAR_4;
 VAR_6->adapter.dev.parent = &VAR_5->dev;
 VAR_6->adapter.dev.of_node = VAR_5->dev.of_node;

 FUNC_5(VAR_5, VAR_6);

 return FUNC_2(&VAR_6->adapter);
}
