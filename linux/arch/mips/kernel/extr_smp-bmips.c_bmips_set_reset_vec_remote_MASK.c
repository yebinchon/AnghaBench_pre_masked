
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_vec_info {int cpu; int val; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,void (*) (void*),struct reset_vec_info*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void *VAR_0)
{
 struct reset_vec_info *VAR_1 = VAR_0;
 int VAR_2 = VAR_1->cpu & 0x01 ? 16 : 0;
 u32 VAR_3 = ~(0xffff << VAR_2), VAR_4 = VAR_1->val >> 16;

 FUNC_2();
 if (FUNC_6() > 0) {
  FUNC_5(0, &FUNC_8,
      VAR_1, 1);
 } else {
  if (VAR_1->cpu & 0x02) {

   FUNC_1(0xa0, (VAR_4 << 16) | VAR_4);
   FUNC_0(0xa0);
  } else {
   FUNC_7((FUNC_4() & VAR_3) |
           (VAR_4 << VAR_2));
  }
 }
 FUNC_3();
}
