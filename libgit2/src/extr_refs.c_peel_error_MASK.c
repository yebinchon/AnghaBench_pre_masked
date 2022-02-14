
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, const git_reference *VAR_2, const char* VAR_3)
{
 FUNC_0(
  VAR_0,
  "the reference '%s' cannot be peeled - %s", FUNC_1(VAR_2), VAR_3);
 return VAR_1;
}
