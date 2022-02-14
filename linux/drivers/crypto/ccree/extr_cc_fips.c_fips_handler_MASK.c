
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_fips_handle {int tasklet; } ;
struct cc_drvdata {scalar_t__ hw_rev; struct cc_fips_handle* fips_handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct cc_drvdata *VAR_1)
{
 struct cc_fips_handle *VAR_2 = VAR_1->fips_handle;

 if (VAR_1->hw_rev < VAR_0)
  return;

 FUNC_0(&VAR_2->tasklet);
}
