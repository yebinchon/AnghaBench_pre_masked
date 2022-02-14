
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sstr; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;

void
FUNC_4(void)
{
 char *VAR_8;
 int VAR_9;

 VAR_6 *= 2;
 VAR_8 = FUNC_2(VAR_6 + 1);
 if (!VAR_8)
  FUNC_0(1, "string space overflow");
 FUNC_3(VAR_8, VAR_7, VAR_6/2);
 for (VAR_9 = 0; VAR_9 <= VAR_4; VAR_9++)
  if (VAR_5[VAR_9] == VAR_0)
   VAR_3[VAR_9].sstr = (VAR_3[VAR_9].sstr - VAR_7)
       + VAR_8;
 VAR_2 = (VAR_2-VAR_7) + VAR_8;
 FUNC_1(VAR_7);
 VAR_7 = VAR_8;
 VAR_1 = VAR_7 + VAR_6;
}
