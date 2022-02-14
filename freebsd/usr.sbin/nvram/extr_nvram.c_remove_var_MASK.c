
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(uint8_t *VAR_0, int VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;
 VAR_5 = FUNC_2(VAR_2);
 while (VAR_1 > 0) {
  VAR_4 = FUNC_2(VAR_0) + 1;
  if (VAR_4 == 1)
   break;
  if (FUNC_3(VAR_0, VAR_2, VAR_5) == 0 && VAR_0[VAR_5] == '=') {
   FUNC_0(VAR_0, VAR_0 + VAR_4, VAR_1 - VAR_4);
   FUNC_1(VAR_0 + VAR_1 - VAR_4, '\0', VAR_4);
   VAR_3 += 1;
   continue;
  }
  VAR_1 -= VAR_4;
  VAR_0 += VAR_4;
 }
 return VAR_3;
}
