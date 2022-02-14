
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_lptim_cnt {size_t polarity; } ;
struct counter_synapse {TYPE_2__* signal; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count {TYPE_1__* synapses; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {TYPE_3__* signal; } ;


 int VAR_0 ;


 size_t VAR_1 ;
 int FUNC_0 (struct counter_device*,struct counter_count*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_2,
          struct counter_count *VAR_3,
          struct counter_synapse *VAR_4,
          size_t *VAR_5)
{
 struct stm32_lptim_cnt *const VAR_6 = VAR_2->priv;
 size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;

 switch (VAR_7) {
 case 129:

  if (VAR_4->signal->id == VAR_3->synapses[0].signal->id)
   *VAR_5 = VAR_6->polarity;
  else
   *VAR_5 = VAR_1;
  return 0;
 case 128:
  *VAR_5 = VAR_6->polarity;
  return 0;
 }

 return -VAR_0;
}
