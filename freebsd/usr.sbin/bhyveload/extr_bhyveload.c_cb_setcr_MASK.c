
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_8, int VAR_9, uint64_t VAR_10)
{
 int VAR_11;
 enum vm_reg_name VAR_12;

 VAR_12 = VAR_5;

 switch (VAR_9) {
 case 0:
  VAR_12 = VAR_2;
  break;
 case 3:
  VAR_12 = VAR_3;
  VAR_6 = VAR_10;
  break;
 case 4:
  VAR_12 = VAR_4;
  break;
 default:
  break;
 }

 if (VAR_12 == VAR_5) {
  FUNC_2("test_setcr(%d): not implemented\n", VAR_9);
  FUNC_0(((void*)0), VAR_1);
 }

 VAR_11 = FUNC_3(VAR_7, VAR_0, VAR_12, VAR_10);
 if (VAR_11) {
  FUNC_1("vm_set_cr");
  FUNC_0(((void*)0), VAR_1);
 }
}
