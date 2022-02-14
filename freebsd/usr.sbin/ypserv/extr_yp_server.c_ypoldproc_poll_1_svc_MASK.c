
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {char* peer; scalar_t__ ordernum; int map; int domain; } ;
struct TYPE_16__ {TYPE_2__ yp_resp_map_parmstype; } ;
struct TYPE_17__ {TYPE_3__ ypresponse_u; int yp_resptype; } ;
typedef TYPE_4__ ypresponse ;
struct TYPE_18__ {scalar_t__ stat; scalar_t__ ordernum; } ;
typedef TYPE_5__ ypresp_order ;
struct TYPE_19__ {scalar_t__ stat; char* peer; } ;
typedef TYPE_6__ ypresp_master ;
struct TYPE_21__ {int map; int domain; } ;
struct TYPE_14__ {TYPE_9__ yp_req_nokeytype; } ;
struct TYPE_20__ {scalar_t__ yp_reqtype; TYPE_1__ yprequest_u; } ;
typedef TYPE_7__ yprequest ;
struct svc_req {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_9__*,struct svc_req*) ;
 TYPE_5__* FUNC_1 (TYPE_9__*,struct svc_req*) ;

ypresponse *
FUNC_2(yprequest *VAR_3, struct svc_req *VAR_4)
{
 static ypresponse VAR_5;
 ypresp_master *VAR_6;
 ypresp_order *VAR_7;

 VAR_5.yp_resptype = VAR_1;
 VAR_5.ypresponse_u.yp_resp_map_parmstype.domain =
  VAR_3->yprequest_u.yp_req_nokeytype.domain;
 VAR_5.ypresponse_u.yp_resp_map_parmstype.map =
  VAR_3->yprequest_u.yp_req_nokeytype.map;






 VAR_5.ypresponse_u.yp_resp_map_parmstype.ordernum = 0;
 VAR_5.ypresponse_u.yp_resp_map_parmstype.peer = "";

 if (VAR_3->yp_reqtype != VAR_0) {
  return(&VAR_5);
 }

 VAR_6 = FUNC_0(&VAR_3->yprequest_u.yp_req_nokeytype,
         VAR_4);
 if (VAR_6 == ((void*)0))
  return(((void*)0));

 if (VAR_6->stat != VAR_2) {
  return(&VAR_5);
 }

 VAR_7 = FUNC_1(&VAR_3->yprequest_u.yp_req_nokeytype,
         VAR_4);
 if (VAR_7 == ((void*)0))
  return(((void*)0));

 if (VAR_7->stat != VAR_2) {
  return(&VAR_5);
 }

 VAR_5.ypresponse_u.yp_resp_map_parmstype.peer =
  VAR_6->peer;
 VAR_5.ypresponse_u.yp_resp_map_parmstype.ordernum =
  VAR_7->ordernum;

 return (&VAR_5);
}
