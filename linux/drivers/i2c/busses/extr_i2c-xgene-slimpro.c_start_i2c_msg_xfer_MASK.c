
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_block; } ;
struct slimpro_i2c_dev {int* resp_msg; int rd_complete; TYPE_1__ mbox_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct slimpro_i2c_dev *VAR_4)
{
 if (VAR_4->mbox_client.tx_block || !VAR_3) {
  if (!FUNC_1(&VAR_4->rd_complete,
       FUNC_0(VAR_2)))
   return -VAR_1;
 }


 if (*VAR_4->resp_msg == 0xffffffff)
  return -VAR_0;

 return 0;
}
