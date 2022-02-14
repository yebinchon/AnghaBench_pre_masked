
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* real_name; char* real_email; } ;
typedef TYPE_1__ git_mailmap_entry ;
typedef int git_mailmap ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int const*,char const*,char const*) ;

int FUNC_2(
 const char **VAR_0, const char **VAR_1,
 const git_mailmap *VAR_2,
 const char *VAR_3, const char *VAR_4)
{
 const git_mailmap_entry *VAR_5 = ((void*)0);
 FUNC_0(VAR_3 && VAR_4);

 *VAR_0 = VAR_3;
 *VAR_1 = VAR_4;

 if ((VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4))) {
  if (VAR_5->real_name)
   *VAR_0 = VAR_5->real_name;
  if (VAR_5->real_email)
   *VAR_1 = VAR_5->real_email;
 }
 return 0;
}
