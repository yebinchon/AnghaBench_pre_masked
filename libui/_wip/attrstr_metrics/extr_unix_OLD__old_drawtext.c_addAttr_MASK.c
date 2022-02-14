
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attrs; int * graphemes; } ;
typedef TYPE_1__ uiDrawTextLayout ;
struct TYPE_7__ {int end_index; int start_index; } ;
typedef TYPE_2__ PangoAttribute ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(uiDrawTextLayout *VAR_0, PangoAttribute *VAR_1, int VAR_2, int VAR_3)
{
 VAR_1->start_index = VAR_0->graphemes[VAR_2];
 VAR_1->end_index = VAR_0->graphemes[VAR_3];
 FUNC_0(VAR_0->attrs, VAR_1);

}
