
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct bundle {int dummy; } ;
typedef scalar_t__ mode_t ;
typedef enum server_stat { ____Placeholder_server_stat } server_stat ;
struct TYPE_3__ {char* sockname; scalar_t__ mask; scalar_t__ port; } ;
struct TYPE_4__ {int fd; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct sockaddr_un*,char,int) ;
 TYPE_2__ VAR_12 ;
 int FUNC_5 (struct bundle*) ;
 int FUNC_6 (int,int ,int ,int*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (int ,char const*) ;
 char const* FUNC_10 (int ) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*,int ,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (char const*) ;

enum server_stat
FUNC_15(struct bundle *VAR_13, const char *VAR_14, mode_t VAR_15)
{
  struct sockaddr_un VAR_16;
  mode_t VAR_17;
  int VAR_18;

  VAR_17 = (mode_t)-1;

  if (VAR_12.cfg.sockname[0] != '\0' && !FUNC_8(VAR_12.cfg.sockname, VAR_14))
    FUNC_5(VAR_13);

  FUNC_4(&VAR_16, '\0', sizeof VAR_16);
  VAR_16.sun_len = FUNC_11(VAR_14);
  if (VAR_16.sun_len > sizeof VAR_16.sun_path - 1) {
    FUNC_3(VAR_1, "Local: %s: Path too long\n", VAR_14);
    return VAR_6;
  }
  VAR_16.sun_family = VAR_0;
  FUNC_9(VAR_16.sun_path, VAR_14);

  VAR_18 = FUNC_7(VAR_4, VAR_8, 0);
  if (VAR_18 < 0) {
    FUNC_3(VAR_1, "Local: socket: %s\n", FUNC_10(VAR_11));
    goto failed;
  }
  FUNC_6(VAR_18, VAR_9, VAR_10, &VAR_18, sizeof VAR_18);
  if (VAR_15 != (mode_t)-1)
    VAR_17 = FUNC_13(VAR_15);
  if (FUNC_0(VAR_18, (struct sockaddr *)&VAR_16, sizeof VAR_16) < 0) {
    if (VAR_15 != (mode_t)-1)
      FUNC_13(VAR_17);
    FUNC_3(VAR_3, "Local: bind: %s\n", FUNC_10(VAR_11));
    FUNC_1(VAR_18);
    goto failed;
  }
  if (VAR_15 != (mode_t)-1)
    FUNC_13(VAR_17);
  if (FUNC_2(VAR_18, 5) != 0) {
    FUNC_3(VAR_1, "Local: Unable to listen to socket -"
               " BUNDLE overload?\n");
    FUNC_1(VAR_18);
    FUNC_14(VAR_14);
    goto failed;
  }
  FUNC_5(VAR_13);
  VAR_12.fd = VAR_18;
  VAR_12.cfg.port = 0;
  FUNC_12(VAR_12.cfg.sockname, VAR_16.sun_path, sizeof VAR_12.cfg.sockname - 1);
  VAR_12.cfg.sockname[sizeof VAR_12.cfg.sockname - 1] = '\0';
  VAR_12.cfg.mask = VAR_15;
  FUNC_3(VAR_2, "Listening at local socket %s.\n", VAR_14);

  return VAR_7;

failed:
  if (VAR_12.fd == -1) {
    VAR_12.fd = -1;
    VAR_12.cfg.port = 0;
    FUNC_12(VAR_12.cfg.sockname, VAR_16.sun_path,
            sizeof VAR_12.cfg.sockname - 1);
    VAR_12.cfg.sockname[sizeof VAR_12.cfg.sockname - 1] = '\0';
    VAR_12.cfg.mask = VAR_15;
  }
  return VAR_5;
}
