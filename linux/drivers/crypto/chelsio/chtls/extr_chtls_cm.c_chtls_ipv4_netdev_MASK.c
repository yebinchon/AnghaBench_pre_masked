
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct chtls_dev {struct net_device** ports; } ;
struct TYPE_2__ {int inet_rcv_saddr; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 struct net_device* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int) ;
 struct net_device* FUNC_4 (struct net_device*) ;

__attribute__((used)) static struct net_device *FUNC_5(struct chtls_dev *VAR_1,
         struct sock *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->ports[0];

 if (FUNC_3(!FUNC_0(VAR_2)->inet_rcv_saddr))
  return VAR_3;

 VAR_3 = FUNC_1(&VAR_0, FUNC_0(VAR_2)->inet_rcv_saddr);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_2(VAR_3))
  return FUNC_4(VAR_3);
 return VAR_3;
}
