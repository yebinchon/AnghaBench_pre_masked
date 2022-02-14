
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bluecard_info {int timer; int hw_state; TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct bluecard_info *VAR_4)
{
 unsigned int VAR_5 = VAR_4->p_dev->resource[0]->start;


 if (FUNC_4(&(VAR_4->timer)))
  return;

 FUNC_2(VAR_0, &(VAR_4->hw_state));

 if (FUNC_3(VAR_1, &(VAR_4->hw_state))) {

  FUNC_1(0x18 | 0x60, VAR_5 + 0x30);
 } else {

  FUNC_1(0x00, VAR_5 + 0x30);
 }


 FUNC_0(&(VAR_4->timer), VAR_3 + VAR_2 / 10);
}
