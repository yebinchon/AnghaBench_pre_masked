
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_3;
 unsigned char VAR_4 = 0;

 for (VAR_3 = VAR_2; VAR_3 <= VAR_1; ++VAR_3)
  VAR_4 += FUNC_0(VAR_3);
 return (FUNC_0(VAR_0) == (~VAR_4 & 0xff)) &&
        (FUNC_0(VAR_0 + 1) == (VAR_4 & 0xff));
}
