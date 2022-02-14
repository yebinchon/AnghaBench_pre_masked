
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static in_addr_t
FUNC_6(in_addr_t VAR_4)
{

 VAR_4 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_4))
  return FUNC_3(VAR_0);
 if (FUNC_1(VAR_4))
  return FUNC_3(VAR_1);
 if (FUNC_2(VAR_4))
  return FUNC_3(VAR_2);
 FUNC_4(VAR_3, "unknown IP address class: %08X", VAR_4);
 return FUNC_3(0xffffffff);
}
