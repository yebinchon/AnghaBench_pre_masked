
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_envbuf {int dummy; } ;
struct TYPE_3__ {void* val_length; void* val_ptr; void* name_length; void* name_ptr; scalar_t__ enum_idx; } ;
struct TYPE_4__ {TYPE_1__ xiocb_envbuf; } ;
struct cfe_xiocb {int xiocb_status; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; scalar_t__ xiocb_handle; int xiocb_fcode; } ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (struct cfe_xiocb*) ;
 void* FUNC_2 (char*) ;

int FUNC_3(char *VAR_1, char *VAR_2)
{
 struct cfe_xiocb VAR_3;

 VAR_3.xiocb_fcode = VAR_0;
 VAR_3.xiocb_status = 0;
 VAR_3.xiocb_handle = 0;
 VAR_3.xiocb_flags = 0;
 VAR_3.xiocb_psize = sizeof(struct xiocb_envbuf);
 VAR_3.plist.xiocb_envbuf.enum_idx = 0;
 VAR_3.plist.xiocb_envbuf.name_ptr = FUNC_0(VAR_1);
 VAR_3.plist.xiocb_envbuf.name_length = FUNC_2(VAR_1);
 VAR_3.plist.xiocb_envbuf.val_ptr = FUNC_0(VAR_2);
 VAR_3.plist.xiocb_envbuf.val_length = FUNC_2(VAR_2);

 FUNC_1(&VAR_3);

 return VAR_3.xiocb_status;
}
