
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Print ) (int ,char*,char*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (int ,char*,char*) ;

void FUNC_6(void)
{
 int VAR_9, VAR_10;
 char VAR_11[VAR_0], VAR_12[VAR_0];

 FUNC_2(VAR_8, 0, VAR_1 * sizeof(int));

 for (VAR_9 = FUNC_0(0); VAR_9; VAR_9 = FUNC_0(VAR_9))
 {
  if (!FUNC_1(VAR_9, "classname", VAR_11, VAR_0)) continue;
  if (!FUNC_1(VAR_9, "model", VAR_12, VAR_0)) continue;
  if (VAR_12[0]) VAR_10 = FUNC_4(VAR_12+1);
  else VAR_10 = 0;

  if (VAR_10 < 0 || VAR_10 >= VAR_1)
  {
   VAR_7.Print(VAR_6, "entity %s model number out of range\n", VAR_11);
   continue;
  }

  if (!FUNC_3(VAR_11, "func_bobbing"))
   VAR_8[VAR_10] = VAR_2;
  else if (!FUNC_3(VAR_11, "func_plat"))
   VAR_8[VAR_10] = VAR_4;
  else if (!FUNC_3(VAR_11, "func_door"))
   VAR_8[VAR_10] = VAR_3;
  else if (!FUNC_3(VAR_11, "func_static"))
   VAR_8[VAR_10] = VAR_5;
 }
}
