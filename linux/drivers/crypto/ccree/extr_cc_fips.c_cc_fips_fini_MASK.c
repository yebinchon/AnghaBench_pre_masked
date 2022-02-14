
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_fips_handle {int tasklet; int nb; } ;
struct cc_drvdata {scalar_t__ hw_rev; struct cc_fips_handle* fips_handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cc_drvdata *VAR_2)
{
 struct cc_fips_handle *VAR_3 = VAR_2->fips_handle;

 if (VAR_2->hw_rev < VAR_0 || !VAR_3)
  return;

 FUNC_0(&VAR_1, &VAR_3->nb);


 FUNC_1(&VAR_3->tasklet);
 VAR_2->fips_handle = ((void*)0);
}
