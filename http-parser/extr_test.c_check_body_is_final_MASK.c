
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_parser ;
struct TYPE_2__ {scalar_t__ body_is_final; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int const*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

void
FUNC_4 (const http_parser *VAR_3)
{
  if (VAR_0[VAR_1].body_is_final) {
    FUNC_2(VAR_2, "\n\n *** Error http_body_is_final() should return 1 "
                    "on last on_body callback call "
                    "but it doesn't! ***\n\n");
    FUNC_1(0);
    FUNC_0();
  }
  VAR_0[VAR_1].body_is_final = FUNC_3(VAR_3);
}
