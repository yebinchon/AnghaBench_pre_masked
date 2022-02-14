
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct platform_device {int id; } ;
struct dfl_fme_region_pdata {struct platform_device* br; struct platform_device* mgr; } ;
struct dfl_fme_region {int port_id; TYPE_3__* region; } ;
struct dfl_feature_platform_data {TYPE_1__* dev; } ;
struct device {int dummy; } ;
typedef int region_pdata ;
struct TYPE_8__ {struct device* parent; } ;
struct TYPE_9__ {TYPE_2__ dev; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dfl_fme_region* FUNC_0 (int) ;
 int VAR_2 ;
 struct dfl_fme_region* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct dfl_fme_region_pdata*,int) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static struct dfl_fme_region *
FUNC_6(struct dfl_feature_platform_data *VAR_3,
        struct platform_device *VAR_4,
        struct platform_device *VAR_5, int VAR_6)
{
 struct dfl_fme_region_pdata VAR_7;
 struct device *VAR_8 = &VAR_3->dev->dev;
 struct dfl_fme_region *VAR_9;
 int VAR_10 = -VAR_1;

 VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(VAR_10);

 VAR_7.mgr = VAR_4;
 VAR_7.br = VAR_5;





 VAR_9->region = FUNC_4(VAR_0, VAR_5->id);
 if (!VAR_9->region)
  return FUNC_0(VAR_10);

 VAR_9->region->dev.parent = VAR_8;

 VAR_10 = FUNC_3(VAR_9->region, &VAR_7,
           sizeof(VAR_7));
 if (VAR_10)
  goto create_region_err;

 VAR_10 = FUNC_2(VAR_9->region);
 if (VAR_10)
  goto create_region_err;

 VAR_9->port_id = VAR_6;

 return VAR_9;

create_region_err:
 FUNC_5(VAR_9->region);
 return FUNC_0(VAR_10);
}
