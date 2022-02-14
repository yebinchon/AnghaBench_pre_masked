
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rpc_status ;
typedef TYPE_1__* rpc_page_t ;
typedef int * plist_t ;
typedef char* plist_dict_iter ;
struct TYPE_5__ {scalar_t__ page_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int * const) ;
 int FUNC_3 (int * const,char**) ;
 int FUNC_4 (int * const,char*,char**,int **) ;
 scalar_t__ FUNC_5 (int * const) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (int *,TYPE_1__**) ;
 scalar_t__ FUNC_8 (char*,int *,int ) ;

rpc_status FUNC_9(const plist_t VAR_3, rpc_page_t **VAR_4) {
  if (!VAR_3 || !VAR_4 ||
      FUNC_5(VAR_3) != VAR_0) {
    return VAR_1;
  }

  *VAR_4 = ((void*)0);
  size_t VAR_5 = FUNC_2(VAR_3);
  rpc_page_t *VAR_6 = (rpc_page_t *)FUNC_0(VAR_5 + 1, sizeof(rpc_page_t));
  if (!VAR_6) {
    return VAR_1;
  }
  plist_dict_iter VAR_7 = ((void*)0);
  FUNC_3(VAR_3, &VAR_7);
  int VAR_8 = (VAR_7 != ((void*)0));
  size_t VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_5 && VAR_8; VAR_9++) {
    char *VAR_10 = ((void*)0);
    plist_t VAR_11 = ((void*)0);
    FUNC_4(VAR_3, VAR_7, &VAR_10, &VAR_11);
    rpc_page_t VAR_12 = ((void*)0);
    VAR_8 = (VAR_10 && !FUNC_7(VAR_11, &VAR_12) &&
        VAR_12->page_id == FUNC_8(VAR_10, ((void*)0), 0));
    VAR_6[VAR_9] = VAR_12;
    FUNC_1(VAR_10);
  }
  FUNC_1(VAR_7);
  if (!VAR_8) {
    FUNC_6(VAR_6);
    return VAR_1;
  }
  *VAR_4 = VAR_6;
  return VAR_2;
}
