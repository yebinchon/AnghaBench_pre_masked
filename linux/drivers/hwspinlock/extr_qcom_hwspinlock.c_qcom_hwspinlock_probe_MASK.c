
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct reg_field {int reg; int msb; scalar_t__ lsb; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct hwspinlock_device {TYPE_1__* lock; } ;
struct hwspinlock {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct hwspinlock_device* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,struct regmap*,struct reg_field) ;
 int FUNC_5 (struct hwspinlock_device*,TYPE_2__*,int *,int ,int) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int,int*) ;
 int FUNC_9 (struct platform_device*,struct hwspinlock_device*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_5 ;
 struct regmap* FUNC_12 (struct device_node*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct hwspinlock_device *VAR_7;
 struct device_node *VAR_8;
 struct reg_field VAR_9;
 struct regmap *VAR_10;
 size_t VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_8 = FUNC_7(VAR_6->dev.of_node, "syscon", 0);
 if (!VAR_8) {
  FUNC_2(&VAR_6->dev, "no syscon property\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_12(VAR_8);
 FUNC_6(VAR_8);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_14 = FUNC_8(VAR_6->dev.of_node, "syscon", 1, &VAR_13);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_6->dev, "no offset in syscon\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_8(VAR_6->dev.of_node, "syscon", 2, &VAR_12);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_6->dev, "no stride syscon\n");
  return -VAR_0;
 }

 VAR_11 = VAR_4 * sizeof(struct hwspinlock);
 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7) + VAR_11, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_9(VAR_6, VAR_7);

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_9.reg = VAR_13 + VAR_15 * VAR_12;
  VAR_9.lsb = 0;
  VAR_9.msb = 31;

  VAR_7->lock[VAR_15].priv = FUNC_4(&VAR_6->dev,
            VAR_10, VAR_9);
 }

 FUNC_11(&VAR_6->dev);

 VAR_14 = FUNC_5(VAR_7, &VAR_6->dev, &VAR_5,
       0, VAR_4);
 if (VAR_14)
  FUNC_10(&VAR_6->dev);

 return VAR_14;
}
