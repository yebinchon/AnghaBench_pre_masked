
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6 = VAR_3 | FUNC_0(VAR_4) | (VAR_5 << 12);
 int VAR_7 = FUNC_2();
 if (VAR_6 != VAR_2 ||
     VAR_7 != VAR_1) {
  VAR_2 = VAR_6;
  VAR_1 = VAR_7;
  FUNC_1(VAR_0, VAR_6);
 }
}
