
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
typedef int a ;
struct TYPE_2__ {unsigned long long volume_id; int last_action_time; int last_data_time; int first_data_time; int random_tag; int hostname; int disabled; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 char* FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,int,char*,unsigned long long,int ,int ,int ,int ) ;
 int FUNC_5 (char*,char*,unsigned long long,int ,int ,int ,int ) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int,char*,unsigned long long,int) ;

char *FUNC_8 (unsigned long long VAR_3, int VAR_4) {
  FUNC_7 (3, "get_dead_hosts_list_full (volume_id:%llu, delay: %d)\n", VAR_3, VAR_4);
  char VAR_5[1024];
  int *VAR_6 = FUNC_1 (VAR_1, sizeof (VAR_6[0]));
  if (VAR_6 == ((void*)0)) {
    return ((void*)0);
  }
  int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = VAR_2 - VAR_4;
  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++) {
    if (VAR_0[VAR_7]->volume_id == VAR_3 && !VAR_0[VAR_7]->disabled && VAR_0[VAR_7]->last_action_time < VAR_10) {
      VAR_6[VAR_8++] = VAR_7;
      VAR_9 += FUNC_4 (VAR_5, sizeof (VAR_5), "%llu,%s,0x%llx,%d,%d\n", VAR_0[VAR_7]->volume_id, VAR_0[VAR_7]->hostname, VAR_0[VAR_7]->random_tag, VAR_0[VAR_7]->first_data_time, VAR_0[VAR_7]->last_data_time);
    }
  }
  if (!VAR_8) {
    return FUNC_6 ("");
  }
  VAR_9++;
  char *VAR_11 = FUNC_3 (VAR_9), *VAR_12 = VAR_11;
  if (VAR_11 == ((void*)0)) {
    FUNC_2 (VAR_6);
    return ((void*)0);
  }

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
    VAR_12 += FUNC_5 (VAR_12, "%llu,%s,0x%llx,%d,%d\n", VAR_0[VAR_6[VAR_7]]->volume_id, VAR_0[VAR_6[VAR_7]]->hostname, VAR_0[VAR_6[VAR_7]]->random_tag, VAR_0[VAR_6[VAR_7]]->first_data_time, VAR_0[VAR_6[VAR_7]]->last_data_time);
  }
  FUNC_0 (VAR_12 == (VAR_11 + VAR_9 - 1));
  FUNC_2 (VAR_6);
  return VAR_11;
}
