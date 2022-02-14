
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_dev {int addr; TYPE_1__* pdev; int mtu; } ;
struct efa_com_get_network_attr_result {int mtu; int addr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct efa_dev *VAR_0,
        struct efa_com_get_network_attr_result *VAR_1)
{
 FUNC_1(VAR_0->addr, VAR_1->addr, sizeof(VAR_1->addr));
 VAR_0->mtu = VAR_1->mtu;

 FUNC_0(&VAR_0->pdev->dev, "Full address %pI6\n", VAR_0->addr);
}
