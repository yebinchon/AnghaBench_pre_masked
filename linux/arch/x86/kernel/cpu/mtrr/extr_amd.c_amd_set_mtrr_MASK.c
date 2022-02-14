
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef int mtrr_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_2, unsigned long VAR_3, unsigned long VAR_4, mtrr_type VAR_5)
{
 u32 VAR_6[2];




 FUNC_0(VAR_0, VAR_6[0], VAR_6[1]);



 if (VAR_4 == 0) {
  VAR_6[VAR_2] = 0;
 } else {
  VAR_6[VAR_2] = (-VAR_4 >> (15 - VAR_1) & 0x0001FFFC)
      | (VAR_3 << VAR_1) | (VAR_5 + 1);
 }





 FUNC_1();
 FUNC_2(VAR_0, VAR_6[0], VAR_6[1]);
}
