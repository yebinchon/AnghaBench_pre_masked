
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository_item_t ;
typedef int git_repository ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int const*) ;
 char* FUNC_2 (int const*) ;
 char* FUNC_3 (int const*) ;

__attribute__((used)) static const char *FUNC_4(const git_repository *VAR_2, git_repository_item_t VAR_3, git_repository_item_t VAR_4)
{
 const char *VAR_5;

 switch (VAR_3) {
  case 129:
   VAR_5 = FUNC_2(VAR_2);
   break;
  case 128:
   VAR_5 = FUNC_3(VAR_2);
   break;
  case 130:
   VAR_5 = FUNC_1(VAR_2);
   break;
  default:
   FUNC_0(VAR_0, "invalid item directory");
   return ((void*)0);
 }
 if (!VAR_5 && VAR_4 != VAR_1)
  return FUNC_4(VAR_2, VAR_4, VAR_1);

 return VAR_5;
}
