
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_buffer {int dummy; } ;
struct TYPE_3__ {int buf_length; int buf_retlen; int buf_ptr; int buf_offset; } ;
struct TYPE_4__ {TYPE_1__ xiocb_buffer; } ;
struct cfe_xiocb {scalar_t__ xiocb_status; int xiocb_handle; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; int xiocb_fcode; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct cfe_xiocb*) ;

int FUNC_2(int VAR_1, s64 VAR_2, unsigned char *VAR_3, int VAR_4)
{
 struct cfe_xiocb VAR_5;

 VAR_5.xiocb_fcode = VAR_0;
 VAR_5.xiocb_status = 0;
 VAR_5.xiocb_handle = VAR_1;
 VAR_5.xiocb_flags = 0;
 VAR_5.xiocb_psize = sizeof(struct xiocb_buffer);
 VAR_5.plist.xiocb_buffer.buf_offset = VAR_2;
 VAR_5.plist.xiocb_buffer.buf_ptr = FUNC_0(VAR_3);
 VAR_5.plist.xiocb_buffer.buf_length = VAR_4;

 FUNC_1(&VAR_5);

 if (VAR_5.xiocb_status < 0)
  return VAR_5.xiocb_status;
 return VAR_5.plist.xiocb_buffer.buf_retlen;
}
