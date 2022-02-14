
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(bool VAR_1)
{
 u8 VAR_2;
 u16 VAR_3;

 for (;;) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 == 0)
   break;
  VAR_3 = FUNC_1();
  if (VAR_3 != 0 && !VAR_1)
   FUNC_2((u8)VAR_3);
 }
}
