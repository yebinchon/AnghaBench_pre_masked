
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int flags; int has_iotlb_device; int devices; int nid; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct dmar_domain* FUNC_1 () ;
 int FUNC_2 (struct dmar_domain*,int ,int) ;

__attribute__((used)) static struct dmar_domain *FUNC_3(int VAR_1)
{
 struct dmar_domain *VAR_2;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->nid = VAR_0;
 VAR_2->flags = VAR_1;
 VAR_2->has_iotlb_device = 0;
 FUNC_0(&VAR_2->devices);

 return VAR_2;
}
