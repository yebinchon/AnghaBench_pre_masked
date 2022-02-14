
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_aes_dev {int * out_sg; int * in_sg; int flags; struct aead_request* aead_req; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct aead_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct omap_aes_dev *VAR_1, int VAR_2)
{
 struct aead_request *VAR_3 = VAR_1->aead_req;

 VAR_1->flags &= ~VAR_0;
 VAR_1->in_sg = ((void*)0);
 VAR_1->out_sg = ((void*)0);

 VAR_3->base.complete(&VAR_3->base, VAR_2);
}
