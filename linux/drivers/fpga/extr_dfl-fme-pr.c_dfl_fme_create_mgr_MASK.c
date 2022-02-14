
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* parent; } ;
struct platform_device {TYPE_1__ dev; int id; } ;
struct dfl_fme_mgr_pdata {scalar_t__ ioaddr; } ;
struct dfl_feature_platform_data {struct platform_device* dev; } ;
struct dfl_feature {scalar_t__ ioaddr; } ;
typedef int mgr_pdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct platform_device* FUNC_0 (int) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,struct dfl_fme_mgr_pdata*,int) ;
 struct platform_device* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct platform_device*) ;

__attribute__((used)) static struct platform_device *
FUNC_5(struct dfl_feature_platform_data *VAR_3,
     struct dfl_feature *VAR_4)
{
 struct platform_device *VAR_5, *VAR_6 = VAR_3->dev;
 struct dfl_fme_mgr_pdata VAR_7;
 int VAR_8 = -VAR_2;

 if (!VAR_4->ioaddr)
  return FUNC_0(-VAR_1);

 VAR_7.ioaddr = VAR_4->ioaddr;





 VAR_5 = FUNC_3(VAR_0, VAR_6->id);
 if (!VAR_5)
  return FUNC_0(VAR_8);

 VAR_5->dev.parent = &VAR_6->dev;

 VAR_8 = FUNC_2(VAR_5, &VAR_7, sizeof(VAR_7));
 if (VAR_8)
  goto create_mgr_err;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  goto create_mgr_err;

 return VAR_5;

create_mgr_err:
 FUNC_4(VAR_5);
 return FUNC_0(VAR_8);
}
