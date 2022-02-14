
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int integer; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (char const*,char) ;

qboolean FUNC_4(const char *VAR_6, int VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_3(VAR_6, '.');
 if(VAR_8 && !FUNC_1(VAR_8 + 1, VAR_0, FUNC_0(VAR_0) - 1))
 {
  VAR_10 = FUNC_2(VAR_8 + FUNC_0(VAR_0));

  if(VAR_10 == VAR_2->integer)
   return VAR_5;






  for(VAR_9 = 0; VAR_3[VAR_9]; VAR_9++)
  {
   if(VAR_3[VAR_9] == VAR_10)
   return VAR_5;
  }
 }

 return VAR_4;
}
