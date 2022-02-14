
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_5(
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 int VAR_4)
{
 git_buf VAR_5 = VAR_0;
 FUNC_3(&VAR_5, VAR_2);
 FUNC_0(VAR_4, FUNC_4(&VAR_5, VAR_3));
 FUNC_1(VAR_1, VAR_5.ptr);
 FUNC_2(&VAR_5);
}
