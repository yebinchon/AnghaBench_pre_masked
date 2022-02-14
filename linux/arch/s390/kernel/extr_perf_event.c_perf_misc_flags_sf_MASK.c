
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int int_parm_long; } ;
struct perf_sf_sde_regs {scalar_t__ in_guest; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static unsigned long FUNC_1(struct pt_regs *VAR_4)
{
 struct perf_sf_sde_regs *VAR_5;
 unsigned long VAR_6;

 VAR_5 = (struct perf_sf_sde_regs *) &VAR_4->int_parm_long;
 if (VAR_5->in_guest)
  VAR_6 = FUNC_0(VAR_4) ? VAR_1
     : VAR_0;
 else
  VAR_6 = FUNC_0(VAR_4) ? VAR_3
     : VAR_2;
 return VAR_6;
}
