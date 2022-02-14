
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_private {int capabilities; int * mmio_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct vmw_private *VAR_3)
{
 u32 *VAR_4 = VAR_3->mmio_virt;
 uint32_t VAR_5;

 if (!(VAR_3->capabilities & VAR_0))
  return 0;

 VAR_5 = FUNC_0(VAR_4 + VAR_1);
 if (VAR_5 & VAR_2)
  return 1;

 return 0;
}
