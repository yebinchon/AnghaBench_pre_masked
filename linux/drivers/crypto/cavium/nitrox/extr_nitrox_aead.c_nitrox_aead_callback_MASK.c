
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nitrox_aead_rctx {int nkreq; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct aead_request {TYPE_1__ base; } ;


 int VAR_0 ;
 struct nitrox_aead_rctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2)
{
 struct aead_request *VAR_3 = VAR_1;
 struct nitrox_aead_rctx *VAR_4 = FUNC_0(VAR_3);

 FUNC_2(&VAR_4->nkreq);
 FUNC_1(&VAR_4->nkreq);
 if (VAR_2) {
  FUNC_3("request failed status 0x%0x\n", VAR_2);
  VAR_2 = -VAR_0;
 }

 VAR_3->base.complete(&VAR_3->base, VAR_2);
}
