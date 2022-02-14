
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int time_t ;
struct netbuf {int dummy; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcproc_t ;
struct TYPE_2__ {int time; int flag; scalar_t__ caller_xid; scalar_t__ reply_type; scalar_t__ versnum; int forward_fd; char* uaddr; scalar_t__ forward_xid; int * caller_addr; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct netbuf*) ;
 int * FUNC_2 (struct netbuf*) ;
 int VAR_4 ;
 void* FUNC_3 (int*) ;

__attribute__((used)) static int
FUNC_4(u_int32_t VAR_5, struct netbuf *VAR_6,
   int VAR_7, char *VAR_8, rpcproc_t VAR_9,
   rpcvers_t VAR_10, u_int32_t *VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 time_t VAR_14, VAR_15;
 static u_int32_t VAR_16;
 int VAR_17 = -1;

 VAR_14 = VAR_0[0].time;
 VAR_15 = FUNC_3((time_t *)0);

 if (VAR_16 == 0)
  VAR_16 = VAR_15 * VAR_3;






 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_0[VAR_12].flag & VAR_1) {
   if ((VAR_0[VAR_12].caller_xid == VAR_5) &&
       (VAR_0[VAR_12].reply_type == VAR_9) &&
       (VAR_0[VAR_12].versnum == VAR_10) &&
       (!FUNC_1(VAR_0[VAR_12].caller_addr,
         VAR_6))) {
    VAR_0[VAR_12].time = FUNC_3((time_t *)0);
    return (0);
   } else {

    if ((VAR_15 - VAR_0[VAR_12].time) > VAR_2)
     (void) FUNC_0(VAR_12);
   }
  }
  if (VAR_17 == -1) {
   if ((VAR_0[VAR_12].flag & VAR_1) == 0) {
    VAR_17 = VAR_12;
   } else if (VAR_0[VAR_12].time < VAR_14) {
    VAR_13 = VAR_12;
    VAR_14 = VAR_0[VAR_12].time;
   }
  }
 }
 if (VAR_17 != -1) {

  VAR_13 = VAR_17;
 } else {
  (void) FUNC_0(VAR_13);
 }
 if ((VAR_0[VAR_13].caller_addr = FUNC_2(VAR_6)) == ((void*)0)) {
  return (-1);
 }
 VAR_4++;
 VAR_0[VAR_13].flag = VAR_1;
 VAR_0[VAR_13].reply_type = VAR_9;
 VAR_0[VAR_13].versnum = VAR_10;
 VAR_0[VAR_13].time = VAR_15;
 VAR_0[VAR_13].caller_xid = VAR_5;
 VAR_0[VAR_13].forward_fd = VAR_7;




 VAR_0[VAR_13].uaddr = VAR_8;
 VAR_16 = VAR_16 + VAR_3;

 if ((u_int32_t)(VAR_16 + VAR_3) <= VAR_3)
  VAR_16 = VAR_3;
 VAR_0[VAR_13].forward_xid = VAR_16 + VAR_13;
 *VAR_11 = VAR_0[VAR_13].forward_xid;
 return (1);
}
