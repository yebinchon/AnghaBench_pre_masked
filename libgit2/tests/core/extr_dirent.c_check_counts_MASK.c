
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* names; } ;
typedef TYPE_1__ walk_data ;
struct TYPE_5__ {int count; scalar_t__ name; } ;
typedef TYPE_2__ name_data ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(walk_data *VAR_0)
{
 name_data *VAR_1;

 for (VAR_1 = VAR_0->names; VAR_1->name; VAR_1++) {
  FUNC_0(VAR_1->count == 1);
 }
}
