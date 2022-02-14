
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rename_data {int config; int name; scalar_t__ old_len; } ;
struct TYPE_3__ {scalar_t__ name; int value; } ;
typedef TYPE_1__ git_config_entry ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(
 const git_config_entry *VAR_0,
 void *VAR_1)
{
 int VAR_2 = 0;
 struct rename_data *VAR_3 = (struct rename_data *)VAR_1;
 size_t VAR_4 = FUNC_1(VAR_3->name);

 if (VAR_4 > 0 &&
  !(VAR_2 = FUNC_2(VAR_3->name, VAR_0->name + VAR_3->old_len)))
 {
  VAR_2 = FUNC_5(
   VAR_3->config, FUNC_0(VAR_3->name), VAR_0->value);

  FUNC_3(VAR_3->name, VAR_4);
 }

 if (!VAR_2)
  VAR_2 = FUNC_4(VAR_3->config, VAR_0->name);

 return VAR_2;
}
