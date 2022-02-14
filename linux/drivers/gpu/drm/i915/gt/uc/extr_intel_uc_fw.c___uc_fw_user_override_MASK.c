
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uc_fw {int type; char const* path; int user_overridden; } ;




 char* FUNC_0 () ;
 char* FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct intel_uc_fw *VAR_0)
{
 const char *VAR_1 = ((void*)0);

 switch (VAR_0->type) {
 case 129:
  VAR_1 = FUNC_0();
  break;
 case 128:
  VAR_1 = FUNC_1();
  break;
 }

 if (FUNC_2(VAR_1)) {
  VAR_0->path = VAR_1;
  VAR_0->user_overridden = 1;
 }
}
