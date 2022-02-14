
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct p_times {int dummy; } ;
struct kinfo_proc {float ki_swtime; int ki_flag; scalar_t__ ki_pctcpu; } ;
struct TYPE_4__ {float pt_pctcpu; struct kinfo_proc* pt_kp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 double FUNC_2 (float) ;
 int FUNC_3 (TYPE_1__*) ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 struct kinfo_proc* FUNC_5 (int ,int ,int ,int*) ;
 float VAR_4 ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

void
FUNC_7(void)
{
 int VAR_7;
 float VAR_8;
 float *VAR_9;
 struct kinfo_proc *VAR_10;
 static int VAR_11 = 0;

 if ((VAR_10 = FUNC_5(VAR_3, VAR_0, 0, &VAR_5)) == ((void*)0)) {
  FUNC_1("%s", FUNC_4(VAR_3));
  if (VAR_6)
   FUNC_3(VAR_6);
  return;
 }
 if (VAR_5 > VAR_11) {
  FUNC_3(VAR_6);
  if ((VAR_6 =
      FUNC_6(VAR_5 * sizeof(struct p_times))) == ((void*)0)) {
   FUNC_1("Out of memory");
   FUNC_0(0);
  }
 }
 VAR_11 = VAR_5;



 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6[VAR_7].pt_kp = &VAR_10[VAR_7];
  VAR_9 = &VAR_6[VAR_7].pt_pctcpu;
  VAR_8 = VAR_10[VAR_7].ki_swtime;
  if (VAR_8 == 0 || (VAR_10[VAR_7].ki_flag & VAR_1) == 0)
   *VAR_9 = 0;
  else
   *VAR_9 = ((double) VAR_10[VAR_7].ki_pctcpu /
     VAR_2) / (1.0 - FUNC_2(VAR_8 * VAR_4));
 }
}
