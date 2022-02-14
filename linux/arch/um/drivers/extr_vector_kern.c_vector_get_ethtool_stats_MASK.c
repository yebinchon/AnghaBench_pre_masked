
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vector_private {int estats; } ;
struct vector_estats {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 struct vector_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
 struct ethtool_stats *VAR_1,
 u64 *VAR_2)
{
 struct vector_private *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, &VAR_3->estats, sizeof(struct vector_estats));
}
