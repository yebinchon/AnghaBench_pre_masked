
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uml_net_private {int dummy; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct sk_buff *VAR_2, struct uml_net_private *VAR_3)
{
 return FUNC_0(VAR_1, FUNC_1(VAR_2),
       VAR_2->dev->mtu + VAR_0);
}
