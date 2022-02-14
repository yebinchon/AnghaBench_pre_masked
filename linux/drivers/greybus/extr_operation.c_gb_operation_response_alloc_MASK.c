
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct gb_operation_msg_hdr {int operation_id; } ;
struct gb_operation {int type; struct gb_message* response; TYPE_1__* request; TYPE_3__* connection; } ;
struct gb_message {TYPE_2__* header; struct gb_operation* operation; } ;
struct gb_host_device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_6__ {struct gb_host_device* hd; } ;
struct TYPE_5__ {int operation_id; } ;
struct TYPE_4__ {struct gb_operation_msg_hdr* header; } ;


 int VAR_0 ;
 struct gb_message* FUNC_0 (struct gb_host_device*,int,size_t,int ) ;

bool FUNC_1(struct gb_operation *VAR_1,
     size_t VAR_2, gfp_t VAR_3)
{
 struct gb_host_device *VAR_4 = VAR_1->connection->hd;
 struct gb_operation_msg_hdr *VAR_5;
 struct gb_message *VAR_6;
 u8 VAR_7;

 VAR_7 = VAR_1->type | VAR_0;
 VAR_6 = FUNC_0(VAR_4, VAR_7, VAR_2, VAR_3);
 if (!VAR_6)
  return 0;
 VAR_6->operation = VAR_1;







 VAR_5 = VAR_1->request->header;
 VAR_6->header->operation_id = VAR_5->operation_id;
 VAR_1->response = VAR_6;

 return 1;
}
