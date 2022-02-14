
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_kicks; } ;
struct vector_private {int tx_queue; TYPE_1__ estats; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct vector_private *VAR_1 = (struct vector_private *)VAR_0;

 VAR_1->estats.tx_kicks++;
 FUNC_0(VAR_1->tx_queue);
}
