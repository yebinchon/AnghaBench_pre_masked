
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ http_parser ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (void)
{
  char VAR_1[] = "application-specific data";
  http_parser VAR_2;
  VAR_2.data = VAR_1;
  FUNC_1(&VAR_2, VAR_0);
  if (VAR_2.data != VAR_1) {
    FUNC_2("\n*** parser.data not preserved accross http_parser_init ***\n\n");
    FUNC_0();
  }
}
