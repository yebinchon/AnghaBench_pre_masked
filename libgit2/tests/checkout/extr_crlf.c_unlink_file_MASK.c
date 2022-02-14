
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, git_buf *VAR_1)
{
 char *VAR_2;

 FUNC_1(VAR_2 = FUNC_4(VAR_1->ptr));

 FUNC_0(VAR_0);

 if (FUNC_6(VAR_2, ".git"))
  FUNC_2(FUNC_5(VAR_1->ptr));

 FUNC_3(VAR_2);
 return 0;
}
