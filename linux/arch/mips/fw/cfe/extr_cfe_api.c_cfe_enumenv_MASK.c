
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_envbuf {int dummy; } ;
struct TYPE_3__ {int enum_idx; int name_length; int val_length; void* val_ptr; void* name_ptr; } ;
struct TYPE_4__ {TYPE_1__ xiocb_envbuf; } ;
struct cfe_xiocb {int xiocb_status; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; scalar_t__ xiocb_handle; int xiocb_fcode; } ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (struct cfe_xiocb*) ;

int FUNC_2(int VAR_1, char *VAR_2, int VAR_3, char *VAR_4, int VAR_5)
{
 struct cfe_xiocb VAR_6;

 VAR_6.xiocb_fcode = VAR_0;
 VAR_6.xiocb_status = 0;
 VAR_6.xiocb_handle = 0;
 VAR_6.xiocb_flags = 0;
 VAR_6.xiocb_psize = sizeof(struct xiocb_envbuf);
 VAR_6.plist.xiocb_envbuf.enum_idx = VAR_1;
 VAR_6.plist.xiocb_envbuf.name_ptr = FUNC_0(VAR_2);
 VAR_6.plist.xiocb_envbuf.name_length = VAR_3;
 VAR_6.plist.xiocb_envbuf.val_ptr = FUNC_0(VAR_4);
 VAR_6.plist.xiocb_envbuf.val_length = VAR_5;

 FUNC_1(&VAR_6);

 return VAR_6.xiocb_status;
}
