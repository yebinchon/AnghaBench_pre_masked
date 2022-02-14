
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
typedef int bus_dma_lock_op_t ;




 int FUNC_0 (struct mtx*) ;
 int FUNC_1 (struct mtx*) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(void *VAR_0, bus_dma_lock_op_t VAR_1)
{
 struct mtx *VAR_2;

 VAR_2 = (struct mtx *)VAR_0;
 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_2);
  break;
 case 128:
  FUNC_1(VAR_2);
  break;
 default:
  FUNC_2("Unknown operation 0x%x for busdma_lock_mutex!", VAR_1);
 }
}
