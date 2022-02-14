
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfeth_private {int ethX; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nfeth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct nfeth_private *VAR_3 = FUNC_0(VAR_2);


 FUNC_1(VAR_2);

 FUNC_2(VAR_1 + VAR_0, VAR_3->ethX);

 return 0;
}
