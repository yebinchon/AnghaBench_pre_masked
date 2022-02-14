
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_0 ;
 int FUNC_4 () ;
 struct pt_regs* FUNC_5 () ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct pt_regs*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (unsigned long*) ;
 int FUNC_11 (unsigned long*) ;

__attribute__((used)) static void FUNC_12(int VAR_5, u64 VAR_6)
{
 if (!FUNC_3(VAR_5, &VAR_2)) {
  if (FUNC_9(FUNC_3(VAR_5, &VAR_3))) {
   struct pt_regs *VAR_7 = FUNC_5();
   unsigned long VAR_8;

   FUNC_10(&VAR_8);

   FUNC_6("CPU %d became unstuck TB:%lld\n",
     VAR_5, VAR_6);
   FUNC_7(VAR_0);
   if (VAR_7)
    FUNC_8(VAR_7);
   else
    FUNC_4();

   FUNC_1(VAR_5, &VAR_3);
   FUNC_11(&VAR_8);
  }
  return;
 }
 FUNC_1(VAR_5, &VAR_2);
 if (FUNC_2(&VAR_2)) {
  unsigned long VAR_9;

  FUNC_10(&VAR_9);
  if (FUNC_2(&VAR_2)) {
   VAR_4 = VAR_6;
   FUNC_0(&VAR_2,
     &VAR_1,
     &VAR_3);
  }
  FUNC_11(&VAR_9);
 }
}
