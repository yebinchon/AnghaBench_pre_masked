
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int y2; int x2; int x1; int panels; TYPE_3__* header; } ;
struct TYPE_13__ {TYPE_5__* scr; TYPE_1__* settings; } ;
struct TYPE_12__ {int height; } ;
struct TYPE_11__ {int header; } ;
struct TYPE_10__ {int colorScheme; int changed; } ;
typedef TYPE_2__ Panel ;
typedef TYPE_3__ Header ;
typedef scalar_t__ HandlerResult ;
typedef TYPE_4__ ColorsPanel ;
typedef int CheckItem ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int ** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__ const*) ;
 scalar_t__ VAR_3 ;



 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_5__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static HandlerResult FUNC_9(Panel* VAR_6, int VAR_7) {
   ColorsPanel* VAR_8 = (ColorsPanel*) VAR_6;

   HandlerResult VAR_9 = VAR_3;
   int VAR_10 = FUNC_4(VAR_6);

   switch(VAR_7) {
   case 0x0a:
   case 0x0d:
   case 130:
   case 129:
   case 128:
   case ' ':
      for (int VAR_11 = 0; VAR_1[VAR_11] != ((void*)0); VAR_11++)
         FUNC_1((CheckItem*)FUNC_3(VAR_6, VAR_11), 0);
      FUNC_1((CheckItem*)FUNC_3(VAR_6, VAR_10), 1);
      VAR_8->settings->colorScheme = VAR_10;
      VAR_9 = VAR_2;
   }

   if (VAR_9 == VAR_2) {
      VAR_8->settings->changed = 1;
      const Header* VAR_12 = VAR_8->scr->header;
      FUNC_0(VAR_10);
      FUNC_8();
      Panel* VAR_13 = (Panel*) FUNC_7(VAR_8->scr->panels, 0);
      FUNC_2(VAR_12);
      FUNC_5(&(VAR_6->header), VAR_0[VAR_4]);
      FUNC_5(&(VAR_13->header), VAR_0[VAR_5]);
      FUNC_6(VAR_8->scr, VAR_8->scr->x1, VAR_12->height, VAR_8->scr->x2, VAR_8->scr->y2);
   }
   return VAR_9;
}
