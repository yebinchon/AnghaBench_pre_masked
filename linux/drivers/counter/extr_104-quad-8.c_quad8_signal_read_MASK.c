
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {scalar_t__ base; } ;
struct counter_signal_read_value {int dummy; } ;
struct counter_signal {int id; } ;
struct counter_device {struct quad8_iio* priv; } ;
typedef enum counter_signal_level { ____Placeholder_counter_signal_level } counter_signal_level ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct counter_signal_read_value*,int ,int*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct counter_device *VAR_5,
 struct counter_signal *VAR_6, struct counter_signal_read_value *VAR_7)
{
 const struct quad8_iio *const VAR_8 = VAR_5->priv;
 unsigned int VAR_9;
 enum counter_signal_level VAR_10;


 if (VAR_6->id < 16)
  return -VAR_3;

 VAR_9 = FUNC_2(VAR_8->base + VAR_4)
  & FUNC_0(VAR_6->id - 16);

 VAR_10 = (VAR_9) ? VAR_1 : VAR_2;

 FUNC_1(VAR_7, VAR_0, &VAR_10);

 return 0;
}
