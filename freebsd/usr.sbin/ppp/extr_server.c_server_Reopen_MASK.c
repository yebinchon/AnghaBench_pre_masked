
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct stat {int st_mode; } ;
struct bundle {int dummy; } ;
typedef int mode_t ;
typedef enum server_stat { ____Placeholder_server_stat } server_stat ;
struct TYPE_3__ {char* sockname; scalar_t__ port; int mask; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct bundle*,char*,int ) ;
 int FUNC_2 (struct bundle*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

enum server_stat
FUNC_6(struct bundle *VAR_4)
{
  char VAR_5[sizeof VAR_3.cfg.sockname];
  struct stat VAR_6;
  u_short VAR_7;
  mode_t VAR_8;
  enum server_stat VAR_9;

  if (VAR_3.cfg.sockname[0] != '\0') {
    FUNC_4(VAR_5, VAR_3.cfg.sockname);
    VAR_8 = VAR_3.cfg.mask;
    FUNC_0(VAR_4);
    if (VAR_3.cfg.sockname[0] != '\0' && FUNC_3(VAR_3.cfg.sockname, &VAR_6) == 0)
      if (!(VAR_6.st_mode & VAR_2) || FUNC_5(VAR_3.cfg.sockname) != 0)
        return VAR_0;
    VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_8);
  } else if (VAR_3.cfg.port != 0) {
    VAR_7 = VAR_3.cfg.port;
    FUNC_0(VAR_4);
    VAR_9 = FUNC_2(VAR_4, VAR_7);
  } else
    VAR_9 = VAR_1;

  return VAR_9;
}
