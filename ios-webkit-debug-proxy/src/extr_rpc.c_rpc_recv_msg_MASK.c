
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;
struct TYPE_12__ {int (* on_error ) (TYPE_1__*,char*,char const*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int const,char**,int) ;
 int FUNC_2 (TYPE_1__*,int const) ;
 int FUNC_3 (TYPE_1__*,int const) ;
 int FUNC_4 (TYPE_1__*,int const) ;
 int FUNC_5 (TYPE_1__*,int const) ;
 int FUNC_6 (TYPE_1__*,int const) ;
 int FUNC_7 (TYPE_1__*,int const) ;
 int FUNC_8 (TYPE_1__*,int const) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (TYPE_1__*,char*,char const*,char*) ;

rpc_status FUNC_11(rpc_t VAR_2, const char *VAR_3, const plist_t VAR_4) {
  if (!VAR_3) {
    return VAR_0;
  }

  if (!FUNC_9(VAR_3, "_rpc_reportSetup:")) {
    if (!FUNC_8(VAR_2, VAR_4)) {
      return VAR_1;
    }
  } else if (!FUNC_9(VAR_3, "_rpc_reportConnectedApplicationList:")) {
    if (!FUNC_7(VAR_2, VAR_4)) {
      return VAR_1;
    }
  } else if (!FUNC_9(VAR_3, "_rpc_applicationConnected:")) {
    if (!FUNC_2(VAR_2, VAR_4)) {
      return VAR_1;
    }
  } else if (!FUNC_9(VAR_3, "_rpc_applicationDisconnected:")) {
    if (!FUNC_3(VAR_2, VAR_4)) {
      return VAR_1;
    }
  } else if (!FUNC_9(VAR_3, "_rpc_applicationSentListing:")) {
    if (!FUNC_5(VAR_2, VAR_4)) {
      return VAR_1;
    }
  } else if (!FUNC_9(VAR_3, "_rpc_applicationSentData:")) {
    if (!FUNC_4(VAR_2, VAR_4)) {
      return VAR_1;
    }
  } else if (!FUNC_9(VAR_3, "_rpc_applicationUpdated:")) {
    if (!FUNC_6(VAR_2, VAR_4)) {
      return VAR_1;
    }
  } else if (!FUNC_9(VAR_3, "_rpc_reportConnectedDriverList:")) {
    return VAR_1;
  }


  char *VAR_5 = ((void*)0);
  FUNC_1(VAR_2, VAR_4, &VAR_5, 1);
  rpc_status VAR_6 = VAR_2->on_error(VAR_2, "Invalid message %s %s",
      VAR_3, VAR_5);
  FUNC_0(VAR_5);
  return VAR_6;
}
