
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintfptr_t ;
struct pmcstat_image {int dummy; } ;
struct pmcstat_cgnode {int pcg_children; scalar_t__ pcg_nchildren; scalar_t__ pcg_count; int pcg_func; struct pmcstat_image* pcg_image; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 struct pmcstat_cgnode* FUNC_2 (int) ;

__attribute__((used)) static struct pmcstat_cgnode *
FUNC_3(struct pmcstat_image *VAR_1, uintfptr_t VAR_2)
{
 struct pmcstat_cgnode *VAR_3;

 if ((VAR_3 = FUNC_2(sizeof(*VAR_3))) == ((void*)0))
  FUNC_1(VAR_0, "ERROR: Cannot allocate callgraph node");

 VAR_3->pcg_image = VAR_1;
 VAR_3->pcg_func = VAR_2;

 VAR_3->pcg_count = 0;
 VAR_3->pcg_nchildren = 0;
 FUNC_0(&VAR_3->pcg_children);

 return (VAR_3);
}
