
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct work_struct {int dummy; } ;
struct TYPE_4__ {int operation; } ;
struct hv_start_fcopy {int file_size; int copy_flags; scalar_t__ path_name; scalar_t__ file_name; TYPE_1__ hdr; } ;
struct hv_do_fcopy {int dummy; } ;
typedef int __u8 ;
struct TYPE_6__ {int recv_len; int state; TYPE_2__* fcopy_msg; } ;
struct TYPE_5__ {int operation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,void*,int,int *) ;
 int FUNC_3 (struct hv_start_fcopy*) ;
 struct hv_start_fcopy* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_9)
{
 struct hv_start_fcopy *VAR_10 = ((void*)0);
 int VAR_11 = VAR_7.fcopy_msg->operation;
 struct hv_start_fcopy *VAR_12;
 void *VAR_13;
 int VAR_14, VAR_15;
 switch (VAR_11) {
 case 129:
  VAR_15 = sizeof(struct hv_start_fcopy);
  VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_0);
  if (!VAR_10)
   return;

  VAR_10->hdr.operation = VAR_11;
  VAR_12 = (struct hv_start_fcopy *)VAR_7.fcopy_msg;

  FUNC_6((wchar_t *)VAR_12->file_name, VAR_5,
    VAR_4,
    (__u8 *)&VAR_10->file_name, VAR_5 - 1);

  FUNC_6((wchar_t *)VAR_12->path_name, VAR_5,
    VAR_4,
    (__u8 *)&VAR_10->path_name, VAR_5 - 1);

  VAR_10->copy_flags = VAR_12->copy_flags;
  VAR_10->file_size = VAR_12->file_size;
  VAR_13 = VAR_10;
  break;

 case 128:
  VAR_13 = VAR_7.fcopy_msg;
  VAR_15 = sizeof(struct hv_do_fcopy);
  break;
 default:
  VAR_13 = VAR_7.fcopy_msg;
  VAR_15 = VAR_7.recv_len;
  break;
 }

 VAR_7.state = VAR_2;
 VAR_14 = FUNC_2(VAR_8, VAR_13, VAR_15, ((void*)0));
 if (VAR_14) {
  FUNC_5("FCP: failed to communicate to the daemon: %d\n", VAR_14);
  if (FUNC_0(&VAR_6)) {
   FUNC_1(VAR_3);
   VAR_7.state = VAR_1;
  }
 }
 FUNC_3(VAR_10);
}
