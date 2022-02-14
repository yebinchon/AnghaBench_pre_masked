
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* path; void* username; void* protocol; int password; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char* VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 if (VAR_1 == ((void*)0) || VAR_2 != 1)
  return 0;
 if (!VAR_0.password) {
  VAR_0.protocol = FUNC_1("cert");
  VAR_0.username = FUNC_1("");
  VAR_0.path = FUNC_1(VAR_1);
  FUNC_0(&VAR_0);
 }
 return 1;
}
