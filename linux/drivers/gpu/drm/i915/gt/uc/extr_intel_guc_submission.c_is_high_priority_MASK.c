
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {scalar_t__ priority; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct intel_guc_client *VAR_2)
{
 return (VAR_2->priority == VAR_1 ||
  VAR_2->priority == VAR_0);
}
