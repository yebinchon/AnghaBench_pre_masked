
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct date_mode {int local; int strftime_fmt; int type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char const*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;

void FUNC_7(const char *VAR_1, struct date_mode *VAR_2)
{
 const char *VAR_3;


 if (FUNC_4(VAR_1, "auto:", &VAR_3)) {
  if (FUNC_1(1) || FUNC_2())
   VAR_1 = VAR_3;
  else
   VAR_1 = "default";
 }


 if (!FUNC_5(VAR_1, "local"))
  VAR_1 = "default-local";

 VAR_2->type = FUNC_3(VAR_1, &VAR_3);
 VAR_2->local = 0;

 if (FUNC_4(VAR_3, "-local", &VAR_3))
  VAR_2->local = 1;

 if (VAR_2->type == VAR_0) {
  if (!FUNC_4(VAR_3, ":", &VAR_3))
   FUNC_0("date format missing colon separator: %s", VAR_1);
  VAR_2->strftime_fmt = FUNC_6(VAR_3);
 } else if (*VAR_3)
  FUNC_0("unknown date format %s", VAR_1);
}
