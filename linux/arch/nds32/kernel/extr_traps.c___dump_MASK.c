
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct task_struct*,int*,unsigned long,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_5, unsigned long *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = VAR_2, VAR_9 = 0;
 FUNC_4("Call Trace:\n");
 if (!FUNC_0(VAR_0)) {
  while (!FUNC_3(VAR_6)) {
   VAR_7 = *VAR_6++;
   if (FUNC_1(VAR_7)) {
    VAR_7 = FUNC_2(
      VAR_5, &VAR_9, VAR_7, ((void*)0));
    FUNC_5(VAR_7);
   }
   if (--VAR_8 < 0)
    break;
  }
 } else {
  while (!FUNC_3((void *)VAR_6) &&
         !((unsigned long)VAR_6 & 0x3) &&
         ((unsigned long)VAR_6 >= VAR_4)) {
   unsigned long VAR_10;
   VAR_7 = VAR_6[VAR_3];
   VAR_10 = VAR_6[VAR_1];
   if (FUNC_1(VAR_7)) {

    VAR_7 = FUNC_2(
      VAR_5, &VAR_9, VAR_7, ((void*)0));
    FUNC_5(VAR_7);
   }
   if (--VAR_8 < 0)
    break;
   VAR_6 = (unsigned long *)VAR_10;
  }
 }
 FUNC_4("\n");
}
