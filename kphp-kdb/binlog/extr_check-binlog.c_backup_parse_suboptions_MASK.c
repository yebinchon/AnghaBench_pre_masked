
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int warn_bad_backups_which_could_be_deleted; int warn_redundant_good_backups; void* check_level; int check_type; void* shorter_middle_log_level; void* shorter_last_log_level; } ;


 char* VAR_0 ;
 TYPE_1__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,...) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3 (void) {
  if (VAR_2 == ((void*)0)) {
    FUNC_1 ("Backup suboptions wasn't specified (use -B switch).\n");
    return -1;
  }
  if (!FUNC_2 (VAR_2, "all")) {
    VAR_2 = VAR_0 ;
  }
  const char *VAR_7;
  int VAR_8 = 0;
  for (VAR_7 = VAR_2; *VAR_7; VAR_7++) {
    switch (*VAR_7) {
    case 'd':
      VAR_1.warn_bad_backups_which_could_be_deleted = 1;
    break;
    case 'r':
      VAR_1.warn_redundant_good_backups = 1;
    break;
    case 'L':
    case 'l':
      VAR_1.shorter_last_log_level = FUNC_0 (*VAR_7) ? VAR_5 : VAR_6;
    break;
    case 'M':
    case 'm':
      VAR_1.shorter_middle_log_level = FUNC_0 (*VAR_7) ? VAR_5 : VAR_6;
    break;
    case 'F':
    case 'f':
      VAR_8++;
      VAR_1.check_type = VAR_3;
      VAR_1.check_level = FUNC_0 (*VAR_7) ? VAR_5 : VAR_6;
    break;
    case 'p':
    case 'P':
      VAR_8++;
      VAR_1.check_type = VAR_4;
      VAR_1.check_level = FUNC_0 (*VAR_7) ? VAR_5 : VAR_6;
    break;
    default:
      FUNC_1 ("Unimplemented suboption: '%c'\n", *VAR_7);
      return -1;
    }
  }

  if (VAR_8 != 1) {
    FUNC_1 ("Backup suboptions should contain exactly one option from the list ['f', 'F', 'p', 'P'] or equal to 'all'.\n");
    return -1;
  }

  return 0;
}
