
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_4__ {size_t streamincnt; TYPE_1__* strmin; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct TYPE_3__ {int last_mid_delivered; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ,struct sctp_tcb*,size_t,void*,int ) ;

void
FUNC_2(struct sctp_tcb *VAR_2, uint32_t VAR_3, uint16_t *VAR_4)
{
 uint32_t VAR_5;
 uint16_t VAR_6;






 if (VAR_3) {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   VAR_6 = FUNC_0(VAR_4[VAR_5]);
   if (VAR_6 >= VAR_2->asoc.streamincnt) {
    continue;
   }
   VAR_2->asoc.strmin[VAR_6].last_mid_delivered = 0xffffffff;
  }
 } else {
  VAR_4 = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_2->asoc.streamincnt; VAR_5++) {
   VAR_2->asoc.strmin[VAR_5].last_mid_delivered = 0xffffffff;
  }
 }
 FUNC_1(VAR_0, VAR_2, VAR_3, (void *)VAR_4, VAR_1);
}
