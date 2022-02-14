
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int percent; struct TYPE_3__* prev; } ;
typedef TYPE_1__ FILEDESC ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(void)
{
 FILEDESC *VAR_5, *VAR_6 = ((void*)0);
 int VAR_7, VAR_8, VAR_9;







 VAR_7 = 0;
 VAR_8 = 0;
 for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->prev)
  if (VAR_5->percent == VAR_3) {
   VAR_8++;
   if (VAR_1)
    VAR_6 = VAR_5;
  } else
   VAR_7 += VAR_5->percent;
 FUNC_0(1, (VAR_4, "summing probabilities:%d%% with %d NO_PROB's",
      VAR_7, VAR_8));
 if (VAR_7 > 100) {
  (void) FUNC_2(VAR_4,
      "fortune: probabilities sum to %d%% > 100%%!\n", VAR_7);
  FUNC_1(1);
 } else if (VAR_7 < 100 && VAR_8 == 0) {
  (void) FUNC_2(VAR_4,
      "fortune: no place to put residual probability (%d%% < 100%%)\n",
      VAR_7);
  FUNC_1(1);
 } else if (VAR_7 == 100 && VAR_8 != 0) {
  (void) FUNC_2(VAR_4,
      "fortune: no probability left to put in residual files (100%%)\n");
  FUNC_1(1);
 }
 VAR_7 = 100 - VAR_7;
 if (VAR_1) {
  if (VAR_8 != 0) {
   if (VAR_8 > 1) {
    VAR_9 = VAR_7 / VAR_8;
    FUNC_0(1, (VAR_4, ", frac = %d%%", VAR_9));
    for (VAR_5 = VAR_2; VAR_5 != VAR_6; VAR_5 = VAR_5->prev)
     if (VAR_5->percent == VAR_3) {
      VAR_5->percent = VAR_9;
      VAR_7 -= VAR_9;
     }
   }
   VAR_6->percent = VAR_7;
   FUNC_0(1, (VAR_4, ", residual = %d%%", VAR_7));
  }
  else
  FUNC_0(1, (VAR_4,
       ", %d%% distributed over remaining fortunes\n",
       VAR_7));
 }
 FUNC_0(1, (VAR_4, "\n"));





}
