
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int rpc_app_t ;
typedef int plist_t ;
struct TYPE_4__ {int (* on_reportConnectedApplicationList ) (TYPE_1__*,int *) ;} ;


 int FUNC_0 (int const,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (TYPE_1__*,int *) ;

rpc_status FUNC_4(rpc_t VAR_0,
    const plist_t VAR_1) {
  plist_t VAR_2 = FUNC_0(VAR_1, "WIRApplicationDictionaryKey");
  rpc_app_t *VAR_3 = ((void*)0);
  rpc_status VAR_4 = FUNC_2(VAR_2, &VAR_3);
  if (!VAR_4) {
    VAR_4 = VAR_0->on_reportConnectedApplicationList(VAR_0, VAR_3);
    FUNC_1(VAR_3);
  }
  return VAR_4;
}
