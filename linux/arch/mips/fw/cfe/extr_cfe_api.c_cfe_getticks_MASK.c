
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_time {int dummy; } ;
struct TYPE_3__ {scalar_t__ ticks; } ;
struct TYPE_4__ {TYPE_1__ xiocb_time; } ;
struct cfe_xiocb {int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; scalar_t__ xiocb_handle; scalar_t__ xiocb_status; int xiocb_fcode; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int64_t
FUNC_1(void)
{
 struct cfe_xiocb VAR_1;

 VAR_1.xiocb_fcode = VAR_0;
 VAR_1.xiocb_status = 0;
 VAR_1.xiocb_handle = 0;
 VAR_1.xiocb_flags = 0;
 VAR_1.xiocb_psize = sizeof(struct xiocb_time);
 VAR_1.plist.xiocb_time.ticks = 0;

 FUNC_0(&VAR_1);

 return VAR_1.plist.xiocb_time.ticks;

}
