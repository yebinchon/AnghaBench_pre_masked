
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(int VAR_3)
{
 if (FUNC_0(VAR_3) ||
     (VAR_2 != -1 && VAR_2 != VAR_3)) {
  u64 VAR_4;

  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 & VAR_0) {
   FUNC_2(VAR_1, 0);
   return 1;
  }
 }
 return 0;
}
