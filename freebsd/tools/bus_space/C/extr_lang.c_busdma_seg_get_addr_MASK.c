
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_long ;
typedef int busdma_seg_t ;
typedef unsigned long bus_addr_t ;


 int FUNC_0 (int ,unsigned long*) ;

bus_addr_t
FUNC_1(busdma_seg_t VAR_0)
{
 u_long VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1);
 return ((VAR_2) ? ~0UL : VAR_1);
}
