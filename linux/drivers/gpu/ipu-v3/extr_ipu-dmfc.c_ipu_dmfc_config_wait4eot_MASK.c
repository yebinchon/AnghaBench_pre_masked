
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_dmfc_priv {int mutex; scalar_t__ base; } ;
struct dmfc_channel {int slots; TYPE_1__* data; struct ipu_dmfc_priv* priv; } ;
struct TYPE_2__ {int max_fifo_lines; int eot_shift; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct dmfc_channel *VAR_1, int VAR_2)
{
 struct ipu_dmfc_priv *VAR_3 = VAR_1->priv;
 u32 VAR_4;

 FUNC_0(&VAR_3->mutex);

 VAR_4 = FUNC_2(VAR_3->base + VAR_0);

 if ((VAR_1->slots * 64 * 4) / VAR_2 > VAR_1->data->max_fifo_lines)
  VAR_4 |= 1 << VAR_1->data->eot_shift;
 else
  VAR_4 &= ~(1 << VAR_1->data->eot_shift);

 FUNC_3(VAR_4, VAR_3->base + VAR_0);

 FUNC_1(&VAR_3->mutex);
}
