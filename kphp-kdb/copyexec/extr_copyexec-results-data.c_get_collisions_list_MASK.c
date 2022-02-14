
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int last_data_time; int first_data_time; int random_tag; int hostname; int volume_id; int disabled; } ;
typedef TYPE_1__ host_t ;
typedef int buf ;
typedef int a ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__** FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__**) ;
 int VAR_2 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__**,int,int,int ) ;
 scalar_t__ FUNC_5 (char*,int,char*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (char*,char*,int ,int ,int ,int ,int ) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;

char *FUNC_10 (void) {
  FUNC_8 (3, "get_collistions_list: hosts = %d\n", VAR_2);
  int VAR_3, VAR_4, VAR_5;
  char VAR_6[1024];
  if (!VAR_2) {
    return ((void*)0);
  }
  host_t **VAR_7 = FUNC_1 (VAR_2, sizeof (VAR_7[0]));
  if (VAR_7 == ((void*)0)) {
    return ((void*)0);
  }
  int VAR_8 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (!VAR_0[VAR_3+1]->disabled) {
      VAR_7[VAR_8++] = VAR_0[VAR_3+1];
    }
  }
  if (!VAR_8) {
    return ((void*)0);
  }
  FUNC_4 (VAR_7, VAR_8, sizeof (VAR_7[0]), VAR_1);
  int VAR_9 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3 = VAR_4) {
    for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_8 && !FUNC_9 (VAR_7[VAR_3], VAR_7[VAR_4]); VAR_4++) { }
    int VAR_10 = VAR_4 - VAR_3;
    if (VAR_10 > 1) {
      for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
        VAR_9 += FUNC_5 (VAR_6, sizeof (VAR_6), "%llu,%s,0x%llx,%d,%d\n", VAR_7[VAR_5]->volume_id, VAR_7[VAR_5]->hostname, VAR_7[VAR_5]->random_tag, VAR_7[VAR_5]->first_data_time, VAR_7[VAR_5]->last_data_time);
      }
    }
  }
  if (VAR_9 == 0) {
    return FUNC_7 ("");
  }
  VAR_9++;
  char *VAR_11 = FUNC_3 (VAR_9), *VAR_12 = VAR_11;
  if (VAR_11 == ((void*)0)) {
    FUNC_2 (VAR_7);
    return ((void*)0);
  }
  for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3 = VAR_4) {
    for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_8 && !FUNC_9 (VAR_7[VAR_3], VAR_7[VAR_4]); VAR_4++) { }
    int VAR_13 = VAR_4 - VAR_3;
    if (VAR_13 > 1) {
      for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
        VAR_12 += FUNC_6 (VAR_12, "%llu,%s,0x%llx,%d,%d\n", VAR_7[VAR_5]->volume_id, VAR_7[VAR_5]->hostname, VAR_7[VAR_5]->random_tag, VAR_7[VAR_5]->first_data_time, VAR_7[VAR_5]->last_data_time);
      }
    }
  }
  FUNC_2 (VAR_7);
  FUNC_0 (VAR_12 == (VAR_11 + VAR_9 - 1));
  return VAR_11;
}
