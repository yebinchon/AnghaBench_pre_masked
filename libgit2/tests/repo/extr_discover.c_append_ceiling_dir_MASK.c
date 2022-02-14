
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char const*,int *) ;

__attribute__((used)) static void FUNC_6(git_buf *VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 char VAR_5[2] = { VAR_1, '\0' };

 FUNC_1(FUNC_5(&VAR_4, VAR_3, ((void*)0)));

 if (VAR_2->size > 0)
  FUNC_4(VAR_2, VAR_5);

 FUNC_4(VAR_2, VAR_4.ptr);

 FUNC_2(&VAR_4);
 FUNC_0(FUNC_3(VAR_2) == 0);
}
