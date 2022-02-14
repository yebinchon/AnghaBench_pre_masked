
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_parser ;
struct TYPE_2__ {scalar_t__ should_keep_alive; int message_complete_on_eof; int message_complete_cb_called; int body_is_final; scalar_t__ body_size; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_5 (http_parser *VAR_6)
{
  FUNC_1(VAR_6 == &VAR_4);
  if (VAR_2[VAR_3].should_keep_alive !=
      FUNC_4(&VAR_4))
  {
    FUNC_2(VAR_5, "\n\n *** Error http_should_keep_alive() should have same "
                    "value in both on_message_complete and on_headers_complete "
                    "but it doesn't! ***\n\n");
    FUNC_1(0);
    FUNC_0();
  }

  if (VAR_2[VAR_3].body_size &&
      FUNC_3(VAR_6) &&
      !VAR_2[VAR_3].body_is_final)
  {
    FUNC_2(VAR_5, "\n\n *** Error http_body_is_final() should return 1 "
                    "on last on_body callback call "
                    "but it doesn't! ***\n\n");
    FUNC_1(0);
    FUNC_0();
  }

  VAR_2[VAR_3].message_complete_cb_called = VAR_0;

  VAR_2[VAR_3].message_complete_on_eof = VAR_1;

  VAR_3++;
  return 0;
}
