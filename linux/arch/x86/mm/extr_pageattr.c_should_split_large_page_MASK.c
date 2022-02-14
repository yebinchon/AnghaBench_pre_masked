
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {scalar_t__ force_split; } ;
typedef int pte_t ;


 int FUNC_0 (int *,unsigned long,struct cpa_data*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(pte_t *VAR_1, unsigned long VAR_2,
       struct cpa_data *VAR_3)
{
 int VAR_4;

 if (VAR_3->force_split)
  return 1;

 FUNC_1(&VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0);

 return VAR_4;
}
