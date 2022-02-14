
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc64_msiq_ops {int (* msiq_build_irq ) (struct pci_pbm_info*,unsigned long,unsigned long) ;} ;
struct pci_pbm_info {int numa_node; unsigned long msiq_first; int * msiq_irq_cookies; } ;
typedef int cpumask_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int ,int ,char*,int *) ;
 int VAR_0 ;
 int FUNC_4 (struct pci_pbm_info*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pci_pbm_info *VAR_1,
     const struct sparc64_msiq_ops *VAR_2,
     unsigned long VAR_3,
     unsigned long VAR_4)
{
 int VAR_5 = VAR_2->msiq_build_irq(VAR_1, VAR_3, VAR_4);
 int VAR_6, VAR_7;

 if (VAR_5 < 0)
  return VAR_5;

 VAR_7 = VAR_1->numa_node;
 if (VAR_7 != -1) {
  cpumask_t VAR_8;

  FUNC_0(&VAR_8, FUNC_1(VAR_7));
  FUNC_2(VAR_5, &VAR_8);
 }
 VAR_6 = FUNC_3(VAR_5, VAR_0, 0,
     "MSIQ",
     &VAR_1->msiq_irq_cookies[VAR_3 - VAR_1->msiq_first]);
 if (VAR_6)
  return VAR_6;

 return 0;
}
