
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_parser ;
struct TYPE_2__ {int response_status; int status_cb_called; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char const*,size_t) ;

int
FUNC_2 (http_parser *VAR_4, const char *VAR_5, size_t VAR_6)
{
  FUNC_0(VAR_4 == &VAR_3);

  VAR_1[VAR_2].status_cb_called = VAR_0;

  FUNC_1(VAR_1[VAR_2].response_status,
           sizeof(VAR_1[VAR_2].response_status),
           VAR_5,
           VAR_6);
  return 0;
}
