
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcpl_ct_arc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ) ;
 struct pmcpl_ct_arc* FUNC_3 (struct pmcpl_ct_arc*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, int *VAR_3, struct pmcpl_ct_arc **VAR_4)
{
 unsigned int VAR_5;

 if (VAR_2 < *VAR_3)
  return;

 VAR_5 = *VAR_3 + FUNC_2(VAR_2 + 1 - *VAR_3, VAR_1);
 *VAR_4 = FUNC_3(*VAR_4, VAR_5, sizeof(struct pmcpl_ct_arc));
 if (*VAR_4 == ((void*)0))
  FUNC_1(VAR_0, "ERROR: out of memory");
 FUNC_0((char *)*VAR_4 + *VAR_3 * sizeof(struct pmcpl_ct_arc),
     (VAR_5 - *VAR_3) * sizeof(struct pmcpl_ct_arc));
 *VAR_3 = VAR_5;
}
