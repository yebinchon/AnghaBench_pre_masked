
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nuport_mac_priv {TYPE_1__* pdev; } ;
struct net_device {void** dev_addr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void**) ;
 struct nuport_mac_priv* FUNC_2 (struct net_device*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (void**) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct nuport_mac_priv *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_2->dev_addr[VAR_4] = FUNC_3(VAR_1 + VAR_4);
 VAR_2->dev_addr[4] = FUNC_3(VAR_0);
 VAR_2->dev_addr[5] = FUNC_3(VAR_0 + 1);

 if (!FUNC_1(VAR_2->dev_addr)) {
  FUNC_0(&VAR_3->pdev->dev, "using random address\n");
  FUNC_4(VAR_2->dev_addr);
 }
}
