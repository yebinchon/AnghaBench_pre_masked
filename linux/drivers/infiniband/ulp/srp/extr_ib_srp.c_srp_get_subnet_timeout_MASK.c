
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct srp_host {TYPE_1__* srp_dev; int port; } ;
struct ib_port_attr {int subnet_timeout; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,struct ib_port_attr*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u8 FUNC_4(struct srp_host *VAR_0)
{
 struct ib_port_attr VAR_1;
 int VAR_2;
 u8 VAR_3 = 18;

 VAR_2 = FUNC_1(VAR_0->srp_dev->dev, VAR_0->port, &VAR_1);
 if (VAR_2 == 0)
  VAR_3 = VAR_1.subnet_timeout;

 if (FUNC_3(VAR_3 < 15))
  FUNC_2("%s: subnet timeout %d may cause SRP login to fail.\n",
   FUNC_0(&VAR_0->srp_dev->dev->dev), VAR_3);

 return VAR_3;
}
