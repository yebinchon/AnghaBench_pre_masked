
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {scalar_t__ mmio_msg; int fw; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct intel_guc *VAR_0)
{
 FUNC_0(&VAR_0->fw);
 VAR_0->mmio_msg = 0;

 return 0;
}
