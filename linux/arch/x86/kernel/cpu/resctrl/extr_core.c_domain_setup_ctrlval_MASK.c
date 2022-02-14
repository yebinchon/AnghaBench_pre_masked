
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdt_resource {int (* msr_update ) (struct rdt_domain*,struct msr_param*,struct rdt_resource*) ;int num_closid; } ;
struct rdt_domain {int * mbps_val; int * ctrl_val; } ;
struct msr_param {int high; scalar_t__ low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct rdt_resource*,int *,int *) ;
 int FUNC_3 (struct rdt_domain*,struct msr_param*,struct rdt_resource*) ;

__attribute__((used)) static int FUNC_4(struct rdt_resource *VAR_2, struct rdt_domain *VAR_3)
{
 struct msr_param VAR_4;
 u32 *VAR_5, *VAR_6;

 VAR_5 = FUNC_1(VAR_2->num_closid, sizeof(*VAR_3->ctrl_val), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2->num_closid, sizeof(*VAR_3->mbps_val), VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 VAR_3->ctrl_val = VAR_5;
 VAR_3->mbps_val = VAR_6;
 FUNC_2(VAR_2, VAR_5, VAR_6);

 VAR_4.low = 0;
 VAR_4.high = VAR_2->num_closid;
 VAR_2->msr_update(VAR_3, &VAR_4, VAR_2);
 return 0;
}
