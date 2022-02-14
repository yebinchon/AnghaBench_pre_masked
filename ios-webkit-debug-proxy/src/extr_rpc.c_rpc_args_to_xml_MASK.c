
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;
struct TYPE_4__ {int (* on_error ) (TYPE_1__*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char**,int*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;

rpc_status FUNC_8(rpc_t VAR_2,
    const void *VAR_3, char **VAR_4, bool VAR_5) {
  if (!VAR_3 || !VAR_4) {
    return VAR_0;
  }
  *VAR_4 = ((void*)0);
  uint32_t VAR_6 = 0;
  FUNC_2((plist_t)VAR_3, VAR_4, &VAR_6);
  if (!*VAR_4 || !VAR_6) {
    return VAR_2->on_error(VAR_2, "plist_to_xml failed");
  }
  if (VAR_5) {
    char *VAR_7 = FUNC_6(*VAR_4, "<plist");
    VAR_7 = (VAR_7 ? FUNC_3(VAR_7, '>') : ((void*)0));
    if (VAR_7) {
      while (*++VAR_7 == '\n') {
      }
      char *VAR_8 = *VAR_4 + VAR_6;
      while (VAR_8 > VAR_7 && (!*VAR_8 || *VAR_8 == '\n')) {
        VAR_8--;
      }
      if (VAR_8-VAR_7 >= 8 && !FUNC_4(VAR_8-7, "</plist>", 8)) {
        VAR_8 -= 8;
        char *VAR_9 = (char *)FUNC_1((VAR_8 - VAR_7 + 1) * sizeof(char));
        FUNC_5(VAR_9, VAR_7, VAR_8 - VAR_7);
        VAR_9[VAR_8 - VAR_7] = '\0';
        FUNC_0(*VAR_4);
        *VAR_4 = VAR_9;
      }
    }
  }
  return VAR_1;
}
