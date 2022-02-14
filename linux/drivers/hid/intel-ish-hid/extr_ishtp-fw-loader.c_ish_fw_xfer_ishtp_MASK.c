
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {int is_last; scalar_t__ size; scalar_t__ offset; int xfer_mode; TYPE_1__ hdr; } ;
struct loader_xfer_ipc_fragment {TYPE_2__ fragment; int data; } ;
struct loader_msg_hdr {int dummy; } ;
struct ishtp_cl_data {int flag_retry; } ;
struct firmware {scalar_t__ size; int * data; } ;
typedef int ldr_xfer_ipc_ack ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct loader_xfer_ipc_fragment*) ;
 struct loader_xfer_ipc_fragment* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct ishtp_cl_data*,int *,scalar_t__,int *,int) ;
 int FUNC_5 (int ,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ishtp_cl_data *VAR_6,
        const struct firmware *VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 struct loader_xfer_ipc_fragment *VAR_12;
 struct loader_msg_hdr VAR_13;

 VAR_11 =
  VAR_4 - VAR_2;

 VAR_12 = FUNC_3(VAR_4, VAR_1);
 if (!VAR_12) {
  VAR_6->flag_retry = 1;
  return -VAR_0;
 }

 VAR_12->fragment.hdr.command = VAR_3;
 VAR_12->fragment.xfer_mode = VAR_5;


 VAR_9 = 0;
 while (VAR_9 < VAR_7->size) {
  if (VAR_9 + VAR_11 < VAR_7->size) {
   VAR_10 = VAR_11;
   VAR_12->fragment.is_last = 0;
  } else {
   VAR_10 = VAR_7->size - VAR_9;
   VAR_12->fragment.is_last = 1;
  }

  VAR_12->fragment.offset = VAR_9;
  VAR_12->fragment.size = VAR_10;
  FUNC_5(VAR_12->data,
         &VAR_7->data[VAR_9],
         VAR_10);

  FUNC_1(FUNC_0(VAR_6),
   "xfer_mode=ipc offset=0x%08x size=0x%08x is_last=%d\n",
   VAR_12->fragment.offset,
   VAR_12->fragment.size,
   VAR_12->fragment.is_last);

  VAR_8 = FUNC_4(VAR_6,
        (u8 *)VAR_12,
        VAR_2 + VAR_10,
        (u8 *)&VAR_13,
        sizeof(VAR_13));
  if (VAR_8 < 0) {
   VAR_6->flag_retry = 1;
   goto end_err_resp_buf_release;
  }

  VAR_9 += VAR_10;
 }

 FUNC_2(VAR_12);
 return 0;

end_err_resp_buf_release:

 FUNC_2(VAR_12);
 return VAR_8;
}
