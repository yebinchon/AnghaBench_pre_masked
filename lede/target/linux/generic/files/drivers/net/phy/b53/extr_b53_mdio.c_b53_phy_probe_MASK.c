
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr; int bus; int dev; } ;
struct phy_device {struct b53_device* priv; int supported; int advertising; TYPE_1__ mdio; } ;
struct b53_device {int current_page; int dev; int reg_mutex; int * pdata; int * ops; int priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct b53_device* FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (struct b53_device*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_6)
{
 struct b53_device *VAR_7;
 int VAR_8;


 if (VAR_6->mdio.addr != VAR_0 && VAR_6->mdio.addr != 0)
  return -VAR_1;

 VAR_7 = FUNC_0(&VAR_6->mdio.dev, &VAR_5, VAR_6->mdio.bus);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->current_page = 0xff;
 VAR_7->priv = VAR_6->mdio.bus;
 VAR_7->ops = &VAR_5;
 VAR_7->pdata = ((void*)0);
 FUNC_6(&VAR_7->reg_mutex);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_4(VAR_7) || FUNC_5(VAR_7))
  VAR_6->supported = VAR_4;
 else
  VAR_6->supported = VAR_3;

 VAR_6->advertising = VAR_6->supported;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_7->dev, "failed to register switch: %i\n", VAR_8);
  return VAR_8;
 }

 VAR_6->priv = VAR_7;

 return 0;
}
