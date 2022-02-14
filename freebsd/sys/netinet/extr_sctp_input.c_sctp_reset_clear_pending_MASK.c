
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
struct TYPE_3__ {void* state; } ;


 void* VAR_0 ;
 size_t FUNC_0 (size_t) ;

__attribute__((used)) static void
FUNC_1(struct sctp_tcb *VAR_1, uint32_t VAR_2, uint16_t *VAR_3)
{
 uint32_t VAR_4;
 uint16_t VAR_5;

 if (VAR_2 > 0) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   VAR_5 = FUNC_0(VAR_3[VAR_4]);
   if (VAR_5 >= VAR_1->asoc.streamoutcnt) {

    continue;
   }
   VAR_1->asoc.strmout[VAR_5].state = VAR_0;
  }
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_1->asoc.streamoutcnt; VAR_4++) {
   VAR_1->asoc.strmout[VAR_4].state = VAR_0;
  }
 }
}
