
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int sigh; int sigl; } ;
typedef TYPE_1__ FPU_REG ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

int FUNC_7(FPU_REG const *VAR_2, FPU_REG *VAR_3)
{
 int VAR_4 = FUNC_5(VAR_2);

 *(long long *)&(VAR_3->sigl) = *(const long long *)&(VAR_2->sigl);


 FUNC_6(VAR_3, FUNC_3(VAR_2));

 if (FUNC_4(VAR_3) == VAR_0) {



  if (VAR_3->sigh & 0x80000000) {



   FUNC_2(VAR_3, 1);
  } else {

   FUNC_2(VAR_3, 1);
   FUNC_1(VAR_3);
  }
 }

 if (!(VAR_3->sigh & 0x80000000)) {
  FUNC_0(VAR_1 | 0x180);
 }

 return VAR_4;
}
