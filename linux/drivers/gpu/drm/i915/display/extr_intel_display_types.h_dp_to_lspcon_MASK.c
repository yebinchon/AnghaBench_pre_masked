
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_lspcon {int dummy; } ;
struct intel_dp {int dummy; } ;
struct TYPE_2__ {struct intel_lspcon lspcon; } ;


 TYPE_1__* FUNC_0 (struct intel_dp*) ;

__attribute__((used)) static inline struct intel_lspcon *
FUNC_1(struct intel_dp *VAR_0)
{
 return &FUNC_0(VAR_0)->lspcon;
}
