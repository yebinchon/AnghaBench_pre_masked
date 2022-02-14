
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct hsi_client {int dummy; } ;


 int FUNC_0 (struct hsi_client*) ;
 int FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (struct hsi_client*) ;
 struct hsi_client* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct hsi_client *VAR_1 = FUNC_3(VAR_0->dev.parent);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
