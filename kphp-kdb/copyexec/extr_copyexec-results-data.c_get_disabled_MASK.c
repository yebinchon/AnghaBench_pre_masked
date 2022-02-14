
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long volume_id; char* hostname; int last_data_time; int first_data_time; int random_tag; scalar_t__ disabled; } ;
typedef TYPE_1__ host_t ;
typedef int buf ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,char*,char*,int ,int ,int ) ;
 int FUNC_3 (char*,char*,char*,int ,int ,int ) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int,...) ;

char *FUNC_6 (unsigned long long VAR_2) {
  FUNC_5 (3, "get_disabled (volume_id: %llu)\n", VAR_2);
  char VAR_3[32];
  if (VAR_1 <= 0) {
    return FUNC_4 ("");
  }
  int VAR_4, VAR_5 = 0, VAR_6 = 0;
  host_t *VAR_7;
  for (VAR_4 = 1; VAR_4 <= VAR_1; VAR_4++) {
    VAR_7 = VAR_0[VAR_4];
    if (VAR_7->disabled && VAR_7->volume_id == VAR_2) {
      VAR_5 += FUNC_2 (VAR_3, sizeof (VAR_3), "%s,0x%llx,%d,%d\n", VAR_7->hostname, VAR_7->random_tag, VAR_7->first_data_time, VAR_7->last_data_time);
      VAR_6++;
    }
  }
  if (!VAR_6) {
    return FUNC_4 ("");
  }
  FUNC_5 (4, "get_disabled: l = %d, m = %d\n", VAR_5, VAR_6);

  char *VAR_8 = FUNC_1 (VAR_5 + 1), *VAR_9 = VAR_8;
  if (VAR_8 == ((void*)0)) {
    return ((void*)0);
  }

  for (VAR_4 = 1; VAR_4 <= VAR_1; VAR_4++) {
    VAR_7 = VAR_0[VAR_4];
    if (VAR_7->disabled && VAR_7->volume_id == VAR_2) {
      VAR_9 += FUNC_3 (VAR_9, "%s,0x%llx,%d,%d\n", VAR_7->hostname, VAR_7->random_tag, VAR_7->first_data_time, VAR_7->last_data_time);
    }
  }

  FUNC_0 (VAR_9 == (VAR_8 + VAR_5));
  return VAR_8;
}
