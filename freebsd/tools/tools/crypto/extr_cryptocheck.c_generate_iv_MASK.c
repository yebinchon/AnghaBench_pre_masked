
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg {int cipher; } ;




 char* FUNC_0 (size_t) ;

__attribute__((used)) static char *
FUNC_1(size_t VAR_0, struct alg *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 switch (VAR_1->cipher) {
 case 129:

  VAR_2[VAR_0 - 4] = 0;
  VAR_2[VAR_0 - 3] = 0;
  VAR_2[VAR_0 - 2] = 0;
  VAR_2[VAR_0 - 1] = 0;
  break;
 case 128:




  VAR_2[VAR_0 - 8] = 0;
  VAR_2[VAR_0 - 7] = 0;
  VAR_2[VAR_0 - 6] = 0;
  VAR_2[VAR_0 - 5] = 0;
  VAR_2[VAR_0 - 4] = 0;
  VAR_2[VAR_0 - 3] = 0;
  VAR_2[VAR_0 - 2] = 0;
  VAR_2[VAR_0 - 1] = 0;
  break;
 }
 return (VAR_2);
}
