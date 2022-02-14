
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ,size_t,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, uint64_t VAR_6, size_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_0, VAR_2, VAR_6, VAR_7 - 1, 0);
 if (VAR_8 != 0) {
  FUNC_1("vm_set_desc(gdt)");
  FUNC_0(((void*)0), VAR_1);
 }

 VAR_4 = VAR_6;
}
