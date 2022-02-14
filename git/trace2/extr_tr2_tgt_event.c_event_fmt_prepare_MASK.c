
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* buf; } ;
struct tr2tls_thread_ctx {TYPE_1__ thread_name; } ;
struct tr2_tbuf {char const* buf; } ;
struct repository {int trace2_repo_id; } ;
struct json_writer {int dummy; } ;


 int FUNC_0 (struct json_writer*,char*,int) ;
 int FUNC_1 (struct json_writer*,char*,char const*) ;
 int FUNC_2 (char const*,char*) ;
 char const* FUNC_3 () ;
 int FUNC_4 (struct tr2_tbuf*) ;
 int VAR_0 ;
 struct tr2tls_thread_ctx* FUNC_5 () ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, const char *VAR_2,
         int VAR_3, const struct repository *VAR_4,
         struct json_writer *VAR_5)
{
 struct tr2tls_thread_ctx *VAR_6 = FUNC_5();
 struct tr2_tbuf VAR_7;

 FUNC_1(VAR_5, "event", VAR_1);
 FUNC_1(VAR_5, "sid", FUNC_3());
 FUNC_1(VAR_5, "thread", VAR_6->thread_name.buf);




 if (!VAR_0 || !FUNC_2(VAR_1, "version") ||
     !FUNC_2(VAR_1, "atexit")) {
  FUNC_4(&VAR_7);
  FUNC_1(VAR_5, "time", VAR_7.buf);
 }

 if (!VAR_0 && VAR_2 && *VAR_2) {
  FUNC_1(VAR_5, "file", VAR_2);
  FUNC_0(VAR_5, "line", VAR_3);
 }

 if (VAR_4)
  FUNC_0(VAR_5, "repo", VAR_4->trace2_repo_id);
}
