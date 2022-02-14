
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_2__* server_p ;
typedef TYPE_3__* sdp_pdu_p ;
typedef size_t int32_t ;
struct TYPE_20__ {int pid; scalar_t__ tid; scalar_t__ len; } ;
struct TYPE_19__ {scalar_t__ imtu; TYPE_1__* fdidx; int * req; int fdset; } ;
struct TYPE_18__ {int valid; scalar_t__ omtu; scalar_t__ rsp_limit; scalar_t__ rsp_size; scalar_t__ rsp_cs; scalar_t__ control; int * rsp; int server; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t,int *) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;






 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*,int,scalar_t__,...) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (size_t,int *,scalar_t__) ;
 size_t FUNC_6 (TYPE_2__*,size_t) ;
 size_t FUNC_7 (TYPE_2__*,size_t) ;
 size_t FUNC_8 (TYPE_2__*,size_t) ;
 size_t FUNC_9 (TYPE_2__*,size_t) ;
 size_t FUNC_10 (TYPE_2__*,size_t) ;
 size_t FUNC_11 (TYPE_2__*,size_t) ;
 size_t FUNC_12 (TYPE_2__*,size_t,size_t) ;
 size_t FUNC_13 (TYPE_2__*,size_t) ;
 size_t FUNC_14 (TYPE_2__*,size_t) ;
 size_t FUNC_15 (TYPE_2__*,size_t) ;
 size_t FUNC_16 (TYPE_2__*,size_t) ;
 size_t FUNC_17 (TYPE_2__*,size_t) ;
 size_t FUNC_18 (TYPE_2__*,size_t) ;
 int FUNC_19 (scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_20(server_p VAR_5, int32_t VAR_6)
{
 sdp_pdu_p VAR_7 = (sdp_pdu_p) VAR_5->req;
 int32_t VAR_8, VAR_9;

 FUNC_1(VAR_5->imtu > 0);
 FUNC_1(VAR_5->req != ((void*)0));
 FUNC_1(FUNC_0(VAR_6, &VAR_5->fdset));
 FUNC_1(VAR_5->fdidx[VAR_6].valid);
 FUNC_1(!VAR_5->fdidx[VAR_6].server);
 FUNC_1(VAR_5->fdidx[VAR_6].rsp != ((void*)0));
 FUNC_1(VAR_5->fdidx[VAR_6].omtu >= VAR_1);

 do {
  VAR_8 = FUNC_5(VAR_6, VAR_5->req, VAR_5->imtu);
 } while (VAR_8 < 0 && VAR_4 == VAR_0);

 if (VAR_8 < 0) {
  FUNC_2("Could not receive SDP request from %s socket. %s (%d)",
   VAR_5->fdidx[VAR_6].control? "control" : "L2CAP",
   FUNC_19(VAR_4), VAR_4);
  return (-1);
 }
 if (VAR_8 == 0) {
  FUNC_3("Client on %s socket has disconnected",
   VAR_5->fdidx[VAR_6].control? "control" : "L2CAP");
  return (-1);
 }

 if (VAR_8 >= sizeof(*VAR_7) &&
     sizeof(*VAR_7) + (VAR_7->len = FUNC_4(VAR_7->len)) == VAR_8) {
  switch (VAR_7->pid) {
  case 129:
   VAR_9 = FUNC_10(VAR_5, VAR_6);
   break;

  case 133:
   VAR_9 = FUNC_6(VAR_5, VAR_6);
   break;

  case 130:
   VAR_9 = FUNC_9(VAR_5, VAR_6);
   break;

  case 131:
   VAR_9 = FUNC_8(VAR_5, VAR_6);
   break;

  case 128:
   VAR_9 = FUNC_11(VAR_5, VAR_6);
   break;

  case 132:
   VAR_9 = FUNC_7(VAR_5, VAR_6);
   break;

  default:
   VAR_9 = VAR_3;
   break;
  }
 } else
  VAR_9 = VAR_2;

 if (VAR_9 == 0) {
  switch (VAR_7->pid) {
  case 129:
   VAR_9 = FUNC_17(VAR_5, VAR_6);
   break;

  case 133:
   VAR_9 = FUNC_13(VAR_5, VAR_6);
   break;

  case 130:
   VAR_9 = FUNC_16(VAR_5, VAR_6);
   break;

  case 131:
   VAR_9 = FUNC_15(VAR_5, VAR_6);
   break;

  case 128:
   VAR_9 = FUNC_18(VAR_5, VAR_6);
   break;

  case 132:
   VAR_9 = FUNC_14(VAR_5, VAR_6);
   break;

  default:
   VAR_9 = VAR_3;
   break;
  }

  if (VAR_9 != 0)
   FUNC_2("Could not send SDP response to %s socket, " "pdu->pid=%d, pdu->tid=%d, error=%d",

    VAR_5->fdidx[VAR_6].control? "control" : "L2CAP",
    VAR_7->pid, FUNC_4(VAR_7->tid), VAR_9);
 } else {
  FUNC_2("Could not process SDP request from %s socket, " "pdu->pid=%d, pdu->tid=%d, pdu->len=%d, len=%d, " "error=%d",


   VAR_5->fdidx[VAR_6].control? "control" : "L2CAP",
   VAR_7->pid, FUNC_4(VAR_7->tid), VAR_7->len, VAR_8, VAR_9);

  VAR_9 = FUNC_12(VAR_5, VAR_6, VAR_9);
  if (VAR_9 != 0)
   FUNC_2("Could not send SDP error response to %s " "socket, pdu->pid=%d, pdu->tid=%d, error=%d",

    VAR_5->fdidx[VAR_6].control? "control" : "L2CAP",
    VAR_7->pid, FUNC_4(VAR_7->tid), VAR_9);
 }


 if (VAR_9 != 0) {
  VAR_5->fdidx[VAR_6].rsp_cs = 0;
  VAR_5->fdidx[VAR_6].rsp_size = 0;
  VAR_5->fdidx[VAR_6].rsp_limit = 0;
 }

 return (VAR_9);
}
