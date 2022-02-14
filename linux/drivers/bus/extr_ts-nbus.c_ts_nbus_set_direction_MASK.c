
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ts_nbus {TYPE_1__* data; } ;
struct TYPE_2__ {int * desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct ts_nbus *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_2 == VAR_0)
   FUNC_0(VAR_1->data->desc[VAR_3]);
  else


   FUNC_1(VAR_1->data->desc[VAR_3], 1);
 }
}
