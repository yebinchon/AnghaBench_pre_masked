
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc64_msiq_cookie {scalar_t__ msiqid; struct pci_pbm_info* pbm; } ;
struct pci_pbm_info {int msiq_num; int msi_num; struct sparc64_msiq_cookie* msiq_irq_cookies; void* msi_irq_table; scalar_t__ msiq_first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sparc64_msiq_cookie*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_pbm_info *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_2->msiq_num * sizeof(struct sparc64_msiq_cookie);
 VAR_2->msiq_irq_cookies = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->msiq_irq_cookies)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->msiq_num; VAR_4++) {
  struct sparc64_msiq_cookie *VAR_5;

  VAR_5 = &VAR_2->msiq_irq_cookies[VAR_4];
  VAR_5->pbm = VAR_2;
  VAR_5->msiqid = VAR_2->msiq_first + VAR_4;
 }

 VAR_3 = VAR_2->msi_num * sizeof(unsigned int);
 VAR_2->msi_irq_table = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->msi_irq_table) {
  FUNC_0(VAR_2->msiq_irq_cookies);
  VAR_2->msiq_irq_cookies = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
