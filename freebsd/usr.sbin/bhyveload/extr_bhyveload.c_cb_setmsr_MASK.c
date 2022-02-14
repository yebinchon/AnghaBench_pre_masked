
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5, int VAR_6, uint64_t VAR_7)
{
 int VAR_8;
 enum vm_reg_name VAR_9;

 VAR_9 = VAR_3;

 switch (VAR_6) {
 case 128:
  VAR_9 = VAR_2;
  break;
 default:
  break;
 }

 if (VAR_9 == VAR_3) {
  FUNC_2("test_setmsr(%d): not implemented\n", VAR_6);
  FUNC_0(((void*)0), VAR_1);
 }

 VAR_8 = FUNC_3(VAR_4, VAR_0, VAR_9, VAR_7);
 if (VAR_8) {
  FUNC_1("vm_set_msr");
  FUNC_0(((void*)0), VAR_1);
 }
}
