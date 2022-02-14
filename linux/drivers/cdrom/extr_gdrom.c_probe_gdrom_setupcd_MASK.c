
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cd_info; } ;
struct TYPE_3__ {int capacity; int mask; int name; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 VAR_5.cd_info->ops = &VAR_6;
 VAR_5.cd_info->capacity = 1;
 FUNC_0(VAR_5.cd_info->name, VAR_4);
 VAR_5.cd_info->mask = VAR_0|VAR_2|VAR_1|
  VAR_3;
}
