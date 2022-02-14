
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int fw_domains; int fw_domains_active; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_uncore*,int) ;

__attribute__((used)) static inline void FUNC_2(struct intel_uncore *VAR_0,
         enum forcewake_domains VAR_1)
{
 FUNC_0(!VAR_1);


 VAR_1 &= VAR_0->fw_domains;
 VAR_1 &= ~VAR_0->fw_domains_active;

 if (VAR_1)
  FUNC_1(VAR_0, VAR_1);
}
