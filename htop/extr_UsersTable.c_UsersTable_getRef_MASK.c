
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct passwd {int pw_name; } ;
struct TYPE_3__ {int users; } ;
typedef TYPE_1__ UsersTable ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int,char*) ;
 struct passwd* FUNC_2 (unsigned int) ;
 char* FUNC_3 (int ) ;

char* FUNC_4(UsersTable* VAR_0, unsigned int VAR_1) {
   char* VAR_2 = (char*) (FUNC_0(VAR_0->users, VAR_1));
   if (VAR_2 == ((void*)0)) {
      struct passwd* VAR_3 = FUNC_2(VAR_1);
      if (VAR_3 != ((void*)0)) {
         VAR_2 = FUNC_3(VAR_3->pw_name);
         FUNC_1(VAR_0->users, VAR_1, VAR_2);
      }
   }
   return VAR_2;
}
