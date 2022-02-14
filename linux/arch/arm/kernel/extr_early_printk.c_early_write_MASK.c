
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,char const*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, unsigned VAR_1)
{
 char VAR_2[128];
 while (VAR_1) {
  unsigned VAR_3 = FUNC_1(VAR_1, sizeof(VAR_2)-1);
  FUNC_0(VAR_2, VAR_0, VAR_3);
  VAR_2[VAR_3] = 0;
  VAR_0 += VAR_3;
  VAR_1 -= VAR_3;
  FUNC_2(VAR_2);
 }
}
