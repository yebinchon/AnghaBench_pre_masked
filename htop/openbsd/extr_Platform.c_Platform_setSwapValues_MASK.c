
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct swapent {int se_flags; int se_inuse; int se_nblks; } ;
struct TYPE_5__ {unsigned long long total; unsigned long long* values; scalar_t__ pl; } ;
struct TYPE_4__ {unsigned long long totalSwap; unsigned long long usedSwap; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Meter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct swapent*) ;
 int FUNC_1 (int ,struct swapent*,int) ;
 struct swapent* FUNC_2 (int,int) ;

void FUNC_3(Meter* VAR_4) {
   ProcessList* VAR_5 = (ProcessList*) VAR_4->pl;
   struct swapent *VAR_6;
   unsigned long long int VAR_7, VAR_8;
   int VAR_9, VAR_10, VAR_11;
   VAR_9 = FUNC_1(VAR_1, 0, 0);
   if (VAR_9 == 0) {
      return;
   }

   VAR_6 = FUNC_2(VAR_9, sizeof(*VAR_6));

   VAR_10 = FUNC_1(VAR_2, VAR_6, VAR_9);
   if (VAR_10 == -1) {
      FUNC_0(VAR_6);
      return;
   }




   VAR_7 = VAR_8 = 0;
   for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
      if (VAR_6[VAR_11].se_flags & VAR_3) {
         VAR_8 += (VAR_6[VAR_11].se_inuse / (1024 / VAR_0));
         VAR_7 += (VAR_6[VAR_11].se_nblks / (1024 / VAR_0));
      }
   }

   VAR_4->total = VAR_5->totalSwap = VAR_7;
   VAR_4->values[0] = VAR_5->usedSwap = VAR_8;

   FUNC_0(VAR_6);
}
