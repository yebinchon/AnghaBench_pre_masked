
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdfile_t ;
struct xdlgroup {long end; long start; } ;
struct split_score {int penalty; int effective_indent; int member_1; int member_0; } ;
struct split_measurement {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (int *,struct xdlgroup*) ;
 scalar_t__ FUNC_1 (int *,struct xdlgroup*) ;
 scalar_t__ FUNC_2 (int *,struct xdlgroup*) ;
 scalar_t__ FUNC_3 (int *,struct xdlgroup*,long) ;
 scalar_t__ FUNC_4 (int *,struct xdlgroup*,long) ;
 int FUNC_5 (int *,long,struct split_measurement*) ;
 int FUNC_6 (struct split_measurement*,struct split_score*) ;
 scalar_t__ FUNC_7 (struct split_score*,struct split_score*) ;
 int FUNC_8 (char*) ;

int FUNC_9(xdfile_t *VAR_1, xdfile_t *VAR_2, long VAR_3) {
 struct xdlgroup VAR_4, VAR_5;
 long VAR_6, VAR_7;
 long VAR_8;

 FUNC_0(VAR_1, &VAR_4);
 FUNC_0(VAR_2, &VAR_5);

 while (1) {

  if (VAR_4.end == VAR_4.start)
   goto next;





  do {
   VAR_8 = VAR_4.end - VAR_4.start;







   VAR_7 = -1;


   while (!FUNC_4(VAR_1, &VAR_4, VAR_3))
    if (FUNC_2(VAR_2, &VAR_5))
     FUNC_8("group sync broken sliding up");





   VAR_6 = VAR_4.end;

   if (VAR_5.end > VAR_5.start)
    VAR_7 = VAR_4.end;


   while (1) {
    if (FUNC_3(VAR_1, &VAR_4, VAR_3))
     break;
    if (FUNC_1(VAR_2, &VAR_5))
     FUNC_8("group sync broken sliding down");

    if (VAR_5.end > VAR_5.start)
     VAR_7 = VAR_4.end;
   }
  } while (VAR_8 != VAR_4.end - VAR_4.start);
  if (VAR_4.end == VAR_6) {

  } else if (VAR_7 != -1) {





   while (VAR_5.end == VAR_5.start) {
    if (FUNC_4(VAR_1, &VAR_4, VAR_3))
     FUNC_8("match disappeared");
    if (FUNC_2(VAR_2, &VAR_5))
     FUNC_8("group sync broken sliding to match");
   }
  } else if (VAR_3 & VAR_0) {
   long VAR_9, VAR_10 = -1;
   struct split_score VAR_11;

   for (VAR_9 = VAR_6; VAR_9 <= VAR_4.end; VAR_9++) {
    struct split_measurement VAR_12;
    struct split_score VAR_13 = {0, 0};

    FUNC_5(VAR_1, VAR_9, &VAR_12);
    FUNC_6(&VAR_12, &VAR_13);
    FUNC_5(VAR_1, VAR_9 - VAR_8, &VAR_12);
    FUNC_6(&VAR_12, &VAR_13);
    if (VAR_10 == -1 ||
        FUNC_7(&VAR_13, &VAR_11) <= 0) {
     VAR_11.effective_indent = VAR_13.effective_indent;
     VAR_11.penalty = VAR_13.penalty;
     VAR_10 = VAR_9;
    }
   }

   while (VAR_4.end > VAR_10) {
    if (FUNC_4(VAR_1, &VAR_4, VAR_3))
     FUNC_8("best shift unreached");
    if (FUNC_2(VAR_2, &VAR_5))
     FUNC_8("group sync broken sliding to blank line");
   }
  }

 next:

  if (FUNC_1(VAR_1, &VAR_4))
   break;
  if (FUNC_1(VAR_2, &VAR_5))
   FUNC_8("group sync broken moving to next group");
 }

 if (!FUNC_1(VAR_2, &VAR_5))
  FUNC_8("group sync broken at end of file");

 return 0;
}
