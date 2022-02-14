
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(u32 *VAR_2, u32 VAR_3, unsigned int VAR_4)
{
 if (FUNC_2(VAR_4 & (VAR_1 | VAR_0))) {
  if (VAR_4 & VAR_1) {
   FUNC_0(VAR_2);
   FUNC_1();
  }

  *VAR_2 = VAR_3;
  if (VAR_4 & VAR_0)
   FUNC_0(VAR_2);
 } else
  *VAR_2 = VAR_3;
}
