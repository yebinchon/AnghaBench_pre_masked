
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_tdes_dev {int flags; int iclk; struct ablkcipher_request* req; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ablkcipher_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(struct atmel_tdes_dev *VAR_1, int VAR_2)
{
 struct ablkcipher_request *VAR_3 = VAR_1->req;

 FUNC_0(VAR_1->iclk);

 VAR_1->flags &= ~VAR_0;

 VAR_3->base.complete(&VAR_3->base, VAR_2);
}
