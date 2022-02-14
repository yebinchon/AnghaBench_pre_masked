
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct scx200_acb_iface {TYPE_1__ adapter; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (struct platform_device*,struct scx200_acb_iface*) ;
 struct scx200_acb_iface* FUNC_4 (char*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct scx200_acb_iface *VAR_4;
 struct resource *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2, 0);
 if (!VAR_5) {
  FUNC_0(&VAR_3->dev, "can't fetch device resource info\n");
  return -VAR_1;
 }

 VAR_4 = FUNC_4("CS5535", VAR_5->start, 0, &VAR_3->dev);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_3->dev, "SCx200 device '%s' registered\n",
   VAR_4->adapter.name);
 FUNC_3(VAR_3, VAR_4);

 return 0;
}
