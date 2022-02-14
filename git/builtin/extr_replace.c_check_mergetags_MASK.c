
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {int dummy; } ;
struct check_mergetag_data {int argc; char const** argv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct commit*,struct check_mergetag_data*) ;

__attribute__((used)) static int FUNC_1(struct commit *VAR_1, int VAR_2, const char **VAR_3)
{
 struct check_mergetag_data VAR_4;

 VAR_4.argc = VAR_2;
 VAR_4.argv = VAR_3;
 return FUNC_0(VAR_0, VAR_1, &VAR_4);
}
