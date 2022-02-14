
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 char *VAR_4;

 FUNC_0(FUNC_5(&VAR_3, VAR_1) >= 0);
 FUNC_1(VAR_2, VAR_3.ptr);
 FUNC_3(&VAR_3);

 FUNC_0((VAR_4 = FUNC_4(VAR_1)) != ((void*)0));
 FUNC_1(VAR_2, VAR_4);
 FUNC_2(VAR_4);
}
