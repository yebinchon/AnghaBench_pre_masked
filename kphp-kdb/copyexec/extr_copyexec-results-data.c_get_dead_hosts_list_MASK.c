
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int a ;
struct TYPE_2__ {unsigned long long volume_id; int last_action_time; char* hostname; int disabled; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 char* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int,char*,unsigned long long,int) ;

char *FUNC_8 (unsigned long long VAR_3, int VAR_4) {
  FUNC_7 (3, "get_dead_hosts_list (volume_id:%llu, delay: %d)\n", VAR_3, VAR_4);
  int *VAR_5 = FUNC_1 (VAR_1, sizeof (VAR_5[0]));
  if (VAR_5 == ((void*)0)) {
    return ((void*)0);
  }
  int VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = VAR_2 - VAR_4;
  for (VAR_6 = 1; VAR_6 <= VAR_1; VAR_6++) {
    if (VAR_0[VAR_6]->volume_id == VAR_3 && !VAR_0[VAR_6]->disabled && VAR_0[VAR_6]->last_action_time < VAR_9) {
      VAR_5[VAR_7++] = VAR_6;
      VAR_8 += FUNC_6 (VAR_0[VAR_6]->hostname) + 1;
    }
  }
  if (!VAR_7) {
    return FUNC_5 ("");
  }
  char *VAR_10 = FUNC_3 (VAR_8), *VAR_11 = VAR_10;
  if (VAR_10 == ((void*)0)) {
    FUNC_2 (VAR_5);
    return ((void*)0);
  }

  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    if (VAR_6 > 0) {
      *VAR_11++= ',';
    }
    FUNC_4 (VAR_11, VAR_0[VAR_5[VAR_6]]->hostname);
    VAR_11 += FUNC_6 (VAR_11);
  }
  FUNC_0 (VAR_11 == (VAR_10 + VAR_8 - 1));
  FUNC_2 (VAR_5);
  return VAR_10;
}
