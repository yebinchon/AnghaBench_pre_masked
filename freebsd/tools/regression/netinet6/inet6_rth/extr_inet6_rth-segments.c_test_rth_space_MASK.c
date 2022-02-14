
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3()
{
 socklen_t VAR_1;

 FUNC_2("test_rth_space", sizeof("test_rth_space\0"));




 VAR_1 = FUNC_1(~VAR_0, 0);
 FUNC_0(0, VAR_1, 0, "invalid routing header type\0");




 VAR_1 = FUNC_1(VAR_0, 0);
 FUNC_0(0, VAR_1, 1, "0 segments\0");
 VAR_1 = FUNC_1(VAR_0, 127);
 FUNC_0(0, VAR_1, 1, "0 segments\0");




 VAR_1 = FUNC_1(VAR_0, -1);
 FUNC_0(0, VAR_1, 0, "-1 segments\0");
 VAR_1 = FUNC_1(VAR_0, 128);
 FUNC_0(0, VAR_1, 0, "128 segments\0");
}
