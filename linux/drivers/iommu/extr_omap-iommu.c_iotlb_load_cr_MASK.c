
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu {int dummy; } ;
struct cr_regs {int cam; int ram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct omap_iommu*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct omap_iommu *VAR_5, struct cr_regs *VAR_6)
{
 FUNC_0(VAR_5, VAR_6->cam | VAR_1, VAR_0);
 FUNC_0(VAR_5, VAR_6->ram, VAR_4);

 FUNC_0(VAR_5, 1, VAR_2);
 FUNC_0(VAR_5, 1, VAR_3);
}
