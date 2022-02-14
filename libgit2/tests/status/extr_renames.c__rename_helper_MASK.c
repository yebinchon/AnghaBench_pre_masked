
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(
 git_repository *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 git_buf VAR_5 = VAR_0, VAR_6 = VAR_0;

 FUNC_1(FUNC_3(
  &VAR_5, FUNC_4(VAR_1), VAR_2));
 FUNC_1(FUNC_3(
  &VAR_6, FUNC_4(VAR_1), VAR_3));

 FUNC_1(FUNC_5(VAR_5.ptr, VAR_6.ptr));

 if (VAR_4)
  FUNC_0(VAR_6.ptr, VAR_4);

 FUNC_2(&VAR_5);
 FUNC_2(&VAR_6);
}
