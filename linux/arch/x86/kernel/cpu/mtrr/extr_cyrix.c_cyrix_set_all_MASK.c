
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int size; int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_4;

 FUNC_2();


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  FUNC_3(VAR_0 + VAR_4, VAR_3[VAR_4]);
 for (; VAR_4 < 7; VAR_4++)
  FUNC_3(VAR_1 + VAR_4, VAR_3[VAR_4]);

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_0(VAR_4, VAR_2[VAR_4].base,
         VAR_2[VAR_4].size, VAR_2[VAR_4].type);
 }

 FUNC_1();
}
