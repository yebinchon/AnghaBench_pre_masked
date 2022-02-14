
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_struct {int dummy; } ;
typedef TYPE_1__* rpc_t ;
struct TYPE_4__ {int on_error; int recv_plist; int send_forwardDidClose; int send_forwardSocketData; int send_forwardSocketSetup; int send_forwardIndicateWebView; int send_forwardGetListing; int send_getConnectedApplications; int send_reportIdentifier; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

rpc_t FUNC_2() {
  rpc_t VAR_9 = (rpc_t)FUNC_0(sizeof(struct rpc_struct));
  if (!VAR_9) {
    return ((void*)0);
  }
  FUNC_1(VAR_9, 0, sizeof(struct rpc_struct));
  VAR_9->send_reportIdentifier = VAR_8;
  VAR_9->send_getConnectedApplications = VAR_7;
  VAR_9->send_forwardGetListing = VAR_3;
  VAR_9->send_forwardIndicateWebView = VAR_4;
  VAR_9->send_forwardSocketSetup = VAR_6;
  VAR_9->send_forwardSocketData = VAR_5;
  VAR_9->send_forwardDidClose = VAR_2;
  VAR_9->recv_plist = VAR_1;
  VAR_9->on_error = VAR_0;
  return VAR_9;
}
