
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rpc_status ;
typedef TYPE_1__* rpc_page_t ;
typedef int plist_t ;
struct TYPE_5__ {int url; int title; int connection_id; int page_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const,char*,int *) ;
 scalar_t__ FUNC_1 (int const,char*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;

rpc_status FUNC_4(const plist_t VAR_2, rpc_page_t *VAR_3) {
  rpc_page_t VAR_4 = (VAR_3 ? FUNC_3() : ((void*)0));
  if (!VAR_4 ||
      FUNC_1(VAR_2, "WIRPageIdentifierKey",
        &VAR_4->page_id) ||
      FUNC_0(VAR_2, "WIRConnectionIdentifierKey",
        &VAR_4->connection_id) ||
      FUNC_0(VAR_2, "WIRTitleKey",
        &VAR_4->title) ||
      FUNC_0(VAR_2, "WIRURLKey",
        &VAR_4->url)) {
    FUNC_2(VAR_4);
    if (VAR_3) {
      *VAR_3 = ((void*)0);
    }
    return VAR_0;
  }
  *VAR_3 = VAR_4;
  return VAR_1;
}
