
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct quad8_iio {scalar_t__* preset_enable; } ;
struct counter_synapse {TYPE_3__* signal; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {size_t id; TYPE_2__* synapses; } ;
typedef enum counter_count_direction { ____Placeholder_counter_count_direction } counter_count_direction ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {TYPE_1__* signal; } ;
struct TYPE_4__ {size_t id; } ;


 int VAR_0 ;




 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct counter_device*,struct counter_count*,int*) ;
 int FUNC_1 (struct counter_device*,struct counter_count*,size_t*) ;

__attribute__((used)) static int FUNC_2(struct counter_device *VAR_5,
 struct counter_count *VAR_6, struct counter_synapse *VAR_7,
 size_t *VAR_8)
{
 struct quad8_iio *const VAR_9 = VAR_5->priv;
 int VAR_10;
 size_t VAR_11 = 0;
 const size_t VAR_12 = VAR_6->synapses[0].signal->id;
 enum counter_count_direction VAR_13;


 if (VAR_7->signal->id >= 16) {
  if (VAR_9->preset_enable[VAR_6->id])
   *VAR_8 = VAR_4;
  else
   *VAR_8 = VAR_3;

  return 0;
 }

 VAR_10 = FUNC_1(VAR_5, VAR_6, &VAR_11);
 if (VAR_10)
  return VAR_10;


 *VAR_8 = VAR_3;


 switch (VAR_11) {
 case 131:
  if (VAR_7->signal->id == VAR_12)
   *VAR_8 = VAR_4;
  break;
 case 130:
  if (VAR_7->signal->id == VAR_12) {
   FUNC_0(VAR_5, VAR_6, &VAR_13);

   if (VAR_13 == VAR_0)
    *VAR_8 = VAR_4;
   else
    *VAR_8 = VAR_2;
  }
  break;
 case 129:
  if (VAR_7->signal->id == VAR_12)
   *VAR_8 = VAR_1;
  break;
 case 128:
  *VAR_8 = VAR_1;
  break;
 }

 return 0;
}
