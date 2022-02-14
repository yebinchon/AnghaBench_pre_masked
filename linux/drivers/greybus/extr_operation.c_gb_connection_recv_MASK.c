
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_operation_msg_hdr {int type; int operation_id; int size; } ;
struct gb_connection {scalar_t__ state; int name; TYPE_1__* hd; } ;
struct device {int dummy; } ;
typedef int header ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,...) ;
 int FUNC_1 (struct device*,char*,int ,size_t) ;
 scalar_t__ FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_connection*,struct gb_operation_msg_hdr*,void*,size_t) ;
 int FUNC_4 (struct gb_connection*,struct gb_operation_msg_hdr*,void*,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct gb_operation_msg_hdr*,void*,int) ;

void FUNC_7(struct gb_connection *VAR_2,
   void *VAR_3, size_t VAR_4)
{
 struct gb_operation_msg_hdr VAR_5;
 struct device *VAR_6 = &VAR_2->hd->dev;
 size_t VAR_7;

 if (VAR_2->state == VAR_0 ||
     FUNC_2(VAR_2)) {
  FUNC_1(VAR_6, "%s: dropping %zu received bytes\n",
         VAR_2->name, VAR_4);
  return;
 }

 if (VAR_4 < sizeof(VAR_5)) {
  FUNC_0(VAR_6, "%s: short message received\n",
        VAR_2->name);
  return;
 }


 FUNC_6(&VAR_5, VAR_3, sizeof(VAR_5));
 VAR_7 = FUNC_5(VAR_5.size);
 if (VAR_4 < VAR_7) {
  FUNC_0(VAR_6,
        "%s: incomplete message 0x%04x of type 0x%02x received (%zu < %zu)\n",
        VAR_2->name,
        FUNC_5(VAR_5.operation_id),
        VAR_5.type, VAR_4, VAR_7);
  return;
 }

 if (VAR_5.type & VAR_1) {
  FUNC_4(VAR_2, &VAR_5, VAR_3,
         VAR_7);
 } else {
  FUNC_3(VAR_2, &VAR_5, VAR_3,
        VAR_7);
 }
}
