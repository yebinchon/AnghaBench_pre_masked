
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int areanum; struct TYPE_8__* next_area; } ;
typedef TYPE_1__ aas_link_t ;
struct TYPE_9__ {int frames; } ;
typedef TYPE_2__ aas_clientmove_t ;
struct TYPE_10__ {int (* Print ) (int ,char*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 float FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,int ,int ,int ,int ,int ,int ,int,float,int ,int ,int) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,char*,char*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (int ,char*) ;

int FUNC_14(vec3_t VAR_6, vec3_t VAR_7, vec3_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 float VAR_12, VAR_13;
 vec3_t VAR_14, VAR_15, VAR_16, VAR_17;
 vec3_t VAR_18, VAR_19, VAR_20;
 aas_clientmove_t VAR_21;
 aas_link_t *VAR_22, *VAR_23;
 char VAR_24[VAR_0];




 VAR_10 = FUNC_9("bot_visualizejumppads", "0");

 FUNC_10(VAR_6, VAR_7, VAR_16);
 FUNC_10(VAR_6, VAR_8, VAR_17);
 for (VAR_9 = FUNC_5(0); VAR_9; VAR_9 = FUNC_5(VAR_9))
 {
  if (!FUNC_7(VAR_9, "classname", VAR_24, VAR_0)) continue;
  if (FUNC_12(VAR_24, "trigger_push")) continue;

  if (!FUNC_3(VAR_9, VAR_14, VAR_18, VAR_19, VAR_20)) continue;

  VAR_22 = FUNC_4(VAR_18, VAR_19, -1, VAR_1);
  for (VAR_23 = VAR_22; VAR_23; VAR_23 = VAR_23->next_area)
  {
   if (FUNC_0(VAR_23->areanum)) break;
  }
  if (!VAR_23)
  {
   VAR_4.Print(VAR_3, "trigger_push not in any jump pad area\n");
   FUNC_6(VAR_22);
   continue;
  }



  FUNC_11(VAR_15, 0, 0, 0);
  FUNC_8(&VAR_21, 0, sizeof(aas_clientmove_t));
  FUNC_2(&VAR_21, -1, VAR_14, VAR_2, VAR_5,
        VAR_20, VAR_15, 0, 30, 0.1f, VAR_16, VAR_17, VAR_10);
  if (VAR_21.frames < 30)
  {
   VAR_11 = 0;
   VAR_13 = 0;
   for (VAR_23 = VAR_22; VAR_23; VAR_23 = VAR_23->next_area)
   {
    if (!FUNC_0(VAR_23->areanum)) continue;
    VAR_12 = FUNC_1(VAR_23->areanum);
    if (VAR_12 >= VAR_13)
    {
     VAR_11 = VAR_23->areanum;
     VAR_13 = VAR_12;
    }
   }
   FUNC_6(VAR_22);
   return VAR_11;
  }
  FUNC_6(VAR_22);
 }
 return 0;
}
