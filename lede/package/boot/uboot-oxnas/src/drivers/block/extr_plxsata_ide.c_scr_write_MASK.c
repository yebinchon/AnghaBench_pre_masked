
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (char*) ;
 unsigned long** VAR_5 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_6, unsigned int VAR_7, u32 VAR_8)
{

 *(VAR_5[VAR_6] + VAR_2) = VAR_8;


 *(VAR_5[VAR_6] + VAR_3) = VAR_7
  * 4+ VAR_4;


 int VAR_9 = VAR_0;
 do {
  if (*(VAR_5[VAR_6] + VAR_1) & 1UL) {
   break;
  }
  FUNC_1(10);
 } while (--VAR_9);

 if (!VAR_9) {
  FUNC_0("scr_write() Timed out of wait for write completion\n");
 }
}
