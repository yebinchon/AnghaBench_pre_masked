
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct chip {int throttled; size_t throttle_reason; int id; int throttle_turbo; int throttle_sub_turbo; } ;
struct TYPE_2__ {unsigned int max; unsigned int nominal; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned int,int ,int ,int ) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 () ;
 struct chip* FUNC_8 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_7)
{
 struct chip *VAR_8;
 unsigned int VAR_9 = FUNC_7();
 unsigned long VAR_10;
 u8 VAR_11;
 unsigned int VAR_12;

 VAR_10 = FUNC_1(VAR_2);
 VAR_8 = FUNC_8(VAR_3);


 VAR_11 = FUNC_0(VAR_10);
 VAR_12 = FUNC_6(VAR_11);
 if (VAR_12 != VAR_4.max) {
  if (VAR_8->throttled)
   goto next;
  VAR_8->throttled = 1;
  if (VAR_12 > VAR_4.nominal) {
   FUNC_5("CPU %d on Chip %u has Pmax(0x%x) reduced below that of nominal frequency(0x%x)\n",
         VAR_9, VAR_8->id, VAR_11,
         FUNC_2(VAR_4.nominal));
   VAR_8->throttle_sub_turbo++;
  } else {
   VAR_8->throttle_turbo++;
  }
  FUNC_9(VAR_8->id,
          VAR_5[VAR_8->throttle_reason],
          VAR_11);
 } else if (VAR_8->throttled) {
  VAR_8->throttled = 0;
  FUNC_9(VAR_8->id,
          VAR_5[VAR_8->throttle_reason],
          VAR_11);
 }


next:
 if (VAR_10 & VAR_0) {
  VAR_6 = 1;
  FUNC_3("Pstate set to safe frequency\n");
 }


 if (VAR_10 & VAR_1) {
  VAR_6 = 1;
  FUNC_3("Frequency Control disabled from OS\n");
 }

 if (VAR_6) {
  FUNC_3("PMSR = %16lx\n", VAR_10);
  FUNC_4("CPU Frequency could be throttled\n");
 }
}
