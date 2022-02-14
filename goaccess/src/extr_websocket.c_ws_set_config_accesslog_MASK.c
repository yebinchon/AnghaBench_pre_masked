
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* accesslog; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;

void
FUNC_3 (const char *VAR_2)
{
  VAR_1.accesslog = VAR_2;

  if (FUNC_1 (VAR_1.accesslog) == 1)
    FUNC_0 ("Unable to open access log: %s.", FUNC_2 (VAR_0));
}
