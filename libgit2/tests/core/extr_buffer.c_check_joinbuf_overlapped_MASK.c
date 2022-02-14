
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char,scalar_t__,char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;

__attribute__((used)) static void
FUNC_7(
 const char *VAR_1,
 int VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 char VAR_5 = '/';
 git_buf VAR_6 = VAR_0;

 FUNC_6(&VAR_6, VAR_1);
 FUNC_4(&VAR_6, VAR_5, VAR_6.ptr + VAR_2, VAR_3);
 FUNC_0(FUNC_5(&VAR_6) == 0);
 FUNC_1(VAR_4, FUNC_2(&VAR_6));
 FUNC_3(&VAR_6);
}
