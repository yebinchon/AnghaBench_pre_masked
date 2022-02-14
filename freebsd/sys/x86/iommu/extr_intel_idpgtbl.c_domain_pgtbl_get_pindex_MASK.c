
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
struct dmar_domain {int pglvl; } ;
typedef int dmar_gaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct dmar_domain*,int ,int) ;

__attribute__((used)) static vm_pindex_t
FUNC_2(struct dmar_domain *VAR_1, dmar_gaddr_t VAR_2, int VAR_3)
{
 vm_pindex_t VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_1->pglvl,
     ("wrong lvl %p %d", VAR_1, VAR_3));

 for (VAR_5 = VAR_4 = 0, VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_5 = VAR_4) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_6) +
      VAR_5 * VAR_0 + 1;
 }
 return (VAR_4);
}
