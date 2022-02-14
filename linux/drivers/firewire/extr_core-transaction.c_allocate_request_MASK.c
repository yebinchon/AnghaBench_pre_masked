
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int callback; scalar_t__ ack; int generation; int timestamp; int speed; } ;
struct fw_request {int length; int request_header; int data; int ack; TYPE_1__ response; } ;
struct fw_packet {int* header; int* payload; int ack; int generation; int timestamp; int speed; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;





 int FUNC_2 (struct fw_card*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct fw_card*,char*,int,int,int) ;
 struct fw_request* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static struct fw_request *FUNC_6(struct fw_card *VAR_2,
        struct fw_packet *VAR_3)
{
 struct fw_request *VAR_4;
 u32 *VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->header[0]);
 switch (VAR_7) {
 case 128:
  VAR_5 = &VAR_3->header[3];
  VAR_6 = 4;
  break;

 case 129:
 case 132:
  VAR_5 = VAR_3->payload;
  VAR_6 = FUNC_0(VAR_3->header[3]);
  break;

 case 130:
  VAR_5 = ((void*)0);
  VAR_6 = 4;
  break;

 case 131:
  VAR_5 = ((void*)0);
  VAR_6 = FUNC_0(VAR_3->header[3]);
  break;

 default:
  FUNC_3(VAR_2, "ERROR - corrupt request received - %08x %08x %08x\n",
    VAR_3->header[0], VAR_3->header[1], VAR_3->header[2]);
  return ((void*)0);
 }

 VAR_4 = FUNC_4(sizeof(*VAR_4) + VAR_6, VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->response.speed = VAR_3->speed;
 VAR_4->response.timestamp =
   FUNC_2(VAR_2, VAR_3->timestamp);
 VAR_4->response.generation = VAR_3->generation;
 VAR_4->response.ack = 0;
 VAR_4->response.callback = VAR_1;
 VAR_4->ack = VAR_3->ack;
 VAR_4->length = VAR_6;
 if (VAR_5)
  FUNC_5(VAR_4->data, VAR_5, VAR_6);

 FUNC_5(VAR_4->request_header, VAR_3->header, sizeof(VAR_3->header));

 return VAR_4;
}
