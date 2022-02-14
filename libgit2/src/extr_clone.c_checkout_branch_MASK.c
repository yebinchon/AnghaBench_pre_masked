
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_checkout_options ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int const*) ;
 int FUNC_4 (int *,int ,char const*,char const*) ;
 int FUNC_5 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_6(git_repository *VAR_0, git_remote *VAR_1, const git_checkout_options *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5;

 if (VAR_3)
  VAR_5 = FUNC_4(VAR_0, FUNC_1(VAR_1), VAR_3,
    VAR_4);

 else
  VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_4);

 if (!VAR_5 && FUNC_3(VAR_0, FUNC_2(VAR_0), VAR_2))
  VAR_5 = FUNC_0(VAR_0, VAR_2);

 return VAR_5;
}
