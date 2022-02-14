
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pc_t ;
typedef TYPE_2__* pc_entry_t ;
struct TYPE_6__ {char* device_id; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* head; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

const pc_entry_t FUNC_2(pc_t VAR_0, const char *VAR_1) {
  pc_entry_t VAR_2;
  for (VAR_2 = VAR_0->head; VAR_2; VAR_2 = VAR_2->next) {
    const char *VAR_3 = VAR_2->device_id;
    if ((VAR_3 && !FUNC_1(VAR_3, "*")) ||
        (VAR_1 ? (VAR_3 && !FUNC_0(VAR_3, VAR_1)) : !VAR_3)) {
      return VAR_2;
    }
  }
  return ((void*)0);
}
