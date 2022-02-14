
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * int_any; int * int_polarity; int * int_type; int * int_en; int * dirm; int * datamsw; int * datalsw; } ;
struct zynq_gpio {scalar_t__ base_addr; TYPE_2__ context; TYPE_1__* p_data; } ;
struct TYPE_3__ {unsigned int max_bank; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct zynq_gpio *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->p_data->max_bank; VAR_1++) {
  FUNC_7(VAR_0->context.datalsw[VAR_1],
          VAR_0->base_addr +
          FUNC_0(VAR_1));
  FUNC_7(VAR_0->context.datamsw[VAR_1],
          VAR_0->base_addr +
          FUNC_1(VAR_1));
  FUNC_7(VAR_0->context.dirm[VAR_1],
          VAR_0->base_addr +
          FUNC_2(VAR_1));
  FUNC_7(VAR_0->context.int_en[VAR_1],
          VAR_0->base_addr +
          FUNC_4(VAR_1));
  FUNC_7(VAR_0->context.int_type[VAR_1],
          VAR_0->base_addr +
          FUNC_6(VAR_1));
  FUNC_7(VAR_0->context.int_polarity[VAR_1],
          VAR_0->base_addr +
          FUNC_5(VAR_1));
  FUNC_7(VAR_0->context.int_any[VAR_1],
          VAR_0->base_addr +
          FUNC_3(VAR_1));
 }
}
