
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_6, uint64_t VAR_7)
{
 int VAR_8;

 if (VAR_2 == 0)
  VAR_8 = FUNC_3(VAR_3, VAR_0, VAR_7, VAR_4,
      VAR_5);
 else
  VAR_8 = FUNC_2(VAR_3, VAR_0, VAR_7, VAR_2, VAR_4,
      VAR_5);
 if (VAR_8) {
  FUNC_1("vm_setup_freebsd_registers");
  FUNC_0(((void*)0), VAR_1);
 }

 FUNC_0(((void*)0), 0);
}
