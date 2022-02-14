
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__**,size_t*,int *,int) ;

void FUNC_5(void)
{
 git_repository *VAR_0;
 git_buf *VAR_1;
 size_t VAR_2;

 VAR_0 = FUNC_3("nasty");
 FUNC_0(FUNC_4(&VAR_1, &VAR_2, VAR_0, 1));

 FUNC_1(2, VAR_2);
 FUNC_2(".git", VAR_1[0].ptr);
 FUNC_2("GIT~1", VAR_1[1].ptr);
}
