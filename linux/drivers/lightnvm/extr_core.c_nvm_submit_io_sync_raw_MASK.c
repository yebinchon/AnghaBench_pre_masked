
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_rq {int flags; int * dev; } ;
struct nvm_dev {int geo; TYPE_1__* ops; } ;
struct TYPE_2__ {int submit_io; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nvm_rq*) ;
 int FUNC_1 (struct nvm_dev*,struct nvm_rq*,int *) ;

__attribute__((used)) static int FUNC_2(struct nvm_dev *VAR_1, struct nvm_rq *VAR_2)
{
 if (!VAR_1->ops->submit_io)
  return -VAR_0;

 VAR_2->dev = ((void*)0);
 VAR_2->flags = FUNC_0(&VAR_1->geo, VAR_2);

 return FUNC_1(VAR_1, VAR_2, ((void*)0));
}
