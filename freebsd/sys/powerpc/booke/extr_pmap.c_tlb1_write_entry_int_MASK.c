
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tlbwrite_args {int idx; TYPE_1__* e; } ;
struct TYPE_2__ {int mas1; int mas2; int mas3; int mas7; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void *VAR_6)
{
 struct tlbwrite_args *VAR_7 = VAR_6;
 uint32_t VAR_8, VAR_9;

 VAR_8 = VAR_7->idx;
 if (VAR_8 == -1) {
  VAR_8 = FUNC_5();
  if (VAR_8 == -1)
   FUNC_4("No free TLB1 entries!\n");
 }

 VAR_9 = FUNC_1(1) | FUNC_0(VAR_8);

 FUNC_3(VAR_0, VAR_9);
 FUNC_3(VAR_1, VAR_7->e->mas1);
 FUNC_3(VAR_2, VAR_7->e->mas2);
 FUNC_3(VAR_3, VAR_7->e->mas3);
 switch ((FUNC_2() >> 16) & 0xFFFF) {
 case 131:
 case 129:
 case 128:
  FUNC_3(VAR_5, 0);

 case 130:
  FUNC_3(VAR_4, VAR_7->e->mas7);
  break;
 default:
  break;
 }

 __asm __volatile("isync; tlbwe; isync; msync");

}
