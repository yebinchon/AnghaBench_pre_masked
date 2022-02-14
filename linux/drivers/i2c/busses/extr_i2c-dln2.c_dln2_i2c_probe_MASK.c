
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int parent; int of_node; } ;
struct platform_device {struct device dev; } ;
struct dln2_platform_data {int port; } ;
struct TYPE_5__ {int of_node; struct device* parent; } ;
struct TYPE_4__ {int name; TYPE_3__ dev; int * quirks; int * algo; int class; int owner; } ;
struct dln2_i2c {int port; TYPE_1__ adapter; struct platform_device* pdev; int buf; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct dln2_platform_data* FUNC_3 (struct device*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int ,int ) ;
 struct dln2_i2c* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct dln2_i2c*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,struct dln2_i2c*) ;
 int FUNC_10 (struct platform_device*,struct dln2_i2c*) ;
 int FUNC_11 (int ,int,char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 int VAR_8;
 struct dln2_i2c *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 struct dln2_platform_data *VAR_11 = FUNC_3(&VAR_7->dev);

 VAR_9 = FUNC_6(VAR_10, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->buf = FUNC_5(VAR_10, VAR_0, VAR_2);
 if (!VAR_9->buf)
  return -VAR_1;

 VAR_9->pdev = VAR_7;
 VAR_9->port = VAR_11->port;


 VAR_9->adapter.owner = VAR_4;
 VAR_9->adapter.class = VAR_3;
 VAR_9->adapter.algo = &VAR_6;
 VAR_9->adapter.quirks = &VAR_5;
 VAR_9->adapter.dev.parent = VAR_10;
 FUNC_1(&VAR_9->adapter.dev, FUNC_0(&VAR_7->dev));
 VAR_9->adapter.dev.of_node = VAR_10->of_node;
 FUNC_9(&VAR_9->adapter, VAR_9);
 FUNC_11(VAR_9->adapter.name, sizeof(VAR_9->adapter.name), "%s-%s-%d",
   "dln2-i2c", FUNC_4(VAR_7->dev.parent), VAR_9->port);

 FUNC_10(VAR_7, VAR_9);


 VAR_8 = FUNC_7(VAR_9, 1);
 if (VAR_8 < 0) {
  FUNC_2(VAR_10, "failed to initialize adapter: %d\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_8(&VAR_9->adapter);
 if (VAR_8 < 0)
  goto out_disable;

 return 0;

out_disable:
 FUNC_7(VAR_9, 0);

 return VAR_8;
}
