
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int rpc_page_t ;
typedef int plist_t ;
struct TYPE_4__ {int (* on_applicationSentListing ) (TYPE_1__*,char*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const,char*) ;
 int FUNC_2 (int const,char*,char**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (TYPE_1__*,char*,int *) ;

rpc_status FUNC_6(rpc_t VAR_2, const plist_t VAR_3) {
  char *VAR_4 = ((void*)0);
  rpc_page_t *VAR_5 = ((void*)0);
  plist_t VAR_6 = FUNC_1(VAR_3, "WIRListingKey");
  rpc_status VAR_7;
  if (!FUNC_2(VAR_3, "WIRApplicationIdentifierKey",
        &VAR_4) &&
      !FUNC_4(VAR_6, &VAR_5) &&
      !VAR_2->on_applicationSentListing(VAR_2, VAR_4, VAR_5)) {
    VAR_7 = VAR_1;
  } else {
    VAR_7 = VAR_0;
  }
  FUNC_0(VAR_4);
  FUNC_3(VAR_5);
  return VAR_7;
}
