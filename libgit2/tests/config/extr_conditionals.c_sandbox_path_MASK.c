
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,char const*) ;
 char* FUNC_5 (int ,int *) ;

__attribute__((used)) static char *FUNC_6(git_buf *VAR_0, const char *VAR_1)
{
 char *VAR_2 = FUNC_5(FUNC_2(), ((void*)0));
 FUNC_0(VAR_2);
 FUNC_1(FUNC_3(VAR_0, VAR_2, 0));
 FUNC_1(FUNC_4(VAR_0, VAR_0->ptr, VAR_1));
 return VAR_0->ptr;
}
