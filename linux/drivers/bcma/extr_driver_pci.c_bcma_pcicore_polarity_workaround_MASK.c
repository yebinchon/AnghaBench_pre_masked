
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bcma_drv_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcma_drv_pci*,int ) ;

__attribute__((used)) static u8 FUNC_1(struct bcma_drv_pci *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 & VAR_0)
  return VAR_2 |
         VAR_3;
 else
  return VAR_2;
}
