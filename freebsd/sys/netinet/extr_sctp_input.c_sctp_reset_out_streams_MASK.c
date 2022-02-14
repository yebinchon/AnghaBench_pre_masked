
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct TYPE_4__ {size_t streamoutcnt; TYPE_1__* strmout; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct TYPE_3__ {scalar_t__ next_mid_unordered; scalar_t__ next_mid_ordered; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ,struct sctp_tcb*,scalar_t__,void*,int ) ;

__attribute__((used)) static void
FUNC_2(struct sctp_tcb *VAR_2, uint32_t VAR_3, uint16_t *VAR_4)
{
 uint32_t VAR_5;
 uint16_t VAR_6;

 if (VAR_3 > 0) {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   VAR_6 = FUNC_0(VAR_4[VAR_5]);
   if (VAR_6 >= VAR_2->asoc.streamoutcnt) {

    continue;
   }
   VAR_2->asoc.strmout[VAR_6].next_mid_ordered = 0;
   VAR_2->asoc.strmout[VAR_6].next_mid_unordered = 0;
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_2->asoc.streamoutcnt; VAR_5++) {
   VAR_2->asoc.strmout[VAR_5].next_mid_ordered = 0;
   VAR_2->asoc.strmout[VAR_5].next_mid_unordered = 0;
  }
 }
 FUNC_1(VAR_0, VAR_2, VAR_3, (void *)VAR_4, VAR_1);
}
