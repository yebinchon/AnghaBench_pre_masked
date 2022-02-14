
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;
struct TYPE_4__ {int (* send_plist ) (TYPE_1__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

rpc_status FUNC_6(rpc_t VAR_1, const char *VAR_2, plist_t VAR_3) {
  if (!VAR_2 || !VAR_3) {
    return VAR_0;
  }
  plist_t VAR_4 = FUNC_3();
  FUNC_1(VAR_4, "__selector",
      FUNC_4(VAR_2));
  FUNC_1(VAR_4, "__argument", FUNC_0(VAR_3));
  rpc_status VAR_5 = VAR_1->send_plist(VAR_1, VAR_4);
  FUNC_2(VAR_4);
  return VAR_5;
}
