
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int) ;

void FUNC_2(void)
{
 FUNC_0(FUNC_1("Phil Haack", ">phil@haack", 1234567890, 60));
 FUNC_0(FUNC_1("Phil Haack", "phil@>haack", 1234567890, 60));
 FUNC_0(FUNC_1("Phil Haack", "<phil@haack>", 1234567890, 60));
}
