
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fw_request {int length; } ;
struct fw_packet {scalar_t__ ack; int* header; } ;
struct fw_card {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct fw_request* FUNC_3 (struct fw_card*,struct fw_packet*) ;
 int FUNC_4 (struct fw_card*,struct fw_packet*) ;
 int FUNC_5 (struct fw_card*,struct fw_packet*,struct fw_request*,unsigned long long) ;
 int FUNC_6 (struct fw_card*,struct fw_packet*,struct fw_request*,unsigned long long) ;
 int FUNC_7 (unsigned long long,int ) ;

void FUNC_8(struct fw_card *VAR_2, struct fw_packet *VAR_3)
{
 struct fw_request *VAR_4;
 unsigned long long VAR_5;

 if (VAR_3->ack != VAR_1 && VAR_3->ack != VAR_0)
  return;

 if (FUNC_2(FUNC_1(VAR_3->header[0]))) {
  FUNC_4(VAR_2, VAR_3);
  return;
 }

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0)) {

  return;
 }

 VAR_5 = ((u64)FUNC_0(VAR_3->header[1]) << 32) |
  VAR_3->header[2];

 if (!FUNC_7(VAR_5, VAR_4->length))
  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);

}
