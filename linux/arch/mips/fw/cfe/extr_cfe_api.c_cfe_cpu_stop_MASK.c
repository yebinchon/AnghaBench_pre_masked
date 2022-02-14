
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_cpuctl {int dummy; } ;
struct TYPE_3__ {int cpu_number; int cpu_command; } ;
struct TYPE_4__ {TYPE_1__ xiocb_cpuctl; } ;
struct cfe_xiocb {int xiocb_status; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; scalar_t__ xiocb_handle; int xiocb_fcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int FUNC_1(int VAR_2)
{
 struct cfe_xiocb VAR_3;

 VAR_3.xiocb_fcode = VAR_0;
 VAR_3.xiocb_status = 0;
 VAR_3.xiocb_handle = 0;
 VAR_3.xiocb_flags = 0;
 VAR_3.xiocb_psize = sizeof(struct xiocb_cpuctl);
 VAR_3.plist.xiocb_cpuctl.cpu_number = VAR_2;
 VAR_3.plist.xiocb_cpuctl.cpu_command = VAR_1;

 FUNC_0(&VAR_3);

 return VAR_3.xiocb_status;
}
