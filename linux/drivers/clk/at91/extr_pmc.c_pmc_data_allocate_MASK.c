
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_data {unsigned int ncore; unsigned int nsystem; unsigned int nperiph; unsigned int ngck; void* ghws; void* phws; void* shws; void* chws; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,int,int ) ;
 struct pmc_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pmc_data*) ;

struct pmc_data *FUNC_3(unsigned int VAR_1, unsigned int VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 struct pmc_data *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);

 if (!VAR_5)
  return ((void*)0);

 VAR_5->ncore = VAR_1;
 VAR_5->chws = FUNC_0(VAR_1, sizeof(struct clk_hw *), VAR_0);
 if (!VAR_5->chws)
  goto err;

 VAR_5->nsystem = VAR_2;
 VAR_5->shws = FUNC_0(VAR_2, sizeof(struct clk_hw *), VAR_0);
 if (!VAR_5->shws)
  goto err;

 VAR_5->nperiph = VAR_3;
 VAR_5->phws = FUNC_0(VAR_3, sizeof(struct clk_hw *), VAR_0);
 if (!VAR_5->phws)
  goto err;

 VAR_5->ngck = VAR_4;
 VAR_5->ghws = FUNC_0(VAR_4, sizeof(struct clk_hw *), VAR_0);
 if (!VAR_5->ghws)
  goto err;

 return VAR_5;

err:
 FUNC_2(VAR_5);

 return ((void*)0);
}
