
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
struct work_struct {int dummy; } ;
struct TYPE_16__ {int index; } ;
struct TYPE_15__ {scalar_t__ key; int key_size; } ;
struct TYPE_13__ {scalar_t__ key; int key_size; } ;
struct TYPE_14__ {TYPE_4__ data; } ;
struct TYPE_11__ {int value_u32; int value_u64; scalar_t__ key; int key_size; scalar_t__ value; int value_size; int value_type; } ;
struct TYPE_12__ {TYPE_2__ data; } ;
struct TYPE_17__ {TYPE_7__ kvp_enum_data; TYPE_6__ kvp_delete; TYPE_5__ kvp_get; TYPE_3__ kvp_set; } ;
struct TYPE_10__ {int operation; void* pool; } ;
struct hv_kvp_msg {TYPE_8__ body; TYPE_1__ kvp_hdr; } ;
typedef void* __u8 ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_18__ {scalar_t__ state; struct hv_kvp_msg* kvp_msg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (int ,struct hv_kvp_msg*,int,int *) ;
 int FUNC_2 (struct hv_kvp_msg*) ;
 int FUNC_3 (struct hv_kvp_msg*,int ) ;
 int VAR_9 ;
 TYPE_9__ VAR_10 ;
 struct hv_kvp_msg* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct hv_kvp_msg*,struct hv_kvp_msg*,int const) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (int *,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_9(struct work_struct *VAR_11)
{
 struct hv_kvp_msg *VAR_12;
 struct hv_kvp_msg *VAR_13;
 __u8 VAR_14 = VAR_10.kvp_msg->kvp_hdr.operation;
 __u8 VAR_15 = VAR_10.kvp_msg->kvp_hdr.pool;
 __u32 VAR_16;
 __u64 VAR_17;
 int VAR_18;


 if (VAR_10.state != VAR_1)
  return;

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return;

 VAR_12->kvp_hdr.operation = VAR_14;
 VAR_12->kvp_hdr.pool = VAR_15;
 VAR_13 = VAR_10.kvp_msg;
 switch (VAR_12->kvp_hdr.operation) {
 case 131:
  FUNC_6(VAR_13, VAR_12, 131);
  break;
 case 133:




  FUNC_6(VAR_13, VAR_12, 133);
  break;
 case 132:
  switch (VAR_13->body.kvp_set.data.value_type) {
  case 130:



   VAR_12->body.kvp_set.data.value_size =
    FUNC_8(
    (wchar_t *)VAR_13->body.kvp_set.data.value,
    VAR_13->body.kvp_set.data.value_size,
    VAR_7,
    VAR_12->body.kvp_set.data.value,
    VAR_6 - 1) + 1;
   break;

  case 129:




   VAR_16 = VAR_13->body.kvp_set.data.value_u32;
   VAR_12->body.kvp_set.data.value_size =
    FUNC_7(VAR_12->body.kvp_set.data.value,
     "%u", VAR_16) + 1;
   break;

  case 128:




   VAR_17 = VAR_13->body.kvp_set.data.value_u64;
   VAR_12->body.kvp_set.data.value_size =
    FUNC_7(VAR_12->body.kvp_set.data.value,
     "%llu", VAR_17) + 1;
   break;

  }




  VAR_12->body.kvp_set.data.key_size =
   FUNC_8(
   (wchar_t *)VAR_13->body.kvp_set.data.key,
   VAR_13->body.kvp_set.data.key_size,
   VAR_7,
   VAR_12->body.kvp_set.data.key,
   VAR_5 - 1) + 1;

  break;

 case 134:
  VAR_12->body.kvp_get.data.key_size =
   FUNC_8(
   (wchar_t *)VAR_13->body.kvp_get.data.key,
   VAR_13->body.kvp_get.data.key_size,
   VAR_7,
   VAR_12->body.kvp_get.data.key,
   VAR_5 - 1) + 1;
  break;

 case 136:
  VAR_12->body.kvp_delete.key_size =
   FUNC_8(
   (wchar_t *)VAR_13->body.kvp_delete.key,
   VAR_13->body.kvp_delete.key_size,
   VAR_7,
   VAR_12->body.kvp_delete.key,
   VAR_5 - 1) + 1;
  break;

 case 135:
  VAR_12->body.kvp_enum_data.index =
   VAR_13->body.kvp_enum_data.index;
  break;
 }

 VAR_10.state = VAR_3;
 VAR_18 = FUNC_1(VAR_8, VAR_12, sizeof(*VAR_12), ((void*)0));
 if (VAR_18) {
  FUNC_5("KVP: failed to communicate to the daemon: %d\n", VAR_18);
  if (FUNC_0(&VAR_9)) {
   FUNC_3(VAR_12, VAR_4);
   VAR_10.state = VAR_2;
  }
 }

 FUNC_2(VAR_12);
}
