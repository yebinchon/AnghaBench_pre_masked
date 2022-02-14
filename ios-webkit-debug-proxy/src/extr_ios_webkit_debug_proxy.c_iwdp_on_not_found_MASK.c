
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
struct TYPE_5__ {int (* on_error ) (TYPE_1__*,char*) ;} ;


 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int,char*,char*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

ws_status FUNC_4(ws_t VAR_0, bool VAR_1, const char *VAR_2,
    const char *VAR_3) {
  char *VAR_4;
  if (FUNC_0(&VAR_4,
      "<html><title>Error 404 (Not Found)</title>\n"
      "<p><b>404.</b> <ins>That's an error.</ins>\n"
      "<p>The requested URL <code>%s</code> was not found.\n"
      "%s</html>", VAR_2, (VAR_3 ? VAR_3 : "")) < 0) {
    return VAR_0->on_error(VAR_0, "asprintf failed");
  }
  ws_status VAR_5 = FUNC_2(VAR_0, VAR_1, "404 Not Found", ".html",
      VAR_4);
  FUNC_1(VAR_4);
  return VAR_5;
}
