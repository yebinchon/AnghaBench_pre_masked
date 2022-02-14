
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ sb_cc; int my_rwnd_control_len; } ;
struct sctp_tcb {TYPE_1__ asoc; TYPE_2__* sctp_socket; } ;
struct sctp_association {int cnt_on_reasm_queue; scalar_t__ size_on_reasm_queue; int cnt_on_all_streams; scalar_t__ size_on_all_streams; } ;
struct TYPE_4__ {int so_rcv; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int,int) ;

uint32_t
FUNC_5(struct sctp_tcb *VAR_2, struct sctp_association *VAR_3)
{
 uint32_t VAR_4 = 0;







 if (VAR_2->sctp_socket == ((void*)0)) {
  return (VAR_4);
 }

 FUNC_0(VAR_3->cnt_on_reasm_queue > 0 || VAR_3->size_on_reasm_queue == 0,
     ("size_on_reasm_queue is %u", VAR_3->size_on_reasm_queue));
 FUNC_0(VAR_3->cnt_on_all_streams > 0 || VAR_3->size_on_all_streams == 0,
     ("size_on_all_streams is %u", VAR_3->size_on_all_streams));
 if (VAR_2->asoc.sb_cc == 0 &&
     VAR_3->cnt_on_reasm_queue == 0 &&
     VAR_3->cnt_on_all_streams == 0) {

  VAR_4 = FUNC_2(FUNC_1(VAR_2->sctp_socket), VAR_1);
  return (VAR_4);
 }

 VAR_4 = (uint32_t)FUNC_3(&VAR_2->asoc, &VAR_2->sctp_socket->so_rcv);




 VAR_4 = FUNC_4(VAR_4, (uint32_t)(VAR_3->size_on_reasm_queue +
     VAR_3->cnt_on_reasm_queue * VAR_0));
 VAR_4 = FUNC_4(VAR_4, (uint32_t)(VAR_3->size_on_all_streams +
     VAR_3->cnt_on_all_streams * VAR_0));
 if (VAR_4 == 0) {

  return (VAR_4);
 }


 VAR_4 = FUNC_4(VAR_4, VAR_2->asoc.my_rwnd_control_len);




 if (VAR_4 < VAR_2->asoc.my_rwnd_control_len) {
  VAR_4 = 1;
 }
 return (VAR_4);
}
