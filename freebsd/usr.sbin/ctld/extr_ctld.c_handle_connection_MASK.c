
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_len; } ;
struct portal {TYPE_1__* p_portal_group; } ;
struct connection {scalar_t__ conn_session_type; } ;
struct conf {scalar_t__ conf_maxproc; int conf_timeout; int conf_pidfh; } ;
typedef scalar_t__ pid_t ;
typedef int host ;
struct TYPE_2__ {int pg_name; struct conf* pg_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct connection* FUNC_2 (struct portal*,int,char*,struct sockaddr const*) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sockaddr const*,int ,char*,int,int *,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct connection*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int,char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct connection*) ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (char*,char*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void
FUNC_19(struct portal *VAR_5, int VAR_6,
    const struct sockaddr *VAR_7, bool VAR_8)
{
 struct connection *VAR_9;
 int VAR_10;
 pid_t VAR_11;
 char VAR_12[VAR_2 + 1];
 struct conf *VAR_13;

 VAR_13 = VAR_5->p_portal_group->pg_conf;

 if (VAR_8) {
  FUNC_10("incoming connection; not forking due to -d flag");
 } else {
  VAR_4 -= FUNC_18(0);
  FUNC_0(VAR_4 >= 0);

  while (VAR_13->conf_maxproc > 0 && VAR_4 >= VAR_13->conf_maxproc) {
   FUNC_10("maxproc limit of %d child processes hit; "
       "waiting for child process to exit", VAR_13->conf_maxproc);
   VAR_4 -= FUNC_18(1);
   FUNC_0(VAR_4 >= 0);
  }
  FUNC_10("incoming connection; forking child process #%d",
      VAR_4);
  VAR_4++;
  VAR_11 = FUNC_5();
  if (VAR_11 < 0)
   FUNC_11(1, "fork");
  if (VAR_11 > 0) {
   FUNC_1(VAR_6);
   return;
  }
 }
 FUNC_15(VAR_13->conf_pidfh);

 VAR_10 = FUNC_7(VAR_7, VAR_7->sa_len,
     VAR_12, sizeof(VAR_12), ((void*)0), 0, VAR_3);
 if (VAR_10 != 0)
  FUNC_12(1, "getnameinfo: %s", FUNC_6(VAR_10));

 FUNC_10("accepted connection from %s; portal group \"%s\"",
     VAR_12, VAR_5->p_portal_group->pg_name);
 FUNC_13(VAR_12);
 FUNC_17("%s", VAR_12);

 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_12, VAR_7);
 FUNC_16(VAR_13->conf_timeout, 1);
 FUNC_8();
 FUNC_14(VAR_9);
 if (VAR_9->conn_session_type == VAR_1) {
  FUNC_9(VAR_9);
  FUNC_10("connection handed off to the kernel");
 } else {
  FUNC_0(VAR_9->conn_session_type == VAR_0);
  FUNC_3(VAR_9);
 }
 FUNC_10("nothing more to do; exiting");
 FUNC_4(0);
}
