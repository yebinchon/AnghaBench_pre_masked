
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * replace_name; int * replace_email; } ;
typedef TYPE_1__ git_mailmap_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const git_mailmap_entry *VAR_2 = (const git_mailmap_entry *)VAR_0;
 const git_mailmap_entry *VAR_3 = (const git_mailmap_entry *)VAR_1;
 int VAR_4;

 FUNC_0(VAR_2 && VAR_3 && VAR_2->replace_email && VAR_3->replace_email);

 VAR_4 = FUNC_1(VAR_2->replace_email, VAR_3->replace_email);
 if (VAR_4)
  return VAR_4;


 if (VAR_2->replace_name == ((void*)0) || VAR_3->replace_name == ((void*)0))
  return (int)(VAR_2->replace_name != ((void*)0)) - (int)(VAR_3->replace_name != ((void*)0));

 return FUNC_1(VAR_2->replace_name, VAR_3->replace_name);
}
