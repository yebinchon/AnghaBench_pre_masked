
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cppc_pcc_data {int pcc_mpar; int pcc_nominal; int pcc_mrtt; } ;
struct cpc_register_resource {int dummy; } ;
struct cpc_desc {struct cpc_register_resource* cpc_regs; } ;


 int FUNC_0 (struct cpc_register_resource*) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned int,int) ;
 struct cppc_pcc_data** VAR_4 ;
 void* FUNC_2 (int ,int) ;

unsigned int FUNC_3(int VAR_5)
{
 unsigned int VAR_6 = 0;
 struct cpc_desc *VAR_7;
 struct cpc_register_resource *VAR_8;
 int VAR_9 = FUNC_2(VAR_3, VAR_5);
 struct cppc_pcc_data *VAR_10;

 VAR_7 = FUNC_2(VAR_2, VAR_5);
 if (!VAR_7)
  return VAR_0;

 VAR_8 = &VAR_7->cpc_regs[VAR_1];
 if (!FUNC_0(VAR_8))
  return VAR_0;

 if (VAR_9 < 0)
  return VAR_0;

 VAR_10 = VAR_4[VAR_9];
 if (VAR_10->pcc_mpar)
  VAR_6 = 60 * (1000 * 1000 * 1000 / VAR_10->pcc_mpar);

 VAR_6 = FUNC_1(VAR_6, VAR_10->pcc_nominal * 1000);
 VAR_6 = FUNC_1(VAR_6, VAR_10->pcc_mrtt * 1000);

 return VAR_6;
}
