
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(void)
{
 int VAR_1;
 __be64 VAR_2;


 VAR_1 = FUNC_1(&VAR_2);
 if (VAR_1 == VAR_0) {
  FUNC_2("Existing DPO event detected.\n");
  return 1;
 }


 if (FUNC_0()) {
  FUNC_2("Existing EPOW event detected.\n");
  return 1;
 }

 return 0;
}
