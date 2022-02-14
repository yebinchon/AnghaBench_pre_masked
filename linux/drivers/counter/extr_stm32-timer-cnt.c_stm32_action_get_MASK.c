
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct counter_synapse {TYPE_3__* signal; } ;
struct counter_device {int dummy; } ;
struct counter_count {TYPE_2__* synapses; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {TYPE_1__* signal; } ;
struct TYPE_4__ {int id; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct counter_device*,struct counter_count*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_2,
       struct counter_count *VAR_3,
       struct counter_synapse *VAR_4,
       size_t *VAR_5)
{
 size_t VAR_6;
 int VAR_7;


 *VAR_5 = VAR_1;

 VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_6);
 if (VAR_7)
  return 0;

 switch (VAR_6) {
 case 130:

  if (VAR_4->signal->id == VAR_3->synapses[0].signal->id)
   *VAR_5 = VAR_0;
  break;
 case 129:

  if (VAR_4->signal->id == VAR_3->synapses[1].signal->id)
   *VAR_5 = VAR_0;
  break;
 case 128:

  *VAR_5 = VAR_0;
  break;
 }

 return 0;
}
