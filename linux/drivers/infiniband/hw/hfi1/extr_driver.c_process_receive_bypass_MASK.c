
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct hfi1_packet {int rhf; void** ebuf; int tlen; int hdr; TYPE_1__* rcd; } ;
struct TYPE_4__ {int status_and_code; void* packet_flit2; void* packet_flit1; } ;
struct hfi1_devdata {TYPE_2__ err_info_rcvport; int sw_rcv_bypass_packet_errors; } ;
typedef int flits ;
struct TYPE_3__ {struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (struct hfi1_packet*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hfi1_packet*) ;
 scalar_t__ FUNC_4 (struct hfi1_packet*) ;
 scalar_t__ FUNC_5 (struct hfi1_packet*) ;
 int FUNC_6 (struct hfi1_packet*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct hfi1_packet*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct hfi1_packet *VAR_4)
{
 struct hfi1_devdata *VAR_5 = VAR_4->rcd->dd;

 if (FUNC_4(VAR_4)) {
  FUNC_6(VAR_4);
  return VAR_3;
 }

 if (FUNC_5(VAR_4))
  return VAR_3;

 FUNC_9(VAR_4);

 if (FUNC_10(FUNC_8(VAR_4->rhf))) {
  FUNC_1(VAR_4);
  return VAR_3;
 }

 if (FUNC_2(VAR_4->hdr) == 0x2) {
  FUNC_3(VAR_4);
 } else {
  FUNC_0(VAR_5,
      "Bypass packets other than 16B are not supported in normal operation. Dropping\n");
  FUNC_7(&VAR_5->sw_rcv_bypass_packet_errors);
  if (!(VAR_5->err_info_rcvport.status_and_code &
        VAR_1)) {
   u64 *VAR_6 = VAR_4->ebuf;

   if (VAR_6 && !(VAR_4->rhf & VAR_2)) {
    VAR_5->err_info_rcvport.packet_flit1 = VAR_6[0];
    VAR_5->err_info_rcvport.packet_flit2 =
     VAR_4->tlen > sizeof(VAR_6[0]) ?
     VAR_6[1] : 0;
   }
   VAR_5->err_info_rcvport.status_and_code |=
    (VAR_1 | VAR_0);
  }
 }
 return VAR_3;
}
