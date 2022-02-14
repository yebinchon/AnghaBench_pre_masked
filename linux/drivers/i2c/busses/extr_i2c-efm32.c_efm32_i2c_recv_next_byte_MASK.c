
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; int * buf; } ;
struct efm32_i2c_ddata {size_t current_msg; size_t current_word; int num_msgs; int done; struct i2c_msg* msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efm32_i2c_ddata*,int ) ;
 int FUNC_2 (struct efm32_i2c_ddata*) ;
 int FUNC_3 (struct efm32_i2c_ddata*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct efm32_i2c_ddata *VAR_5)
{
 struct i2c_msg *VAR_6 = &VAR_5->msgs[VAR_5->current_msg];

 VAR_6->buf[VAR_5->current_word] = FUNC_1(VAR_5, VAR_4);
 VAR_5->current_word += 1;
 if (VAR_5->current_word >= VAR_6->len) {

  VAR_5->current_word = 0;
  VAR_5->current_msg += 1;

  FUNC_3(VAR_5, VAR_0, VAR_2);

  if (VAR_5->current_msg >= VAR_5->num_msgs) {
   FUNC_3(VAR_5, VAR_0, VAR_3);
   FUNC_0(&VAR_5->done);
  } else {
   FUNC_2(VAR_5);
  }
 } else {
  FUNC_3(VAR_5, VAR_0, VAR_1);
 }
}
