
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef void* uint16_t ;
struct ipfw_flow_id {int dummy; } ;
struct dyn_data {scalar_t__ expire; void* hashval; void* fibnum; void* rulenum; void* ruleid; void* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dyn_data*,struct ipfw_flow_id const*,void const*,int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_7 ;
 struct dyn_data* FUNC_2 (int ,int) ;

__attribute__((used)) static struct dyn_data *
FUNC_3(void *VAR_8, uint32_t VAR_9, uint16_t VAR_10,
    const struct ipfw_flow_id *VAR_11, const void *VAR_12, int VAR_13,
    uint32_t VAR_14, uint16_t VAR_15)
{
 struct dyn_data *VAR_16;

 VAR_16 = FUNC_2(VAR_4, VAR_2 | VAR_3);
 if (VAR_16 == ((void*)0)) {
  if (VAR_6 != VAR_7) {
   VAR_6 = VAR_7;
   FUNC_1(VAR_0,
       "ipfw: Cannot allocate dynamic state, "
       "consider increasing net.inet.ip.fw.dyn_max\n");
  }
  return (((void*)0));
 }

 VAR_16->parent = VAR_8;
 VAR_16->ruleid = VAR_9;
 VAR_16->rulenum = VAR_10;
 VAR_16->fibnum = VAR_15;
 VAR_16->hashval = VAR_14;
 VAR_16->expire = VAR_7 + VAR_5;
 FUNC_0(VAR_16, VAR_11, VAR_12, VAR_13, VAR_1);
 return (VAR_16);
}
