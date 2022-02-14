
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;
struct TYPE_4__ {int (* on_applicationSentData ) (TYPE_1__*,char*,char*,char*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const,char*,char**,size_t*) ;
 int FUNC_2 (int const,char*,char**) ;
 int FUNC_3 (TYPE_1__*,char*,char*,char*,size_t) ;

rpc_status FUNC_4(rpc_t VAR_2, const plist_t VAR_3) {
  char *VAR_4 = ((void*)0);
  char *VAR_5 = ((void*)0);
  char *VAR_6 = ((void*)0);
  size_t VAR_7 = 0;
  rpc_status VAR_8;
  if (!FUNC_2(VAR_3, "WIRApplicationIdentifierKey",
        &VAR_4) &&
      !FUNC_2(VAR_3, "WIRDestinationKey",
        &VAR_5) &&
      !FUNC_1(VAR_3, "WIRMessageDataKey",
        &VAR_6, &VAR_7) &&
      !VAR_2->on_applicationSentData(VAR_2,
        VAR_4, VAR_5, VAR_6, VAR_7)) {
    VAR_8 = VAR_1;
  } else {
    VAR_8 = VAR_0;
  }
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
  FUNC_0(VAR_6);
  return VAR_8;
}
