
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ def_kind; } ;
typedef TYPE_1__ definition ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char const* FUNC_1 (char const*,char const*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4)
{
 definition *VAR_5;
 int VAR_6 = 0;
 const char *VAR_7;

 FUNC_3(VAR_1, VAR_2);
 VAR_7 = VAR_3 ? FUNC_1(VAR_1, VAR_4) : VAR_4;
 FUNC_4(VAR_1, VAR_7);
 FUNC_0();
 while ( (VAR_5 = FUNC_2()) ) {
  VAR_6 |= (VAR_5->def_kind == VAR_0);
 }
 if (VAR_3 && !VAR_6) {
  (void) FUNC_5(VAR_7);
  return;
 }
 FUNC_6();
}
