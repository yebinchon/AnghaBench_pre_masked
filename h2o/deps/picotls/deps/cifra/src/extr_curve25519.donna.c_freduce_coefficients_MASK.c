
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int limb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(limb *VAR_0) {
  unsigned VAR_1;

  VAR_0[10] = 0;

  for (VAR_1 = 0; VAR_1 < 10; VAR_1 += 2) {
    limb VAR_2 = FUNC_1(VAR_0[VAR_1]);




    VAR_0[VAR_1] -= VAR_2 << 26;
    VAR_0[VAR_1+1] += VAR_2;







    VAR_2 = FUNC_0(VAR_0[VAR_1+1]);
    VAR_0[VAR_1+1] -= VAR_2 << 25;
    VAR_0[VAR_1+2] += VAR_2;
  }

  VAR_0[0] += VAR_0[10] << 4;
  VAR_0[0] += VAR_0[10] << 1;
  VAR_0[0] += VAR_0[10];

  VAR_0[10] = 0;



  {
    limb VAR_3 = FUNC_1(VAR_0[0]);
    VAR_0[0] -= VAR_3 << 26;
    VAR_0[1] += VAR_3;
  }



}
