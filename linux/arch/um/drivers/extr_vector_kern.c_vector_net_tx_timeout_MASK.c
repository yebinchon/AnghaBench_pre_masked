
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_timeout_count; } ;
struct vector_private {int reset_tx; TYPE_1__ estats; } ;
struct net_device {int dummy; } ;


 struct vector_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct vector_private *VAR_1 = FUNC_0(VAR_0);

 VAR_1->estats.tx_timeout_count++;
 FUNC_1(VAR_0);
 FUNC_2(&VAR_1->reset_tx);
}
