
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dirent {char* d_name; } ;
struct TYPE_3__ {size_t attack_cnt; int * attack_buf; } ;
typedef TYPE_1__ brain_server_dbs_t ;
typedef int brain_server_db_attack_t ;
typedef int DIR ;


 int FUNC_0 (int ,int ,char*,char const*,int ) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 (char const*) ;
 struct dirent* FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (char*) ;

bool FUNC_11 (brain_server_dbs_t *VAR_2, const char *VAR_3)
{
  VAR_2->attack_cnt = 0;

  if (FUNC_4 (VAR_3) == -1)
  {
    FUNC_0 (VAR_1, 0, "%s: %s\n", VAR_3, FUNC_9 (VAR_0));

    return 0;
  }

  DIR *VAR_4 = FUNC_7 (VAR_3);

  if (VAR_4 == ((void*)0))
  {
    FUNC_0 (VAR_1, 0, "%s: %s\n", VAR_3, FUNC_9 (VAR_0));

    return 0;
  }

  struct dirent *VAR_5 = ((void*)0);

  while ((VAR_5 = FUNC_8 (VAR_4)) != ((void*)0))
  {
    char *VAR_6 = VAR_5->d_name;

    const size_t VAR_7 = FUNC_10 (VAR_6);

    if (VAR_7 != 19) continue;

    if (VAR_6[ 0] != 'b') continue;
    if (VAR_6[ 1] != 'r') continue;
    if (VAR_6[ 2] != 'a') continue;
    if (VAR_6[ 3] != 'i') continue;
    if (VAR_6[ 4] != 'n') continue;
    if (VAR_6[ 5] != '.') continue;

    if (VAR_6[14] != '.') continue;
    if (VAR_6[15] != 'a') continue;
    if (VAR_6[16] != 'd') continue;
    if (VAR_6[17] != 'm') continue;
    if (VAR_6[18] != 'p') continue;

    const u32 VAR_8 = FUNC_3 (FUNC_6 ((const u8 *) VAR_6 + 6));

    brain_server_db_attack_t *VAR_9 = &VAR_2->attack_buf[VAR_2->attack_cnt];

    FUNC_1 (VAR_9, VAR_8);

    if (FUNC_2 (VAR_9, VAR_6) == 0) continue;

    VAR_2->attack_cnt++;
  }

  FUNC_5 (VAR_4);

  return 1;
}
