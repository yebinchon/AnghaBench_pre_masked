
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct gb_operation_msg_hdr {scalar_t__ result; scalar_t__ type; scalar_t__ operation_id; int size; } ;
struct gb_message {size_t payload_size; struct gb_operation_msg_hdr* payload; struct gb_operation_msg_hdr* header; struct gb_operation_msg_hdr* buffer; } ;
struct gb_host_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gb_host_device *VAR_1,
          struct gb_message *VAR_2,
          u16 VAR_3,
          size_t VAR_4, u8 VAR_5)
{
 struct gb_operation_msg_hdr *VAR_6;

 VAR_6 = VAR_2->buffer;

 VAR_2->header = VAR_6;
 VAR_2->payload = VAR_4 ? VAR_6 + 1 : ((void*)0);
 VAR_2->payload_size = VAR_4;






 if (VAR_5 != VAR_0) {
  u16 VAR_7 = (u16)(sizeof(*VAR_6) + VAR_4);
  VAR_6->size = FUNC_0(VAR_7);
  VAR_6->operation_id = 0;
  VAR_6->type = VAR_5;
  VAR_6->result = 0;
 }
}
