
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int uiName; } ;
struct TYPE_9__ {int moving; } ;
struct TYPE_8__ {int mode; int param; } ;
typedef TYPE_1__ Meter ;
typedef TYPE_2__ ListItem ;


 TYPE_2__* FUNC_0 (char*,int ) ;
 TYPE_6__** VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,char*,int ,...) ;

ListItem* FUNC_3(Meter* VAR_1, bool VAR_2) {
   char VAR_3[21];
   if (VAR_1->mode)
      FUNC_2(VAR_3, 20, " [%s]", VAR_0[VAR_1->mode]->uiName);
   else
      VAR_3[0] = '\0';
   char VAR_4[11];
   if (VAR_1->param > 0)
      FUNC_2(VAR_4, 10, " %d", VAR_1->param);
   else
      VAR_4[0] = '\0';
   char VAR_5[51];
   FUNC_2(VAR_5, 50, "%s%s%s", FUNC_1(VAR_1), VAR_4, VAR_3);
   ListItem* VAR_6 = FUNC_0(VAR_5, 0);
   VAR_6->moving = VAR_2;
   return VAR_6;
}
