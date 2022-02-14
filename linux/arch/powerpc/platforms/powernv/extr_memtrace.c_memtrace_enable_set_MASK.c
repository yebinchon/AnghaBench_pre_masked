
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, u64 VAR_4)
{
 u64 VAR_5;





 VAR_5 = FUNC_0();
 if (VAR_4 & (VAR_5 - 1)) {
  FUNC_4("Value must be aligned with 0x%llx\n", VAR_5);
  return -VAR_1;
 }


 if (VAR_2) {
  if (FUNC_3())
   return -VAR_0;
 }

 if (!VAR_4)
  return 0;


 if (FUNC_2(VAR_4))
  return -VAR_1;

 if (FUNC_1())
  return -VAR_1;

 VAR_2 = VAR_4;

 return 0;
}
