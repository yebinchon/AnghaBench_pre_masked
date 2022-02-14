
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct refspec_cb_data {int fetch; int remote; } ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ git_config_entry ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const git_config_entry *VAR_0, void *VAR_1)
{
 struct refspec_cb_data *VAR_2 = (struct refspec_cb_data *)VAR_1;
 return FUNC_0(VAR_2->remote, VAR_0->value, VAR_2->fetch);
}
