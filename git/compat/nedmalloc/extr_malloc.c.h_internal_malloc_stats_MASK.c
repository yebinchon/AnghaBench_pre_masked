
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* msegmentptr ;
typedef TYPE_3__* mchunkptr ;
struct TYPE_18__ {scalar_t__ head; } ;
struct TYPE_17__ {struct TYPE_17__* next; int base; } ;
struct TYPE_16__ {size_t max_footprint; size_t footprint; size_t topsize; TYPE_3__* top; TYPE_2__ seg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t VAR_1 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,unsigned long) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_3__* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(mstate VAR_3) {
  FUNC_6();
  if (!FUNC_1(VAR_3)) {
    size_t VAR_4 = 0;
    size_t VAR_5 = 0;
    size_t VAR_6 = 0;
    FUNC_3(VAR_3);
    if (FUNC_8(VAR_3)) {
      msegmentptr VAR_7 = &VAR_3->seg;
      VAR_4 = VAR_3->max_footprint;
      VAR_5 = VAR_3->footprint;
      VAR_6 = VAR_5 - (VAR_3->topsize + VAR_1);

      while (VAR_7 != 0) {
 mchunkptr VAR_8 = FUNC_2(VAR_7->base);
 while (FUNC_10(VAR_7, VAR_8) &&
        VAR_8 != VAR_3->top && VAR_8->head != VAR_0) {
   if (!FUNC_5(VAR_8))
     VAR_6 -= FUNC_4(VAR_8);
   VAR_8 = FUNC_9(VAR_8);
 }
 VAR_7 = VAR_7->next;
      }
    }

    FUNC_7(VAR_2, "max system bytes = %10lu\n", (unsigned long)(VAR_4));
    FUNC_7(VAR_2, "system bytes     = %10lu\n", (unsigned long)(VAR_5));
    FUNC_7(VAR_2, "in use bytes     = %10lu\n", (unsigned long)(VAR_6));

    FUNC_0(VAR_3);
  }
}
