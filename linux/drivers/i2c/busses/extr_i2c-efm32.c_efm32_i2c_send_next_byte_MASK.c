
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {scalar_t__ len; int * buf; } ;
struct efm32_i2c_ddata {size_t current_msg; scalar_t__ current_word; int num_msgs; int done; struct i2c_msg* msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efm32_i2c_ddata*) ;
 int FUNC_2 (struct efm32_i2c_ddata*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct efm32_i2c_ddata *VAR_3)
{
 struct i2c_msg *VAR_4 = &VAR_3->msgs[VAR_3->current_msg];

 if (VAR_3->current_word >= VAR_4->len) {

  VAR_3->current_word = 0;
  VAR_3->current_msg += 1;

  if (VAR_3->current_msg >= VAR_3->num_msgs) {
   FUNC_2(VAR_3, VAR_0, VAR_1);
   FUNC_0(&VAR_3->done);
  } else {
   FUNC_1(VAR_3);
  }
 } else {
  FUNC_2(VAR_3, VAR_2,
    VAR_4->buf[VAR_3->current_word++]);
 }
}
