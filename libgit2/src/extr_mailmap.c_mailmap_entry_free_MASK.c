
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* replace_email; struct TYPE_4__* replace_name; struct TYPE_4__* real_email; struct TYPE_4__* real_name; } ;
typedef TYPE_1__ git_mailmap_entry ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(git_mailmap_entry *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->real_name);
 FUNC_0(VAR_0->real_email);
 FUNC_0(VAR_0->replace_name);
 FUNC_0(VAR_0->replace_email);
 FUNC_0(VAR_0);
}
