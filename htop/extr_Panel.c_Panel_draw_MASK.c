
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scrollH; int y; int x; int h; int w; int scrollV; int needsRedraw; int selected; int selectionColor; int selectedLen; int oldSelected; int items; int header; } ;
typedef TYPE_1__ Panel ;
typedef int Object ;


 int* VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int VAR_5 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int,int,char,int) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_14(Panel* VAR_8, bool VAR_9) {
   FUNC_10 (VAR_8 != ((void*)0));

   int VAR_10 = FUNC_9(VAR_8->items);
   int VAR_11 = VAR_8->scrollH;
   int VAR_12 = VAR_8->y;
   int VAR_13 = VAR_8->x;
   int VAR_14 = VAR_8->h;

   int VAR_15 = FUNC_7(VAR_8->header);
   if (VAR_15 > 0) {
      int VAR_16 = VAR_9
               ? VAR_0[VAR_1]
               : VAR_0[VAR_2];
      FUNC_11(VAR_16);
      FUNC_13(VAR_12, VAR_13, ' ', VAR_8->w);
      if (VAR_11 < VAR_15) {
         FUNC_5(VAR_8->header, VAR_12, VAR_13, VAR_11,
            FUNC_1(VAR_15 - VAR_11, VAR_8->w));
      }
      FUNC_11(VAR_0[VAR_4]);
      VAR_12++;
   }


   if (VAR_8->scrollV < 0) {
      VAR_8->scrollV = 0;
      VAR_8->needsRedraw = 1;
   } else if (VAR_8->scrollV >= VAR_10) {
      VAR_8->scrollV = FUNC_0(VAR_10 - 1, 0);
      VAR_8->needsRedraw = 1;
   }

   if (VAR_8->selected < VAR_8->scrollV) {
      VAR_8->scrollV = VAR_8->selected;
      VAR_8->needsRedraw = 1;
   } else if (VAR_8->selected >= VAR_8->scrollV + VAR_14) {
      VAR_8->scrollV = VAR_8->selected - VAR_14 + 1;
      VAR_8->needsRedraw = 1;
   }

   int VAR_17 = VAR_8->scrollV;
   int VAR_18 = FUNC_1(VAR_17 + VAR_14, VAR_10);

   int VAR_19 = VAR_9
                 ? VAR_8->selectionColor
                 : VAR_0[VAR_3];

   if (VAR_8->needsRedraw) {
      int VAR_20 = 0;
      for(int VAR_21 = VAR_17; VAR_20 < VAR_14 && VAR_21 < VAR_18; VAR_21++) {
         Object* VAR_22 = FUNC_8(VAR_8->items, VAR_21);
         FUNC_10(VAR_22); if(!VAR_22) continue;
         FUNC_3(VAR_5);
         FUNC_2(VAR_22, &VAR_5);
         int VAR_23 = FUNC_7(VAR_5);
         int VAR_24 = FUNC_1(VAR_23 - VAR_11, VAR_8->w);
         bool VAR_25 = (VAR_21 == VAR_8->selected);
         if (VAR_25) {
            FUNC_11(VAR_19);
            FUNC_6(&VAR_5, VAR_19);
            VAR_8->selectedLen = VAR_23;
         }
         FUNC_13(VAR_12 + VAR_20, VAR_13, ' ', VAR_8->w);
         if (VAR_24 > 0)
            FUNC_5(VAR_5, VAR_12 + VAR_20, VAR_13, VAR_11, VAR_24);
         if (VAR_25)
            FUNC_11(VAR_0[VAR_4]);
         FUNC_4(VAR_5);
         VAR_20++;
      }
      while (VAR_20 < VAR_14) {
         FUNC_13(VAR_12 + VAR_20, VAR_13, ' ', VAR_8->w);
         VAR_20++;
      }
      VAR_8->needsRedraw = 0;

   } else {
      Object* VAR_26 = FUNC_8(VAR_8->items, VAR_8->oldSelected);
      FUNC_10(VAR_26);
      FUNC_3(VAR_7);
      FUNC_2(VAR_26, &VAR_7);
      int VAR_27 = FUNC_7(VAR_7);
      Object* VAR_28 = FUNC_8(VAR_8->items, VAR_8->selected);
      FUNC_3(VAR_6);
      FUNC_2(VAR_28, &VAR_6);
      int VAR_29 = FUNC_7(VAR_6);
      VAR_8->selectedLen = VAR_29;
      FUNC_13(VAR_12+ VAR_8->oldSelected - VAR_17, VAR_13+0, ' ', VAR_8->w);
      if (VAR_11 < VAR_27)
         FUNC_5(VAR_7, VAR_12+VAR_8->oldSelected - VAR_17, VAR_13,
            VAR_11, FUNC_1(VAR_27 - VAR_11, VAR_8->w));
      FUNC_11(VAR_19);
      FUNC_13(VAR_12+VAR_8->selected - VAR_17, VAR_13+0, ' ', VAR_8->w);
      FUNC_6(&VAR_6, VAR_19);
      if (VAR_11 < VAR_29)
         FUNC_5(VAR_6, VAR_12+VAR_8->selected - VAR_17, VAR_13,
            VAR_11, FUNC_1(VAR_29 - VAR_11, VAR_8->w));
      FUNC_11(VAR_0[VAR_4]);
      FUNC_4(VAR_6);
      FUNC_4(VAR_7);
   }
   VAR_8->oldSelected = VAR_8->selected;
   FUNC_12(0, 0);
}
