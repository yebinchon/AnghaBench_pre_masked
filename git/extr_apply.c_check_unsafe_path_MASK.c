
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {char* old_name; char* new_name; int new_mode; int old_mode; scalar_t__ is_delete; int is_copy; int is_new; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct patch *VAR_0)
{
 const char *VAR_1 = ((void*)0);
 const char *VAR_2 = ((void*)0);
 if (VAR_0->is_delete)
  VAR_1 = VAR_0->old_name;
 else if (!VAR_0->is_new && !VAR_0->is_copy)
  VAR_1 = VAR_0->old_name;
 if (!VAR_0->is_delete)
  VAR_2 = VAR_0->new_name;

 if (VAR_1 && !FUNC_2(VAR_1, VAR_0->old_mode))
  return FUNC_1(FUNC_0("invalid path '%s'"), VAR_1);
 if (VAR_2 && !FUNC_2(VAR_2, VAR_0->new_mode))
  return FUNC_1(FUNC_0("invalid path '%s'"), VAR_2);
 return 0;
}
