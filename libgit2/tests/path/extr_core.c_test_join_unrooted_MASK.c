
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*,char const*,int *) ;

__attribute__((used)) static void FUNC_5(
 const char *VAR_1,
 ssize_t VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 ssize_t VAR_6;

 FUNC_2(FUNC_4(&VAR_5, VAR_3, VAR_4, &VAR_6));
 FUNC_1(VAR_1, VAR_5.ptr);
 FUNC_0(VAR_2, VAR_6);

 FUNC_3(&VAR_5);
}
