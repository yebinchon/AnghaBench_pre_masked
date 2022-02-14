
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ia64_tr_entry {int pte; int rr; int itir; int ifa; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct ia64_tr_entry** VAR_2 ;
 int FUNC_2 (int,int,int ,int,int) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(u64 VAR_3)
{

 int VAR_4;
 u64 VAR_5;
 struct ia64_tr_entry *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = FUNC_8();

 if (!VAR_2[VAR_8])
  return;

 VAR_7 = FUNC_0();
 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
  VAR_6 = VAR_2[VAR_8] + (VAR_3 - 1) * VAR_1;
  if (VAR_6->pte & 0x1) {
   VAR_5 = FUNC_1(VAR_6->ifa);
   if (VAR_5 != VAR_6->rr) {
    FUNC_5(VAR_6->ifa, VAR_6->rr);
    FUNC_6();
   }
   FUNC_3(VAR_3, VAR_6->ifa, VAR_6->itir >> 2);
   FUNC_7();
   if (VAR_3 & 0x1) {
    FUNC_2(0x1, VAR_4, VAR_6->ifa, VAR_6->pte, VAR_6->itir >> 2);
    FUNC_7();
   }
   if (VAR_3 & 0x2) {
    FUNC_2(0x2, VAR_4, VAR_6->ifa, VAR_6->pte, VAR_6->itir >> 2);
    FUNC_7();
   }
   if (VAR_5 != VAR_6->rr) {
    FUNC_5(VAR_6->ifa, VAR_5);
    FUNC_6();
   }
  }
 }
 FUNC_4(VAR_7);
}
