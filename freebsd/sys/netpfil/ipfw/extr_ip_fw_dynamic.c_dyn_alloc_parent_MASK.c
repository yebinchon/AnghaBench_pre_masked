
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int uint16_t ;
struct dyn_parent {scalar_t__ expire; void* hashval; int rulenum; void* ruleid; void* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_6 ;
 struct dyn_parent* FUNC_1 (int ,int) ;

__attribute__((used)) static struct dyn_parent *
FUNC_2(void *VAR_7, uint32_t VAR_8, uint16_t VAR_9,
    uint32_t VAR_10)
{
 struct dyn_parent *VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_1 | VAR_2);
 if (VAR_11 == ((void*)0)) {
  if (VAR_5 != VAR_6) {
   VAR_5 = VAR_6;
   FUNC_0(VAR_0,
       "ipfw: Cannot allocate parent dynamic state, "
       "consider increasing "
       "net.inet.ip.fw.dyn_parent_max\n");
  }
  return (((void*)0));
 }

 VAR_11->parent = VAR_7;
 VAR_11->ruleid = VAR_8;
 VAR_11->rulenum = VAR_9;
 VAR_11->hashval = VAR_10;
 VAR_11->expire = VAR_6 + VAR_4;
 return (VAR_11);
}
