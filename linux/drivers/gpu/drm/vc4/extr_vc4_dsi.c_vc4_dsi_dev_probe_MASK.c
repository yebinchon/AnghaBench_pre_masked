
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* dev; int * ops; } ;
struct vc4_dsi {TYPE_1__ dsi_host; struct platform_device* pdev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,struct vc4_dsi*) ;
 struct vc4_dsi* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct vc4_dsi *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_1(VAR_5, VAR_6);

 VAR_6->pdev = VAR_4;
 VAR_6->dsi_host.ops = &VAR_2;
 VAR_6->dsi_host.dev = VAR_5;
 FUNC_3(&VAR_6->dsi_host);

 VAR_7 = FUNC_0(&VAR_4->dev, &VAR_3);
 if (VAR_7) {
  FUNC_4(&VAR_6->dsi_host);
  return VAR_7;
 }

 return 0;
}
