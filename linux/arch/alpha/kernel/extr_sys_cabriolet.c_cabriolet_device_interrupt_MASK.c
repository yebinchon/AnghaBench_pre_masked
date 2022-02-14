
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_0)
{
 unsigned long VAR_1;
 unsigned int VAR_2;


 VAR_1 = FUNC_2(0x804) | (FUNC_2(0x805) << 8) | (FUNC_2(0x806) << 16);





 while (VAR_1) {
  VAR_2 = FUNC_0(~VAR_1);
  VAR_1 &= VAR_1 - 1;
  if (VAR_2 == 4) {
   FUNC_3(VAR_0);
  } else {
   FUNC_1(16 + VAR_2);
  }
 }
}
