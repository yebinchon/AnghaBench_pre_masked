
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*,intptr_t) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (TYPE_1__*,void*,int *) ;

void FUNC_5(void)
{
 git_vector VAR_1;
 intptr_t VAR_2;
 FUNC_3(&VAR_1, 1, &VAR_0);

 for (VAR_2 = 0; VAR_2 < 10; VAR_2 += 2) {
  FUNC_4(&VAR_1, (void*)(VAR_2 + 1), ((void*)0));
 }

 for (VAR_2 = 9; VAR_2 > 0; VAR_2 -= 2) {
  FUNC_4(&VAR_1, (void*)(VAR_2 + 1), ((void*)0));
 }

 for (VAR_2 = 0; VAR_2 < 10; VAR_2 += 2) {
  FUNC_4(&VAR_1, (void*)(VAR_2 + 1), ((void*)0));
 }

 for (VAR_2 = 9; VAR_2 > 0; VAR_2 -= 2) {
  FUNC_4(&VAR_1, (void*)(VAR_2 + 1), ((void*)0));
 }

 FUNC_0(VAR_1.length == 20);
 for (VAR_2 = 0; VAR_2 < 20; ++VAR_2) {
  FUNC_0(FUNC_2(&VAR_1, VAR_2) == (void*)(VAR_2 / 2 + 1));
 }

 FUNC_1(&VAR_1);
}
