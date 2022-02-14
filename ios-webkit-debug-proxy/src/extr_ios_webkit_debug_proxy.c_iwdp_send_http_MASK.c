
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_status ;
struct TYPE_5__ {int (* send_data ) (TYPE_1__*,char*,int ) ;int (* on_error ) (TYPE_1__*,char*) ;} ;


 scalar_t__ FUNC_0 (char**,char*,char const*,int ,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int,char**) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;

ws_status FUNC_6(ws_t VAR_0, bool VAR_1, const char *VAR_2,
    const char *VAR_3, const char *VAR_4) {
  char *VAR_5;
  FUNC_2(VAR_3, 0, &VAR_5);
  char *VAR_6;
  if (FUNC_0(&VAR_6,
      "HTTP/1.1 %s\r\n"
      "Content-length: %d\r\n"
      "Connection: close"
      "%s%s\r\n\r\n%s",
      VAR_2, (VAR_4 ? FUNC_3(VAR_4) : 0),
      (VAR_5 ? "\r\nContent-Type: " : ""), (VAR_5 ? VAR_5 : ""),
      (VAR_4 && !VAR_1 ? VAR_4 : "")) < 0) {
    return VAR_0->on_error(VAR_0, "asprintf failed");
  }
  FUNC_1(VAR_5);
  ws_status VAR_7 = VAR_0->send_data(VAR_0, VAR_6, FUNC_3(VAR_6));
  FUNC_1(VAR_6);
  return VAR_7;
}
