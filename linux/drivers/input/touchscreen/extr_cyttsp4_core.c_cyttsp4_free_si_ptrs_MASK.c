
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdata; int ddata; int opcfg; int pcfg; int test; int cydata; } ;
struct cyttsp4_sysinfo {int btn_rec_data; int xy_data; int xy_mode; int btn; TYPE_1__ si_ptrs; } ;
struct cyttsp4 {struct cyttsp4_sysinfo sysinfo; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cyttsp4 *VAR_0)
{
 struct cyttsp4_sysinfo *VAR_1 = &VAR_0->sysinfo;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->si_ptrs.cydata);
 FUNC_0(VAR_1->si_ptrs.test);
 FUNC_0(VAR_1->si_ptrs.pcfg);
 FUNC_0(VAR_1->si_ptrs.opcfg);
 FUNC_0(VAR_1->si_ptrs.ddata);
 FUNC_0(VAR_1->si_ptrs.mdata);
 FUNC_0(VAR_1->btn);
 FUNC_0(VAR_1->xy_mode);
 FUNC_0(VAR_1->xy_data);
 FUNC_0(VAR_1->btn_rec_data);
}
