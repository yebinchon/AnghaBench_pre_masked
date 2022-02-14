
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct vmw_private {int * mmio_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct vmw_private *VAR_4, uint32_t VAR_5)
{
 u32 *VAR_6 = VAR_4->mmio_virt;
 uint32_t VAR_7 = FUNC_0(VAR_6 + VAR_0);
 uint32_t VAR_8 = FUNC_0(VAR_6 + VAR_2);
 uint32_t VAR_9 = FUNC_0(VAR_6 + VAR_1);
 uint32_t VAR_10 = FUNC_0(VAR_6 + VAR_3);

 return ((VAR_7 - VAR_8) + (VAR_10 - VAR_9) <= VAR_5);
}
