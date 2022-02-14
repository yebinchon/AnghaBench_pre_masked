
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_private {int * mmio_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct vmw_private*,int ,int ) ;

void FUNC_4(struct vmw_private *VAR_2, uint32_t VAR_3)
{
 u32 *VAR_4 = VAR_2->mmio_virt;

 FUNC_1();
 if (FUNC_0(VAR_4 + VAR_0, 0, 1) == 0)
  FUNC_3(VAR_2, VAR_1, VAR_3);
 FUNC_2();
}
