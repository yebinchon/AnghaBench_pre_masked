
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvm_rq {int * private; int end_io; } ;
struct nvm_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit_io ) (struct nvm_dev*,struct nvm_rq*,void*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nvm_dev*,struct nvm_rq*,void*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct nvm_dev *VAR_2, struct nvm_rq *VAR_3,
         void *VAR_4)
{
 FUNC_0(VAR_1);
 int VAR_5 = 0;

 VAR_3->end_io = VAR_0;
 VAR_3->private = &VAR_1;

 VAR_5 = VAR_2->ops->submit_io(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_1);

 return 0;
}
