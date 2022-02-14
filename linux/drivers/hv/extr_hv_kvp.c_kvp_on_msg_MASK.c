
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * key; } ;
struct hv_kvp_msg_enumerate {TYPE_2__ data; } ;
struct TYPE_4__ {struct hv_kvp_msg_enumerate kvp_enum_data; } ;
struct hv_kvp_msg {int error; TYPE_1__ body; } ;
struct TYPE_6__ {scalar_t__ state; int recv_channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hv_kvp_msg*) ;
 int VAR_6 ;
 int FUNC_3 (struct hv_kvp_msg*,int) ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static int FUNC_4(void *VAR_9, int VAR_10)
{
 struct hv_kvp_msg *VAR_11 = (struct hv_kvp_msg *)VAR_9;
 struct hv_kvp_msg_enumerate *VAR_12;
 int VAR_13 = 0;

 if (VAR_10 < sizeof(*VAR_11))
  return -VAR_0;






 if (VAR_8.state < VAR_1) {
  return FUNC_2(VAR_11);
 }


 if (VAR_8.state < VAR_3)
  return -VAR_0;

 VAR_8.state = VAR_2;






 VAR_12 = &VAR_11->body.kvp_enum_data;

 switch (VAR_5) {
 case 129:



  if (VAR_12->data.key[0] == 0)
   VAR_13 = VAR_4;
  break;

 case 128:




  VAR_13 = VAR_11->error;
  break;
 }





 if (FUNC_0(&VAR_7)) {
  FUNC_3(VAR_11, VAR_13);
  FUNC_1(VAR_8.recv_channel, VAR_6);
 }

 return 0;
}
