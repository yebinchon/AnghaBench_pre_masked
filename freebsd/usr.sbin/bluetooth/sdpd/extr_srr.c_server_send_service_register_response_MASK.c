
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iovec {int iov_len; TYPE_3__* iov_base; } ;
typedef TYPE_2__* server_p ;
struct TYPE_8__ {int len; int tid; int pid; } ;
typedef TYPE_3__ sdp_pdu_t ;
typedef TYPE_4__* sdp_pdu_p ;
typedef int pdu ;
typedef int iov ;
typedef size_t int32_t ;
struct TYPE_9__ {int tid; } ;
struct TYPE_7__ {TYPE_1__* fdidx; scalar_t__ req; } ;
struct TYPE_6__ {int rsp_size; int rsp_limit; scalar_t__ rsp_cs; TYPE_3__* rsp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (size_t,struct iovec const*,int) ;

int32_t
FUNC_3(server_p VAR_3, int32_t VAR_4)
{
 struct iovec VAR_5[2];
 sdp_pdu_t VAR_6;
 int32_t VAR_7;

 FUNC_0(VAR_3->fdidx[VAR_4].rsp_size < VAR_3->fdidx[VAR_4].rsp_limit);

 VAR_6.pid = VAR_1;
 VAR_6.tid = ((sdp_pdu_p)(VAR_3->req))->tid;
 VAR_6.len = FUNC_1(VAR_3->fdidx[VAR_4].rsp_size);

 VAR_5[0].iov_base = &VAR_6;
 VAR_5[0].iov_len = sizeof(VAR_6);

 VAR_5[1].iov_base = VAR_3->fdidx[VAR_4].rsp;
 VAR_5[1].iov_len = VAR_3->fdidx[VAR_4].rsp_size;

 do {
  VAR_7 = FUNC_2(VAR_4, (struct iovec const *) &VAR_5, sizeof(VAR_5)/sizeof(VAR_5[0]));
 } while (VAR_7 < 0 && VAR_2 == VAR_0);

 VAR_3->fdidx[VAR_4].rsp_cs = 0;
 VAR_3->fdidx[VAR_4].rsp_size = 0;
 VAR_3->fdidx[VAR_4].rsp_limit = 0;

 return ((VAR_7 < 0)? VAR_2 : 0);
}
