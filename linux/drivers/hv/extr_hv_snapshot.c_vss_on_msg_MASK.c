
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ operation; } ;
struct hv_vss_msg {int error; TYPE_3__ vss_hdr; } ;
struct TYPE_8__ {scalar_t__ state; int recv_channel; TYPE_2__* msg; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ vss_cf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct hv_vss_msg*) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;

__attribute__((used)) static int FUNC_5(void *VAR_11, int VAR_12)
{
 struct hv_vss_msg *VAR_13 = (struct hv_vss_msg *)VAR_11;

 if (VAR_12 != sizeof(*VAR_13)) {
  FUNC_2("VSS: Message size does not match length\n");
  return -VAR_0;
 }

 if (VAR_13->vss_hdr.operation == VAR_6 ||
     VAR_13->vss_hdr.operation == VAR_7) {




  if (VAR_10.state > VAR_1) {
   FUNC_2("VSS: Got unexpected registration request\n");
   return -VAR_0;
  }

  return FUNC_3(VAR_13);
 } else if (VAR_10.state == VAR_3) {
  VAR_10.state = VAR_2;

  if (VAR_13->vss_hdr.operation == VAR_5)
   VAR_10.msg->vss_cf.flags =
    VAR_4;

  if (FUNC_0(&VAR_9)) {
   FUNC_4(VAR_13->error);

   FUNC_1(VAR_10.recv_channel,
     VAR_8);
  }
 } else {

  FUNC_2("VSS: Transaction not active\n");
  return -VAR_0;
 }
 return 0;
}
