
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_private {int coalesce; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; } ;


 int VAR_0 ;
 struct vector_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
     struct ethtool_coalesce *VAR_2)
{
 struct vector_private *VAR_3 = FUNC_0(VAR_1);

 VAR_2->tx_coalesce_usecs = (VAR_3->coalesce * 1000000) / VAR_0;
 return 0;
}
