
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct remote {int name; int skip_default_update; } ;


 int FUNC_0 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_1(struct remote *VAR_0, void *VAR_1)
{
 struct string_list *VAR_2 = VAR_1;
 if (!VAR_0->skip_default_update)
  FUNC_0(VAR_2, VAR_0->name);
 return 0;
}
