
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source {TYPE_1__* vtable; } ;
struct TYPE_2__ {int (* readchar ) (struct source*) ;} ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct source*) ;

char *
FUNC_3(struct source *VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 bool VAR_8;

 VAR_8 = 0;
 VAR_3 = 1;
 VAR_5 = 0;
 VAR_7 = 15;
 VAR_2 = FUNC_0(VAR_7 + 1);

 while ((VAR_4 = (*VAR_1->vtable->readchar)(VAR_1)) != VAR_0) {
  if (!VAR_8) {
   if (VAR_4 == '[')
    VAR_3++;
   else if (VAR_4 == ']')
    VAR_3--;
   if (VAR_3 == 0)
    break;
  }
  if (VAR_4 == '\\' && !VAR_8)
   VAR_8 = 1;
  else {
   VAR_8 = 0;
   if (VAR_5 == VAR_7) {
    VAR_6 = VAR_7 * 2;
    VAR_2 = FUNC_1(VAR_2, 1, VAR_6 + 1);
    VAR_7 = VAR_6;
   }
   VAR_2[VAR_5++] = VAR_4;
  }
 }
 VAR_2[VAR_5] = '\0';
 return (VAR_2);
}
