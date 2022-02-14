
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nlm_soc_info {int coremask; int picbase; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int *) ;
 unsigned int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__* FUNC_3 (int ) ;
 struct nlm_soc_info* FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int,int,int) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (int) ;

int FUNC_9(void)
{
 struct nlm_soc_info *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 volatile u32 *VAR_9 = FUNC_3(VAR_0);





 VAR_5 = FUNC_4(0);
 VAR_8 = FUNC_1();
 FUNC_6(VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_6 == VAR_8 || !FUNC_0(VAR_6, &VAR_3))
   continue;
  FUNC_5(VAR_5->picbase, VAR_6, 1, 1);
 }


 VAR_5->coremask = 1;
 for (VAR_6 = 1; VAR_6 < FUNC_2(); VAR_6++) {
  for (VAR_7 = 1000000; VAR_7 > 0; VAR_7--) {
   if (VAR_9[VAR_6 * VAR_1])
    break;
   FUNC_8(10);
  }
  if (VAR_7 != 0)
   VAR_5->coremask |= (1u << VAR_6);
  else
   FUNC_7("Failed to wakeup core %d\n", VAR_6);
 }

 return 0;
}
