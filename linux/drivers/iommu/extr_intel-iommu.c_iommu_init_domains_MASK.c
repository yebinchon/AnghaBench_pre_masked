
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {void** domain_ids; void** domains; int name; int lock; int cap; } ;
struct dmar_domain {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 void** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (void**) ;
 void* FUNC_5 (size_t,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,void**) ;
 scalar_t__ FUNC_9 (struct intel_iommu*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct intel_iommu *VAR_3)
{
 u32 VAR_4, VAR_5;
 size_t VAR_6;

 VAR_4 = FUNC_2(VAR_3->cap);
 FUNC_6("%s: Number of Domains supported <%d>\n",
   VAR_3->name, VAR_4);
 VAR_5 = FUNC_1(VAR_4);

 FUNC_10(&VAR_3->lock);

 VAR_3->domain_ids = FUNC_3(VAR_5, sizeof(unsigned long), VAR_2);
 if (!VAR_3->domain_ids) {
  FUNC_7("%s: Allocating domain id array failed\n",
         VAR_3->name);
  return -VAR_0;
 }

 VAR_6 = (FUNC_0(VAR_4, 256) >> 8) * sizeof(struct dmar_domain **);
 VAR_3->domains = FUNC_5(VAR_6, VAR_2);

 if (VAR_3->domains) {
  VAR_6 = 256 * sizeof(struct dmar_domain *);
  VAR_3->domains[0] = FUNC_5(VAR_6, VAR_2);
 }

 if (!VAR_3->domains || !VAR_3->domains[0]) {
  FUNC_7("%s: Allocating domain array failed\n",
         VAR_3->name);
  FUNC_4(VAR_3->domain_ids);
  FUNC_4(VAR_3->domains);
  VAR_3->domain_ids = ((void*)0);
  VAR_3->domains = ((void*)0);
  return -VAR_0;
 }







 FUNC_8(0, VAR_3->domain_ids);
 if (FUNC_9(VAR_3))
  FUNC_8(VAR_1, VAR_3->domain_ids);

 return 0;
}
