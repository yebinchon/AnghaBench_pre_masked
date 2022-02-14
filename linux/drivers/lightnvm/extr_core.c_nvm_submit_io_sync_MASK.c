
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_tgt_dev {int geo; struct nvm_dev* parent; } ;
struct nvm_rq {int flags; struct nvm_tgt_dev* dev; } ;
struct nvm_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int submit_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvm_tgt_dev*,struct nvm_rq*) ;
 int FUNC_1 (int *,struct nvm_rq*) ;
 int FUNC_2 (struct nvm_dev*,struct nvm_rq*,void*) ;

int FUNC_3(struct nvm_tgt_dev *VAR_1, struct nvm_rq *VAR_2,
         void *VAR_3)
{
 struct nvm_dev *VAR_4 = VAR_1->parent;
 int VAR_5;

 if (!VAR_4->ops->submit_io)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2);

 VAR_2->dev = VAR_1;
 VAR_2->flags = FUNC_1(&VAR_1->geo, VAR_2);

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);

 return VAR_5;
}
