
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_parser ;
struct TYPE_2__ {scalar_t__ message_begin_cb_called; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

int
FUNC_1 (http_parser *VAR_4)
{
  FUNC_0(VAR_4 == &VAR_3);
  FUNC_0(!VAR_1[VAR_2].message_begin_cb_called);
  VAR_1[VAR_2].message_begin_cb_called = VAR_0;
  return 0;
}
