
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int config; scalar_t__ reg; } ;
struct hw_perf_event {int config; scalar_t__ config_base; TYPE_1__ extra_reg; } ;
struct TYPE_4__ {int perf_ctr_virt_mask; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_2(struct hw_perf_event *VAR_1,
       u64 VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_0.perf_ctr_virt_mask);

 if (VAR_1->extra_reg.reg)
  FUNC_1(VAR_1->extra_reg.reg, VAR_1->extra_reg.config);
 FUNC_1(VAR_1->config_base, (VAR_1->config | VAR_2) & ~VAR_3);
}
