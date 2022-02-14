
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char const*,int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int const*) ;

__attribute__((used)) static int FUNC_3(int VAR_2, const git_oid *VAR_3, git_object_t VAR_4)
{
 const char *VAR_5;
 char VAR_6[VAR_1 + 1];

 VAR_5 = FUNC_1(VAR_4);

 FUNC_2(VAR_6, VAR_3);
 VAR_6[VAR_1] = '\0';

 FUNC_0(VAR_0, "the git_object of id '%s' can not be "
  "successfully peeled into a %s (git_object_t=%i).", VAR_6, VAR_5, VAR_4);

 return VAR_2;
}
