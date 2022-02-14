
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bcma_drv_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_drv_pci*) ;
 int FUNC_1 (struct bcma_drv_pci*,int ,int ) ;
 int FUNC_2 (struct bcma_drv_pci*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bcma_drv_pci *VAR_5)
{
 u16 VAR_6;

 FUNC_2(VAR_5, VAR_1,
                      VAR_4,
        FUNC_0(VAR_5));
 VAR_6 = FUNC_1(VAR_5, VAR_0,
                           VAR_3);
 if (VAR_6 & VAR_2)
  FUNC_2(VAR_5, VAR_0,
                       VAR_3,
                       VAR_6 & ~VAR_2);
}
