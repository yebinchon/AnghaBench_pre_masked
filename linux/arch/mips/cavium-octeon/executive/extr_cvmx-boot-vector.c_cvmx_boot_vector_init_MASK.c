
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_4)
{
 uint64_t VAR_5;
 int VAR_6;

 FUNC_4(VAR_4, 0, VAR_2);
 VAR_5 = FUNC_2(VAR_4) | 0x8000000000000000ull;

 for (VAR_6 = 0; VAR_6 < 15; VAR_6++) {
  uint64_t VAR_7 = VAR_3[VAR_6];

  if (FUNC_1() && (VAR_6 == 0 || VAR_6 == 7))
   VAR_7 &= 0xffffffff00000000ull;
  FUNC_3(VAR_0, VAR_6 * 8);
  FUNC_3(VAR_1, VAR_7);
 }
 FUNC_3(VAR_0, 15 * 8);
 FUNC_3(VAR_1, VAR_5);
 FUNC_3(FUNC_0(0), 0x81fc0000);
}
