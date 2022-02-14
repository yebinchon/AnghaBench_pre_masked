
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct intel_iommu {int seq_id; int pr_irq; int * prq; scalar_t__ reg; int name; int prq_name; int node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 int VAR_9 ;
 struct page* FUNC_0 (int,unsigned long long) ;
 int FUNC_1 (int,int ,struct intel_iommu*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,unsigned long long) ;
 int FUNC_4 (unsigned long,unsigned long long) ;
 int * FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_10 ;
 int FUNC_8 (int,int *,int ,int ,int ,struct intel_iommu*) ;
 int FUNC_9 (int ,int,char*,int) ;
 unsigned long long FUNC_10 (int *) ;

int FUNC_11(struct intel_iommu *VAR_11)
{
 struct page *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_0(VAR_6 | VAR_9, VAR_8);
 if (!VAR_12) {
  FUNC_7("IOMMU: %s: Failed to allocate page request queue\n",
   VAR_11->name);
  return -VAR_5;
 }
 VAR_11->prq = FUNC_5(VAR_12);

 VAR_13 = FUNC_1(VAR_3 + VAR_11->seq_id, VAR_11->node, VAR_11);
 if (VAR_13 <= 0) {
  FUNC_6("IOMMU: %s: Failed to create IRQ vector for page request queue\n",
         VAR_11->name);
  VAR_14 = -VAR_4;
 err:
  FUNC_4((unsigned long)VAR_11->prq, VAR_8);
  VAR_11->prq = ((void*)0);
  return VAR_14;
 }
 VAR_11->pr_irq = VAR_13;

 FUNC_9(VAR_11->prq_name, sizeof(VAR_11->prq_name), "dmar%d-prq", VAR_11->seq_id);

 VAR_14 = FUNC_8(VAR_13, ((void*)0), VAR_10, VAR_7,
       VAR_11->prq_name, VAR_11);
 if (VAR_14) {
  FUNC_6("IOMMU: %s: Failed to request IRQ for page request queue\n",
         VAR_11->name);
  FUNC_2(VAR_13);
  VAR_11->pr_irq = 0;
  goto err;
 }
 FUNC_3(VAR_11->reg + VAR_1, 0ULL);
 FUNC_3(VAR_11->reg + VAR_2, 0ULL);
 FUNC_3(VAR_11->reg + VAR_0, FUNC_10(VAR_11->prq) | VAR_8);

 return 0;
}
