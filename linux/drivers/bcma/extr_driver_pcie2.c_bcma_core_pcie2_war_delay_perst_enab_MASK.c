
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_drv_pcie2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcma_drv_pcie2*,int ) ;
 int FUNC_1 (struct bcma_drv_pcie2*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct bcma_drv_pcie2 *VAR_3,
      bool VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_5 |= VAR_2;
 VAR_5 &= ~VAR_1;
 if (VAR_4) {
  VAR_5 &= ~VAR_2;
  VAR_5 |= VAR_1;
 }
 FUNC_1(VAR_3, (VAR_0), VAR_5);

 return FUNC_0(VAR_3, VAR_0);
}
