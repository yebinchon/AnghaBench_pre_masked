
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {int pos; TYPE_1__* msg; scalar_t__ stop_after_dma; } ;
struct TYPE_2__ {int len; unsigned char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (struct sh_mobile_i2c_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct sh_mobile_i2c_data *VAR_5)
{
 unsigned char VAR_6;
 int VAR_7;


 VAR_7 = VAR_5->pos - 2;

 if (VAR_5->pos == -1) {
  FUNC_0(VAR_5, VAR_3);
 } else if (VAR_5->pos == 0) {
  FUNC_0(VAR_5, VAR_4);
 } else if (VAR_5->pos == VAR_5->msg->len) {
  if (VAR_5->stop_after_dma) {

   FUNC_0(VAR_5, VAR_1);
   VAR_5->pos++;
   goto done;
  }

  if (VAR_7 < 0)
   FUNC_0(VAR_5, VAR_1);
  else
   VAR_6 = FUNC_0(VAR_5, VAR_2);
 } else if (VAR_7 >= 0) {
  VAR_6 = FUNC_0(VAR_5, VAR_0);
 }

 if (VAR_7 >= 0)
  VAR_5->msg->buf[VAR_7] = VAR_6;
 done:
 VAR_5->pos++;
 return VAR_5->pos == (VAR_5->msg->len + 2);
}
