
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,unsigned long long) ;
 int FUNC_2 (unsigned char*,char*,int) ;

void FUNC_3(void)
{
 unsigned char VAR_0[100];
 FUNC_0(FUNC_1(VAR_0, 100, 65) == 1);
 FUNC_0(VAR_0[0] == 'A');

 FUNC_0(FUNC_1(VAR_0, 1, 1) == 1);
 FUNC_0(!FUNC_2(VAR_0, "\x01", 1));

 FUNC_0(FUNC_1(VAR_0, 100, 267869656) == 4);
 FUNC_0(!FUNC_2(VAR_0, "\xfe\xdc\xbaX", 4));

 FUNC_0(FUNC_1(VAR_0, 100, 1489279344088ULL) == 6);
 FUNC_0(!FUNC_2(VAR_0, "\xaa\xaa\xfe\xdc\xbaX", 6));

 FUNC_0(FUNC_1(VAR_0, 1, 1489279344088ULL) == -1);
}
