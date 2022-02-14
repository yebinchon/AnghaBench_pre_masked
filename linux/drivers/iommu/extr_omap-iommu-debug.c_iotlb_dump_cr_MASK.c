
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct omap_iommu {int dummy; } ;
struct cr_regs {int cam; int ram; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int,int ,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct omap_iommu *VAR_1, struct cr_regs *VAR_2,
        struct seq_file *VAR_3)
{
 FUNC_0(VAR_3, "%08x %08x %01x\n", VAR_2->cam, VAR_2->ram,
     (VAR_2->cam & VAR_0) ? 1 : 0);
 return 0;
}
