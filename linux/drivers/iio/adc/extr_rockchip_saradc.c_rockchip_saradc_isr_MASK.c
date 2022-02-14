
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_saradc {int completion; scalar_t__ regs; TYPE_1__* data; int last_val; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ num_bits; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct rockchip_saradc *VAR_5 = VAR_4;


 VAR_5->last_val = FUNC_2(VAR_5->regs + VAR_2);
 VAR_5->last_val &= FUNC_0(VAR_5->data->num_bits - 1, 0);


 FUNC_3(0, VAR_5->regs + VAR_1);

 FUNC_1(&VAR_5->completion);

 return VAR_0;
}
