
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int http_minor; int http_major; int status_code; int method; } ;
typedef TYPE_1__ http_parser ;
struct TYPE_7__ {int should_keep_alive; int headers_complete_cb_called; int http_minor; int http_major; int status_code; int method; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;

int
FUNC_2 (http_parser *VAR_4)
{
  FUNC_0(VAR_4 == &VAR_3);
  VAR_1[VAR_2].method = VAR_3.method;
  VAR_1[VAR_2].status_code = VAR_3.status_code;
  VAR_1[VAR_2].http_major = VAR_3.http_major;
  VAR_1[VAR_2].http_minor = VAR_3.http_minor;
  VAR_1[VAR_2].headers_complete_cb_called = VAR_0;
  VAR_1[VAR_2].should_keep_alive = FUNC_1(&VAR_3);
  return 0;
}
