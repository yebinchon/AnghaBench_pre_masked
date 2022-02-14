
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int real_email; int real_name; int replace_email; int replace_name; } ;
typedef TYPE_1__ mailmap_entry ;
typedef int git_mailmap ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const**,char const**,int const*,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 const git_mailmap *VAR_0, const mailmap_entry *VAR_1, size_t VAR_2)
{
 const char *VAR_3 = ((void*)0);
 const char *VAR_4 = ((void*)0);
 size_t VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  FUNC_1(FUNC_2(
   &VAR_3, &VAR_4, VAR_0,
   VAR_1[VAR_5].replace_name, VAR_1[VAR_5].replace_email));
  FUNC_0(VAR_3, VAR_1[VAR_5].real_name);
  FUNC_0(VAR_4, VAR_1[VAR_5].real_email);
 }
}
