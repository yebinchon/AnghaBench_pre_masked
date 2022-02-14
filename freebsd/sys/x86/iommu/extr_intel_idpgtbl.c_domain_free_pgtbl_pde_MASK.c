
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
struct sf_buf {int dummy; } ;
struct dmar_domain {int dummy; } ;
typedef int dmar_pte_t ;
typedef int dmar_gaddr_t ;


 int * FUNC_0 (struct dmar_domain*,int ,int,int,int *,struct sf_buf**) ;
 int FUNC_1 (struct dmar_domain*,int ,int,int,int *,struct sf_buf**,int) ;

__attribute__((used)) static void
FUNC_2(struct dmar_domain *VAR_0, dmar_gaddr_t VAR_1,
    int VAR_2, int VAR_3)
{
 struct sf_buf *VAR_4;
 dmar_pte_t *VAR_5;
 vm_pindex_t VAR_6;

 VAR_4 = ((void*)0);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6, &VAR_4);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, &VAR_4, 1);
}
