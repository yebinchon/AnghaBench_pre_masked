
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_lptim_cnt {size_t polarity; } ;
struct counter_synapse {TYPE_1__* signal; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count {TYPE_2__* synapses; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {TYPE_3__* signal; } ;
struct TYPE_4__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;



 int FUNC_0 (struct counter_device*,struct counter_count*,size_t*) ;
 scalar_t__ FUNC_1 (struct stm32_lptim_cnt* const) ;

__attribute__((used)) static int FUNC_2(struct counter_device *VAR_3,
          struct counter_count *VAR_4,
          struct counter_synapse *VAR_5,
          size_t VAR_6)
{
 struct stm32_lptim_cnt *const VAR_7 = VAR_3->priv;
 size_t VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_7))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3, VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;


 if (VAR_8 == VAR_2
     && VAR_5->signal->id == VAR_4->synapses[0].signal->id) {
  switch (VAR_6) {
  case 128:
  case 129:
  case 130:
   VAR_7->polarity = VAR_6;
   return 0;
  }
 }

 return -VAR_1;
}
