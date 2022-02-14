
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {char** denominator; char** numerator; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct unittype*,char*,int,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct unittype * VAR_3, int VAR_4)
{

 char *VAR_5;
 char **VAR_6;
 int VAR_7 = 2;

 if (VAR_4)
  VAR_6 = VAR_3->denominator;
 else
  VAR_6 = VAR_3->numerator;

 for (; *VAR_6; VAR_6++) {

  for (;;) {
   if (!FUNC_5(*VAR_6))
    break;
   VAR_5 = FUNC_2(*VAR_6);
   if (!VAR_5) {
    FUNC_3("unknown unit '%s'\n", *VAR_6);
    return VAR_0;
   }
   if (FUNC_4(VAR_5, VAR_2))
    break;
   VAR_7 = 1;
   if (*VAR_6 != VAR_1) {
    FUNC_1(*VAR_6);
    *VAR_6 = VAR_1;
   }
   if (FUNC_0(VAR_3, VAR_5, VAR_4, 0))
    return VAR_0;
  }
 }
 return VAR_7;
}
