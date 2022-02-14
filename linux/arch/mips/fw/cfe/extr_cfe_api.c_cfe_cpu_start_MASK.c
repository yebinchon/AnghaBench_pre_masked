
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_cpuctl {int dummy; } ;
struct TYPE_3__ {int cpu_number; long gp_val; long sp_val; long a1_val; long start_addr; int cpu_command; } ;
struct TYPE_4__ {TYPE_1__ xiocb_cpuctl; } ;
struct cfe_xiocb {int xiocb_status; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; scalar_t__ xiocb_handle; int xiocb_fcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int FUNC_1(int VAR_2, void (*VAR_3) (void), long VAR_4, long VAR_5, long VAR_6)
{
 struct cfe_xiocb VAR_7;

 VAR_7.xiocb_fcode = VAR_0;
 VAR_7.xiocb_status = 0;
 VAR_7.xiocb_handle = 0;
 VAR_7.xiocb_flags = 0;
 VAR_7.xiocb_psize = sizeof(struct xiocb_cpuctl);
 VAR_7.plist.xiocb_cpuctl.cpu_number = VAR_2;
 VAR_7.plist.xiocb_cpuctl.cpu_command = VAR_1;
 VAR_7.plist.xiocb_cpuctl.gp_val = VAR_5;
 VAR_7.plist.xiocb_cpuctl.sp_val = VAR_4;
 VAR_7.plist.xiocb_cpuctl.a1_val = VAR_6;
 VAR_7.plist.xiocb_cpuctl.start_addr = (long) VAR_3;

 FUNC_0(&VAR_7);

 return VAR_7.xiocb_status;
}
