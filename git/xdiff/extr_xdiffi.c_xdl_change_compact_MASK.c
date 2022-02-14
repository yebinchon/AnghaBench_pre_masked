
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdfile_t ;
struct xdlgroup {long end; long start; } ;
struct split_score {int penalty; int effective_indent; int member_1; int member_0; } ;
struct split_measurement {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int *,struct xdlgroup*) ;
 scalar_t__ FUNC_1 (int *,struct xdlgroup*) ;
 scalar_t__ FUNC_2 (int *,struct xdlgroup*) ;
 scalar_t__ FUNC_3 (int *,struct xdlgroup*,long) ;
 scalar_t__ FUNC_4 (int *,struct xdlgroup*,long) ;
 int FUNC_5 (int *,long,struct split_measurement*) ;
 int FUNC_6 (struct split_measurement*,struct split_score*) ;
 scalar_t__ FUNC_7 (struct split_score*,struct split_score*) ;
 int FUNC_8 (char*) ;

int FUNC_9(xdfile_t *VAR_2, xdfile_t *VAR_3, long VAR_4) {
 struct xdlgroup VAR_5, VAR_6;
 long VAR_7, VAR_8;
 long VAR_9;

 FUNC_0(VAR_2, &VAR_5);
 FUNC_0(VAR_3, &VAR_6);

 while (1) {



  if (VAR_5.end == VAR_5.start)
   goto next;






  do {
   VAR_9 = VAR_5.end - VAR_5.start;







   VAR_8 = -1;


   while (!FUNC_4(VAR_2, &VAR_5, VAR_4))
    if (FUNC_2(VAR_3, &VAR_6))
     FUNC_8("group sync broken sliding up");





   VAR_7 = VAR_5.end;

   if (VAR_6.end > VAR_6.start)
    VAR_8 = VAR_5.end;


   while (1) {
    if (FUNC_3(VAR_2, &VAR_5, VAR_4))
     break;
    if (FUNC_1(VAR_3, &VAR_6))
     FUNC_8("group sync broken sliding down");

    if (VAR_6.end > VAR_6.start)
     VAR_8 = VAR_5.end;
   }
  } while (VAR_9 != VAR_5.end - VAR_5.start);
  if (VAR_5.end == VAR_7) {

  } else if (VAR_8 != -1) {





   while (VAR_6.end == VAR_6.start) {
    if (FUNC_4(VAR_2, &VAR_5, VAR_4))
     FUNC_8("match disappeared");
    if (FUNC_2(VAR_3, &VAR_6))
     FUNC_8("group sync broken sliding to match");
   }
  } else if (VAR_4 & VAR_1) {
   long VAR_10, VAR_11 = -1;
   struct split_score VAR_12;

   VAR_10 = VAR_7;
   if (VAR_5.end - VAR_9 - 1 > VAR_10)
    VAR_10 = VAR_5.end - VAR_9 - 1;
   if (VAR_5.end - VAR_0 > VAR_10)
    VAR_10 = VAR_5.end - VAR_0;
   for (; VAR_10 <= VAR_5.end; VAR_10++) {
    struct split_measurement VAR_13;
    struct split_score VAR_14 = {0, 0};

    FUNC_5(VAR_2, VAR_10, &VAR_13);
    FUNC_6(&VAR_13, &VAR_14);
    FUNC_5(VAR_2, VAR_10 - VAR_9, &VAR_13);
    FUNC_6(&VAR_13, &VAR_14);
    if (VAR_11 == -1 ||
        FUNC_7(&VAR_14, &VAR_12) <= 0) {
     VAR_12.effective_indent = VAR_14.effective_indent;
     VAR_12.penalty = VAR_14.penalty;
     VAR_11 = VAR_10;
    }
   }

   while (VAR_5.end > VAR_11) {
    if (FUNC_4(VAR_2, &VAR_5, VAR_4))
     FUNC_8("best shift unreached");
    if (FUNC_2(VAR_3, &VAR_6))
     FUNC_8("group sync broken sliding to blank line");
   }
  }

 next:

  if (FUNC_1(VAR_2, &VAR_5))
   break;
  if (FUNC_1(VAR_3, &VAR_6))
   FUNC_8("group sync broken moving to next group");
 }

 if (!FUNC_1(VAR_3, &VAR_6))
  FUNC_8("group sync broken at end of file");

 return 0;
}
