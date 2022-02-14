
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,unsigned int) ;
 int FUNC_1 (int ,unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, unsigned int VAR_2)
{
 char VAR_3[68];
 unsigned long VAR_4 = FUNC_2(VAR_3);

 VAR_3[64] = 0;
 while (VAR_2 > 64) {
  FUNC_0(VAR_3, VAR_1, 64);
  FUNC_1(VAR_0, VAR_4);
  VAR_1 += 64;
  VAR_2 -= 64;
 }
 FUNC_0(VAR_3, VAR_1, VAR_2);
 VAR_3[VAR_2] = 0;
 FUNC_1(VAR_0, VAR_4);
}
