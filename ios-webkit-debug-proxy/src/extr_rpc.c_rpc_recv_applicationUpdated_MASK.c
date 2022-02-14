
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;
struct TYPE_5__ {int (* on_applicationUpdated ) (TYPE_1__*,char*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const,char*,char**) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;

rpc_status FUNC_4(rpc_t VAR_2, const plist_t VAR_3) {
  char *VAR_4 = ((void*)0);
  char *VAR_5 = ((void*)0);
  rpc_status VAR_6;
  if (!FUNC_1(VAR_3, "WIRHostApplicationIdentifierKey", &VAR_4)) {
    if (!FUNC_1(VAR_3, "WIRApplicationIdentifierKey", &VAR_5) &&
      !VAR_2->on_applicationUpdated(VAR_2, VAR_4, VAR_5)) {
      VAR_6 = VAR_1;
    } else {
      VAR_6 = VAR_0;
    }
  } else if (!FUNC_1(VAR_3, "WIRApplicationNameKey", &VAR_4) &&
             !FUNC_1(VAR_3, "WIRApplicationIdentifierKey", &VAR_5) &&
             !VAR_2->on_applicationUpdated(VAR_2, VAR_4, VAR_5)) {
    VAR_6 = VAR_1;
  } else {
    VAR_6 = VAR_0;
  }
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
  return VAR_6;
}
