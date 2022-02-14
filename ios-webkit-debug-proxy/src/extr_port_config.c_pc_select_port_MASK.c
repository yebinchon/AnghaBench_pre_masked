
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pc_t ;
typedef TYPE_1__* pc_entry_t ;
struct TYPE_3__ {int min_port; int max_port; } ;


 TYPE_1__* FUNC_0 (int ,char const*) ;

int FUNC_1(pc_t VAR_0, const char *VAR_1,
    int *VAR_2, int *VAR_3, int *VAR_4) {
  const pc_entry_t VAR_5 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_5) {
    *VAR_3 = -1;
    *VAR_4 = -1;
    *VAR_2 = -1;
    return -1;
  }
  *VAR_3 = VAR_5->min_port;
  *VAR_4 = VAR_5->max_port;
  if (*VAR_2 >= 0 &&
      (*VAR_2 < *VAR_3 || *VAR_2 > *VAR_4)) {
    *VAR_2 = -1;
  }
  return 0;
}
