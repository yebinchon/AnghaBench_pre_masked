
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* (* get_temporary_folder ) (int ) ;char const* (* game_type ) (int ) ;char* (* replace_command_line ) (int ,int ) ;} ;
struct TYPE_9__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_7__ {int supported; } ;
struct TYPE_8__ {TYPE_2__ pbos; int command_line; int runfiles_path; TYPE_4__* dm_ctx; } ;
typedef TYPE_3__ GameContext ;
typedef TYPE_4__ DeepmindContext ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 char* FUNC_7 (int ) ;
 char const* FUNC_8 (int ) ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static int FUNC_11(GameContext* VAR_1) {
  DeepmindContext* VAR_2 = VAR_1->dm_ctx;

  FUNC_6(VAR_1->runfiles_path);

  FUNC_5();
  FUNC_4();

  const char* VAR_3 = VAR_2->hooks.get_temporary_folder(VAR_2->userdata);
  FUNC_3(VAR_1->command_line, sizeof(VAR_1->command_line),
           FUNC_10(" +set fs_temporarypath \"%s\"", VAR_3));
  FUNC_3(VAR_1->command_line, sizeof(VAR_1->command_line),
           FUNC_10(" +set fs_homepath \"%s\"", VAR_3));

  FUNC_3(VAR_1->command_line, sizeof(VAR_1->command_line),
           FUNC_10(" +set g_gametype \"%d\"", VAR_2->hooks.game_type(VAR_2->userdata)));

  const char* VAR_4 =
      VAR_2->hooks.replace_command_line(VAR_2->userdata, VAR_1->command_line);

  FUNC_1((char*)VAR_4);

  FUNC_2();
  FUNC_0();


  VAR_1->pbos.supported = VAR_0;

  return 0;
}
