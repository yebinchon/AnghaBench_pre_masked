
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (unsigned char const*,size_t*) ;

void FUNC_2(void)
{
 const unsigned char *VAR_0 = (unsigned char *)"AB";
 size_t VAR_1;

 FUNC_0(FUNC_1(VAR_0, &VAR_1) == 65);
 FUNC_0(VAR_1 == 1);

 VAR_0 = (unsigned char *)"\xfe\xdc\xbaXY";
 FUNC_0(FUNC_1(VAR_0, &VAR_1) == 267869656);
 FUNC_0(VAR_1 == 4);

 VAR_0 = (unsigned char *)"\xaa\xaa\xfe\xdc\xbaXY";
 FUNC_0(FUNC_1(VAR_0, &VAR_1) == 1489279344088ULL);
 FUNC_0(VAR_1 == 6);

 VAR_0 = (unsigned char *)"\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xfe\xdc\xbaXY";
 FUNC_0(FUNC_1(VAR_0, &VAR_1) == 0);
 FUNC_0(VAR_1 == 0);

}
