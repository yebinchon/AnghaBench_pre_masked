
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; int defval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(const struct option *VAR_6, const char *VAR_7,
        int VAR_8)
{
 int VAR_9, *VAR_10;

 if (VAR_8) {
  *((int *) VAR_6->value) = 0;
  return 0;
 }





 VAR_9 = VAR_6->defval;
 if (!VAR_9) {
  if (!FUNC_3(VAR_7, "bool"))
   VAR_9 = VAR_0;
  else if (!FUNC_3(VAR_7, "int"))
   VAR_9 = VAR_4;
  else if (!FUNC_3(VAR_7, "bool-or-int"))
   VAR_9 = VAR_1;
  else if (!FUNC_3(VAR_7, "path"))
   VAR_9 = VAR_5;
  else if (!FUNC_3(VAR_7, "expiry-date"))
   VAR_9 = VAR_3;
  else if (!FUNC_3(VAR_7, "color"))
   VAR_9 = VAR_2;
  else
   FUNC_1(FUNC_0("unrecognized --type argument, %s"), VAR_7);
 }

 VAR_10 = VAR_6->value;
 if (*VAR_10 && *VAR_10 != VAR_9) {







  FUNC_2(FUNC_0("only one type at a time"));
  FUNC_4();
 }
 *VAR_10 = VAR_9;

 return 0;
}
