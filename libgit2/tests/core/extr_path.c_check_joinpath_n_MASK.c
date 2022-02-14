
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char,int,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_4(
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 git_buf VAR_6 = VAR_0;

 FUNC_1(FUNC_3(&VAR_6, '/', 4,
          VAR_1, VAR_2, VAR_3, VAR_4));
 FUNC_0(VAR_5, VAR_6.ptr);

 FUNC_2(&VAR_6);
}
