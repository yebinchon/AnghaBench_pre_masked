
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dfl_fme_bridge {TYPE_3__* br; } ;
struct dfl_fme_br_pdata {int port_id; int cdev; } ;
struct dfl_feature_platform_data {int dfl_cdev; TYPE_1__* dev; } ;
struct device {int dummy; } ;
typedef int br_pdata ;
struct TYPE_8__ {struct device* parent; } ;
struct TYPE_9__ {TYPE_2__ dev; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dfl_fme_bridge* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct dfl_fme_bridge* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct dfl_fme_br_pdata*,int) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static struct dfl_fme_bridge *
FUNC_6(struct dfl_feature_platform_data *VAR_4, int VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev->dev;
 struct dfl_fme_br_pdata VAR_7;
 struct dfl_fme_bridge *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(VAR_9);

 VAR_7.cdev = VAR_4->dfl_cdev;
 VAR_7.port_id = VAR_5;

 VAR_8->br = FUNC_4(VAR_0,
        VAR_3);
 if (!VAR_8->br)
  return FUNC_0(VAR_9);

 VAR_8->br->dev.parent = VAR_6;

 VAR_9 = FUNC_3(VAR_8->br, &VAR_7, sizeof(VAR_7));
 if (VAR_9)
  goto create_br_err;

 VAR_9 = FUNC_2(VAR_8->br);
 if (VAR_9)
  goto create_br_err;

 return VAR_8;

create_br_err:
 FUNC_5(VAR_8->br);
 return FUNC_0(VAR_9);
}
