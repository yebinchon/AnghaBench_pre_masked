
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int y2; int x2; int x1; TYPE_2__* header; } ;
struct TYPE_10__ {TYPE_4__* scr; TYPE_1__* settings; } ;
struct TYPE_9__ {int height; } ;
struct TYPE_8__ {int changed; } ;
typedef int Panel ;
typedef TYPE_2__ Header ;
typedef scalar_t__ HandlerResult ;
typedef TYPE_3__ DisplayOptionsPanel ;
typedef int CheckItem ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__ const*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;



 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,int ) ;

__attribute__((used)) static HandlerResult FUNC_7(Panel* VAR_2, int VAR_3) {
   DisplayOptionsPanel* VAR_4 = (DisplayOptionsPanel*) VAR_2;

   HandlerResult VAR_5 = VAR_1;
   CheckItem* VAR_6 = (CheckItem*) FUNC_5(VAR_2);

   switch(VAR_3) {
   case 0x0a:
   case 0x0d:
   case 130:
   case 129:
   case 128:
   case ' ':
      FUNC_1(VAR_6, ! (FUNC_0(VAR_6)) );
      VAR_5 = VAR_0;
   }

   if (VAR_5 == VAR_0) {
      VAR_4->settings->changed = 1;
      const Header* VAR_7 = VAR_4->scr->header;
      FUNC_2((Header*) VAR_7);
      FUNC_4((Header*) VAR_7);
      FUNC_3(VAR_7);
      FUNC_6(VAR_4->scr, VAR_4->scr->x1, VAR_7->height, VAR_4->scr->x2, VAR_4->scr->y2);
   }
   return VAR_5;
}
