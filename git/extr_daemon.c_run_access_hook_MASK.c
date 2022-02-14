
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; int len; } ;
struct TYPE_4__ {int buf; } ;
struct TYPE_3__ {int buf; } ;
struct hostinfo {TYPE_2__ tcp_port; TYPE_1__ hostname; } ;
struct daemon_service {int name; } ;
struct child_process {int use_shell; char const** argv; int no_stdin; int no_stderr; int out; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct child_process*) ;
 int FUNC_3 (struct hostinfo*) ;
 int FUNC_4 (struct hostinfo*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 int FUNC_7 (struct strbuf*,char*) ;
 int FUNC_8 (struct strbuf*) ;
 scalar_t__ FUNC_9 (struct strbuf*,int,int ) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*) ;
 char* FUNC_12 (int ,char) ;

__attribute__((used)) static int FUNC_13(struct daemon_service *VAR_5, const char *VAR_6,
      const char *VAR_7, struct hostinfo *VAR_8)
{
 struct child_process VAR_9 = VAR_0;
 struct strbuf VAR_10 = VAR_2;
 const char *VAR_11[8];
 const char **VAR_12 = VAR_11;
 char *VAR_13;
 int VAR_14 = 0;

 *VAR_12++ = VAR_3;
 *VAR_12++ = VAR_5->name;
 *VAR_12++ = VAR_7;
 *VAR_12++ = VAR_8->hostname.buf;
 *VAR_12++ = FUNC_3(VAR_8);
 *VAR_12++ = FUNC_4(VAR_8);
 *VAR_12++ = VAR_8->tcp_port.buf;
 *VAR_12 = ((void*)0);

 VAR_9.use_shell = 1;
 VAR_9.argv = VAR_11;
 VAR_9.no_stdin = 1;
 VAR_9.no_stderr = 1;
 VAR_9.out = -1;
 if (FUNC_6(&VAR_9)) {
  FUNC_5("daemon access hook '%s' failed to start",
    VAR_3);
  goto error_return;
 }
 if (FUNC_9(&VAR_10, VAR_9.out, 0) < 0) {
  FUNC_5("failed to read from pipe to daemon access hook '%s'",
    VAR_3);
  FUNC_11(&VAR_10);
  VAR_14 = 1;
 }
 if (FUNC_0(VAR_9.out) < 0) {
  FUNC_5("failed to close pipe to daemon access hook '%s'",
    VAR_3);
  VAR_14 = 1;
 }
 if (FUNC_2(&VAR_9))
  VAR_14 = 1;

 if (!VAR_14) {
  FUNC_10(&VAR_10);
  return 0;
 }

error_return:
 FUNC_8(&VAR_10);
 if (!VAR_10.len)
  FUNC_7(&VAR_10, "service rejected");
 VAR_13 = FUNC_12(VAR_10.buf, '\n');
 if (VAR_13)
  *VAR_13 = '\0';
 VAR_4 = VAR_1;
 FUNC_1(VAR_6, VAR_10.buf);
 FUNC_10(&VAR_10);
 return -1;
}
