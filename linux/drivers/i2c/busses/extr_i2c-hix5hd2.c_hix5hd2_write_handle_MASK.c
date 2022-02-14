
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hix5hd2_i2c_priv {scalar_t__ msg_len; scalar_t__ regs; int msg_idx; TYPE_1__* msg; } ;
struct TYPE_2__ {int * buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hix5hd2_i2c_priv*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hix5hd2_i2c_priv *VAR_3)
{
 u8 VAR_4;

 if (VAR_3->msg_len > 0) {
  VAR_4 = VAR_3->msg->buf[VAR_3->msg_idx++];
  FUNC_1(VAR_4, VAR_3->regs + VAR_1);
  FUNC_1(VAR_2, VAR_3->regs + VAR_0);
 } else {
  FUNC_0(VAR_3);
 }
}
