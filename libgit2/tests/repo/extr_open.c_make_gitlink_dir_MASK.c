
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,char*) ;
 int FUNC_4 (char const*,int,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;

 FUNC_0(FUNC_4(VAR_2, 0777, VAR_1));
 FUNC_0(FUNC_3(&VAR_4, VAR_2, ".git"));
 FUNC_1(VAR_4.ptr, VAR_3);
 FUNC_2(&VAR_4);
}
