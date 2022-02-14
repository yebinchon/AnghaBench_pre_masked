
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct xiocb_meminfo {int dummy; } ;
struct TYPE_3__ {int mi_idx; int mi_type; int mi_size; int mi_addr; } ;
struct TYPE_4__ {TYPE_1__ xiocb_meminfo; } ;
struct cfe_xiocb {scalar_t__ xiocb_status; int xiocb_flags; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_handle; int xiocb_fcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int
FUNC_1(int VAR_1, int VAR_2, u64 *VAR_3, u64 *VAR_4, u64 *VAR_5)
{
 struct cfe_xiocb VAR_6;

 VAR_6.xiocb_fcode = VAR_0;
 VAR_6.xiocb_status = 0;
 VAR_6.xiocb_handle = 0;
 VAR_6.xiocb_flags = VAR_2;
 VAR_6.xiocb_psize = sizeof(struct xiocb_meminfo);
 VAR_6.plist.xiocb_meminfo.mi_idx = VAR_1;

 FUNC_0(&VAR_6);

 if (VAR_6.xiocb_status < 0)
  return VAR_6.xiocb_status;

 *VAR_3 = VAR_6.plist.xiocb_meminfo.mi_addr;
 *VAR_4 = VAR_6.plist.xiocb_meminfo.mi_size;
 *VAR_5 = VAR_6.plist.xiocb_meminfo.mi_type;

 return 0;
}
