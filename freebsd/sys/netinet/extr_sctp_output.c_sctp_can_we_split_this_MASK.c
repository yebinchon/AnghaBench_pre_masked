
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ total_flight; } ;
struct sctp_tcb {int sctp_socket; TYPE_1__ asoc; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_3(struct sctp_tcb *VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, uint32_t VAR_5, int VAR_6)
{




 if (VAR_6) {





  if (VAR_4 >= VAR_3) {





   if (VAR_2->asoc.total_flight == 0) {




    return (VAR_3);
   }
   return (0);

  } else {

   return (VAR_4);
  }
 }





 if (FUNC_1(VAR_2->sctp_socket) < VAR_5) {
  return (VAR_3);
 }
 if ((VAR_3 <= VAR_4) ||
     ((VAR_3 - VAR_4) < FUNC_0(VAR_0))) {

  return (0);
 }




 if (VAR_4 >= FUNC_2(FUNC_0(VAR_1), VAR_5)) {

  return (FUNC_2(VAR_4, VAR_5));
 }

 return (0);
}
