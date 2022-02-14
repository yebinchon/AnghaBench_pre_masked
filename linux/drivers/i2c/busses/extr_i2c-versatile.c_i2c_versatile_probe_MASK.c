
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {int id; TYPE_4__ dev; } ;
struct TYPE_6__ {int of_node; TYPE_4__* parent; } ;
struct TYPE_8__ {int nr; TYPE_1__ dev; TYPE_2__* algo_data; int name; int owner; } ;
struct TYPE_7__ {struct i2c_versatile* data; } ;
struct i2c_versatile {TYPE_3__ adap; TYPE_2__ algo; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_4__*,struct resource*) ;
 struct i2c_versatile* FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__ VAR_7 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct i2c_versatile*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct i2c_versatile *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(&VAR_8->dev, sizeof(struct i2c_versatile), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_8, VAR_3, 0);
 VAR_9->base = FUNC_2(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 FUNC_8(VAR_4 | VAR_5, VAR_9->base + VAR_2);

 VAR_9->adap.owner = VAR_6;
 FUNC_7(VAR_9->adap.name, "Versatile I2C adapter", sizeof(VAR_9->adap.name));
 VAR_9->adap.algo_data = &VAR_9->algo;
 VAR_9->adap.dev.parent = &VAR_8->dev;
 VAR_9->adap.dev.of_node = VAR_8->dev.of_node;
 VAR_9->algo = VAR_7;
 VAR_9->algo.data = VAR_9;

 VAR_9->adap.nr = VAR_8->id;
 VAR_11 = FUNC_4(&VAR_9->adap);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_6(VAR_8, VAR_9);

 return 0;
}
