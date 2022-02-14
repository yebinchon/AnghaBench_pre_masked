
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct zd1301_demod_platform_data {int dummy; } ;
struct TYPE_11__ {struct zd1301_demod_dev* demodulator_priv; int ops; } ;
struct TYPE_9__ {TYPE_2__* parent; } ;
struct TYPE_12__ {TYPE_1__ dev; int * algo_data; int * algo; int name; } ;
struct zd1301_demod_dev {TYPE_3__ frontend; TYPE_4__ adapter; int gain; struct platform_device* pdev; } ;
struct TYPE_13__ {TYPE_2__* parent; struct zd1301_demod_platform_data* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_10__ {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,char*,...) ;
 int FUNC_1 (TYPE_6__*,char*,...) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct zd1301_demod_dev*) ;
 int FUNC_5 (struct zd1301_demod_dev*) ;
 struct zd1301_demod_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct platform_device*,struct zd1301_demod_dev*) ;
 int FUNC_9 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct zd1301_demod_dev*,int,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct zd1301_demod_dev *VAR_7;
 struct zd1301_demod_platform_data *VAR_8 = VAR_6->dev.platform_data;
 int VAR_9;

 FUNC_0(&VAR_6->dev, "\n");

 if (!VAR_8) {
  VAR_9 = -VAR_0;
  FUNC_1(&VAR_6->dev, "cannot proceed without platform data\n");
  goto err;
 }
 if (!VAR_6->dev.parent->driver) {
  VAR_9 = -VAR_0;
  FUNC_0(&VAR_6->dev, "no parent device\n");
  goto err;
 }

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }


 VAR_7->pdev = VAR_6;
 VAR_7->gain = VAR_3;


 VAR_9 = FUNC_10(VAR_7, 0x6840, 0x21);
 if (VAR_9)
  goto err_kfree;
 VAR_9 = FUNC_10(VAR_7, 0x6a38, 0x07);
 if (VAR_9)
  goto err_kfree;


 FUNC_9(VAR_7->adapter.name, "ZyDAS ZD1301 demod",
  sizeof(VAR_7->adapter.name));
 VAR_7->adapter.algo = &VAR_4;
 VAR_7->adapter.algo_data = ((void*)0);
 VAR_7->adapter.dev.parent = VAR_6->dev.parent;
 FUNC_4(&VAR_7->adapter, VAR_7);
 VAR_9 = FUNC_3(&VAR_7->adapter);
 if (VAR_9) {
  FUNC_1(&VAR_6->dev, "I2C adapter add failed %d\n", VAR_9);
  goto err_kfree;
 }


 FUNC_7(&VAR_7->frontend.ops, &VAR_5, sizeof(VAR_7->frontend.ops));
 VAR_7->frontend.demodulator_priv = VAR_7;
 FUNC_8(VAR_6, VAR_7);
 FUNC_2(&VAR_6->dev, "ZyDAS ZD1301 demod attached\n");

 return 0;
err_kfree:
 FUNC_5(VAR_7);
err:
 FUNC_0(&VAR_6->dev, "failed=%d\n", VAR_9);
 return VAR_9;
}
