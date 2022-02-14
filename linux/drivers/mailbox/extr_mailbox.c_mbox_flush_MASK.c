
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbox_chan {TYPE_2__* mbox; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* flush ) (struct mbox_chan*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mbox_chan*,unsigned long) ;
 int FUNC_1 (struct mbox_chan*,int) ;

int FUNC_2(struct mbox_chan *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 if (!VAR_1->mbox->ops->flush)
  return -VAR_0;

 VAR_3 = VAR_1->mbox->ops->flush(VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_1(VAR_1, VAR_3);

 return VAR_3;
}
