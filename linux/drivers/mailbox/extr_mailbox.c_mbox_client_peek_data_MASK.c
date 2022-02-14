
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbox_chan {TYPE_2__* mbox; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* peek_data ) (struct mbox_chan*) ;} ;


 int FUNC_0 (struct mbox_chan*) ;

bool FUNC_1(struct mbox_chan *VAR_0)
{
 if (VAR_0->mbox->ops->peek_data)
  return VAR_0->mbox->ops->peek_data(VAR_0);

 return 0;
}
