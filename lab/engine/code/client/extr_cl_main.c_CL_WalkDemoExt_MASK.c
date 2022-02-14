
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ,char*,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*,int*,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(char *VAR_6, char *VAR_7, int *VAR_8)
{
 int VAR_9 = 0;
 *VAR_8 = 0;
 {
  FUNC_1(VAR_7, VAR_1, "demos/%s.%s%d", VAR_6, VAR_0, VAR_3->integer);
  FUNC_2(VAR_7, VAR_8, VAR_5);

  if (*VAR_8)
  {
   FUNC_0("Demo file: %s\n", VAR_7);
   return VAR_3->integer;
  }
 }

 FUNC_0("Not found: %s\n", VAR_7);

 while(VAR_4[VAR_9])
 {




  if(VAR_4[VAR_9] == VAR_3->integer)
   continue;

  FUNC_1 (VAR_7, VAR_1, "demos/%s.%s%d", VAR_6, VAR_0, VAR_4[VAR_9]);
  FUNC_2( VAR_7, VAR_8, VAR_5 );
  if (*VAR_8)
  {
   FUNC_0("Demo file: %s\n", VAR_7);

   return VAR_4[VAR_9];
  }
  else
   FUNC_0("Not found: %s\n", VAR_7);
  VAR_9++;
 }

 return -1;
}
