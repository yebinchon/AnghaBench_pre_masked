
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {char** denominator; char** numerator; } ;


 void* VAR_0 ;
 int FUNC_0 (char*,char*) ;

void
FUNC_1(struct unittype * VAR_1)
{
 char **VAR_2, **VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->denominator;
 VAR_3 = VAR_1->numerator;

 while (*VAR_3 && *VAR_2) {
  VAR_4 = FUNC_0(*VAR_2, *VAR_3);
  if (!VAR_4) {


   *VAR_2++ = VAR_0;
   *VAR_3++ = VAR_0;
  }
  else if (VAR_4 < 0)
   VAR_2++;
  else
   VAR_3++;
 }
}
