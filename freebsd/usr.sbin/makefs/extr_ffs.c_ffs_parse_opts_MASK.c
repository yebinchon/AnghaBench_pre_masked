
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int letter; int * name; } ;
typedef TYPE_1__ option_t ;
struct TYPE_7__ {TYPE_1__* fs_options; TYPE_3__* fs_specific; } ;
typedef TYPE_2__ fsinfo_t ;
struct TYPE_8__ {int optimization; } ;
typedef TYPE_3__ ffs_opt_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (TYPE_1__*,char const*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

int
FUNC_6(const char *VAR_4, fsinfo_t *VAR_5)
{
 ffs_opt_t *VAR_6 = VAR_5->fs_specific;
 option_t *VAR_7 = VAR_5->fs_options;
 char VAR_8[1024];

 int VAR_9;

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_6 != ((void*)0));

 if (VAR_3 & VAR_0)
  FUNC_2("ffs_parse_opts: got `%s'\n", VAR_4);

 VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_8, sizeof(VAR_8));
 if (VAR_9 == -1)
  return 0;

 if (VAR_7[VAR_9].name == ((void*)0))
  FUNC_0();

 switch (VAR_7[VAR_9].letter) {
 case 'o':
  if (FUNC_4(VAR_8, "time") == 0) {
   VAR_6->optimization = VAR_2;
  } else if (FUNC_4(VAR_8, "space") == 0) {
   VAR_6->optimization = VAR_1;
  } else {
   FUNC_5("Invalid optimization `%s'", VAR_8);
   return 0;
  }
  break;
 default:
  break;
 }
 return 1;
}
