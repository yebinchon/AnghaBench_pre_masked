
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct mallinfo {size_t arena; size_t ordblks; size_t fordblks; size_t keepcost; scalar_t__ uordblks; int usmblks; scalar_t__ hblkhd; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__* mstate ;
typedef TYPE_2__* msegmentptr ;
typedef TYPE_3__* mchunkptr ;
struct TYPE_18__ {scalar_t__ head; } ;
struct TYPE_17__ {struct TYPE_17__* next; int base; } ;
struct TYPE_16__ {size_t topsize; scalar_t__ footprint; int max_footprint; TYPE_3__* top; TYPE_2__ seg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 size_t FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static struct mallinfo FUNC_10(mstate VAR_3) {
  struct mallinfo VAR_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  FUNC_6();
  if (!FUNC_1(VAR_3)) {
    FUNC_3(VAR_3);
    if (FUNC_7(VAR_3)) {
      size_t VAR_5 = VAR_1;
      size_t VAR_6 = VAR_3->topsize + VAR_2;
      size_t VAR_7 = VAR_6;
      msegmentptr VAR_8 = &VAR_3->seg;
      while (VAR_8 != 0) {
 mchunkptr VAR_9 = FUNC_2(VAR_8->base);
 while (FUNC_9(VAR_8, VAR_9) &&
        VAR_9 != VAR_3->top && VAR_9->head != VAR_0) {
   size_t VAR_10 = FUNC_4(VAR_9);
   VAR_7 += VAR_10;
   if (!FUNC_5(VAR_9)) {
     VAR_6 += VAR_10;
     ++VAR_5;
   }
   VAR_9 = FUNC_8(VAR_9);
 }
 VAR_8 = VAR_8->next;
      }

      VAR_4.arena = VAR_7;
      VAR_4.ordblks = VAR_5;
      VAR_4.hblkhd = VAR_3->footprint - VAR_7;
      VAR_4.usmblks = VAR_3->max_footprint;
      VAR_4.uordblks = VAR_3->footprint - VAR_6;
      VAR_4.fordblks = VAR_6;
      VAR_4.keepcost = VAR_3->topsize;
    }

    FUNC_0(VAR_3);
  }
  return VAR_4;
}
