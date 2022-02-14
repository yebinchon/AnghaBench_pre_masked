
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ tx_block; } ;
struct slimpro_i2c_dev {int rd_complete; TYPE_1__ mbox_client; int * resp_msg; } ;
struct mbox_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct slimpro_i2c_dev* FUNC_1 (struct mbox_client*) ;

__attribute__((used)) static void FUNC_2(struct mbox_client *VAR_0, void *VAR_1)
{
 struct slimpro_i2c_dev *VAR_2 = FUNC_1(VAR_0);







 if (VAR_2->resp_msg)
  *VAR_2->resp_msg = ((u32 *)VAR_1)[1];

 if (VAR_2->mbox_client.tx_block)
  FUNC_0(&VAR_2->rd_complete);
}
