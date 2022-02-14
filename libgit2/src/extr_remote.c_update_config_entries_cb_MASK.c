
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct update_data {int new_remote_name; int config; int old_remote_name; } ;
struct TYPE_3__ {int name; int value; } ;
typedef TYPE_1__ git_config_entry ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(
 const git_config_entry *VAR_0,
 void *VAR_1)
{
 struct update_data *VAR_2 = (struct update_data *)VAR_1;

 if (FUNC_1(VAR_0->value, VAR_2->old_remote_name))
  return 0;

 return FUNC_0(
  VAR_2->config, VAR_0->name, VAR_2->new_remote_name);
}
