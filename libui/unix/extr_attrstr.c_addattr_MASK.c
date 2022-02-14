
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct foreachParams {int attrs; } ;
struct TYPE_4__ {size_t start_index; size_t end_index; } ;
typedef TYPE_1__ PangoAttribute ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct foreachParams *VAR_0, size_t VAR_1, size_t VAR_2, PangoAttribute *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;
 VAR_3->start_index = VAR_1;
 VAR_3->end_index = VAR_2;
 FUNC_0(VAR_0->attrs, VAR_3);
}
