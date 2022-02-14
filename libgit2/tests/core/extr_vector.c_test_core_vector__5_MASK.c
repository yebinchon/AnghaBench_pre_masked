
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int content; } ;
typedef TYPE_1__ my_struct ;
struct TYPE_8__ {int length; } ;
typedef TYPE_2__ git_vector ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int,int *) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 int VAR_2 ;

void FUNC_7(void)
{
 git_vector VAR_3;
 int VAR_4;

 FUNC_5(&VAR_3, 1, &VAR_1);

 for (VAR_4 = 0; VAR_4 < 10; VAR_4 += 2)
  FUNC_6(&VAR_3, FUNC_0(VAR_4), &VAR_2);

 for (VAR_4 = 9; VAR_4 > 0; VAR_4 -= 2)
  FUNC_6(&VAR_3, FUNC_0(VAR_4), &VAR_2);

 FUNC_1(VAR_3.length == 10);
 FUNC_1(VAR_0 == 10);

 for (VAR_4 = 0; VAR_4 < 10; VAR_4 += 2)
  FUNC_6(&VAR_3, FUNC_0(VAR_4), &VAR_2);

 for (VAR_4 = 9; VAR_4 > 0; VAR_4 -= 2)
  FUNC_6(&VAR_3, FUNC_0(VAR_4), &VAR_2);

 FUNC_1(VAR_3.length == 10);
 FUNC_1(VAR_0 == 10);

 for (VAR_4 = 0; VAR_4 < 10; ++VAR_4) {
  FUNC_1(((my_struct *)FUNC_4(&VAR_3, VAR_4))->content == VAR_4);
  FUNC_2(FUNC_4(&VAR_3, VAR_4));
  VAR_0--;
 }

 FUNC_3(&VAR_3);
}
