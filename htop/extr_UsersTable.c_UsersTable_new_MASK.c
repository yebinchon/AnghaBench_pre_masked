
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int users; } ;
typedef TYPE_1__ UsersTable ;


 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;

UsersTable* FUNC_2() {
   UsersTable* VAR_0;
   VAR_0 = FUNC_1(sizeof(UsersTable));
   VAR_0->users = FUNC_0(20, 1);
   return VAR_0;
}
