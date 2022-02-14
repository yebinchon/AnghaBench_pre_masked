
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int modelnum; scalar_t__ areaportalnum; int origin; scalar_t__ numbrushes; int firstbrush; } ;
typedef TYPE_1__ entity_t ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

qboolean FUNC_6(int VAR_3)
{
 entity_t *VAR_4;
 char *VAR_5;

 VAR_4 = &VAR_1[VAR_3];
 VAR_4->firstbrush = VAR_2;
 VAR_4->numbrushes = 0;
 VAR_4->modelnum = -1;

 VAR_5 = FUNC_2(VAR_4, "model");
 if (VAR_5 && FUNC_5(VAR_5))
 {
  if (*VAR_5 == '*')
  {

   VAR_4->modelnum = FUNC_3(&VAR_5[1]);
  }
 }

 FUNC_0(VAR_4, "origin", VAR_4->origin);



 if (!FUNC_4("worldspawn", FUNC_2(VAR_4, "classname")))
 {
  VAR_4->modelnum = 0;
 }


 if (VAR_4->modelnum >= 0)
 {

  FUNC_1(VAR_4);
 }






 if (!FUNC_4 ("func_areaportal", FUNC_2 (VAR_4, "classname")))
 {
  VAR_0++;
  VAR_4->areaportalnum = VAR_0;
  return 1;
 }
 return 1;
}
