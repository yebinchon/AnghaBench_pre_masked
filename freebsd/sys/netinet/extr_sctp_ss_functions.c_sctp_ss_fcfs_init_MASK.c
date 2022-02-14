
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_7__ {size_t streamoutcnt; TYPE_4__* strmout; } ;
struct sctp_tcb {TYPE_3__ asoc; } ;
struct sctp_stream_queue_pending {int dummy; } ;
struct TYPE_5__ {int list; } ;
struct TYPE_6__ {TYPE_1__ out; } ;
struct sctp_association {TYPE_2__ ss_data; } ;
struct TYPE_8__ {int outqueue; } ;


 int FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (struct sctp_tcb*) ;
 struct sctp_stream_queue_pending* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sctp_stream_queue_pending* FUNC_4 (struct sctp_stream_queue_pending*,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct sctp_tcb*,TYPE_3__*,TYPE_4__*,struct sctp_stream_queue_pending*,int) ;

__attribute__((used)) static void
FUNC_6(struct sctp_tcb *VAR_1, struct sctp_association *VAR_2,
    int VAR_3)
{
 uint32_t VAR_4, VAR_5 = 0, VAR_6 = 1;
 struct sctp_stream_queue_pending *VAR_7;
 uint16_t VAR_8;

 if (VAR_3 == 0) {
  FUNC_0(VAR_1);
 }
 FUNC_3(&VAR_2->ss_data.out.list);





 while (VAR_6) {
  VAR_6 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_1->asoc.streamoutcnt; VAR_8++) {
   VAR_7 = FUNC_2(&VAR_1->asoc.strmout[VAR_8].outqueue);
   VAR_4 = 0;

   while (VAR_7 != ((void*)0) && VAR_4 < VAR_5) {
    VAR_7 = FUNC_4(VAR_7, VAR_0);
    VAR_4++;
   }
   if (VAR_7 != ((void*)0)) {
    FUNC_5(VAR_1, &VAR_1->asoc, &VAR_1->asoc.strmout[VAR_8], VAR_7, 1);
    VAR_6 = 1;
   }
  }
  VAR_5++;
 }
 if (VAR_3 == 0) {
  FUNC_1(VAR_1);
 }
 return;
}
