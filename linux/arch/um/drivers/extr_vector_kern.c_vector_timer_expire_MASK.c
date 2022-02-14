
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_kicks; } ;
struct vector_private {int tx_queue; TYPE_1__ estats; } ;
struct timer_list {int dummy; } ;


 struct vector_private* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct vector_private* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct vector_private *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 VAR_3->estats.tx_kicks++;
 FUNC_1(VAR_3->tx_queue);
}
