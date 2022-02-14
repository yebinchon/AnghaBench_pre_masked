
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {double offset; char** numerator; char** denominator; int factor; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct unittype * VAR_2)
{
 char **VAR_3;
 int VAR_4;
 int VAR_5 = 1;

 FUNC_0(VAR_0, VAR_2->factor);
 if (VAR_2->offset)
  FUNC_0("&%.8g", VAR_2->offset);
 for (VAR_3 = VAR_2->numerator; *VAR_3; VAR_3++) {
  if (VAR_3 > VAR_2->numerator && **VAR_3 &&
      !FUNC_1(*VAR_3, *(VAR_3 - 1)))
   VAR_5++;
  else {
   if (VAR_5 > 1)
    FUNC_0("%s%d", VAR_1, VAR_5);
   if (**VAR_3)
    FUNC_0(" %s", *VAR_3);
   VAR_5 = 1;
  }
 }
 if (VAR_5 > 1)
  FUNC_0("%s%d", VAR_1, VAR_5);
 VAR_5 = 1;
 VAR_4 = 0;
 for (VAR_3 = VAR_2->denominator; *VAR_3; VAR_3++) {
  if (VAR_3 > VAR_2->denominator && **VAR_3 &&
      !FUNC_1(*VAR_3, *(VAR_3 - 1)))
   VAR_5++;
  else {
   if (VAR_5 > 1)
    FUNC_0("%s%d", VAR_1, VAR_5);
   if (**VAR_3) {
    if (!VAR_4)
     FUNC_0(" /");
    VAR_4 = 1;
    FUNC_0(" %s", *VAR_3);
   }
   VAR_5 = 1;
  }
 }
 if (VAR_5 > 1)
  FUNC_0("%s%d", VAR_1, VAR_5);
 FUNC_0("\n");
}
