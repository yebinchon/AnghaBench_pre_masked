
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst; int src; } ;
struct brcm_message {TYPE_1__ spu; } ;
struct iproc_reqctx_s {struct brcm_message mb_mssg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcm_message*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iproc_reqctx_s *VAR_0)
{

 struct brcm_message *VAR_1 = &VAR_0->mb_mssg;

 FUNC_0(VAR_1->spu.src);
 FUNC_0(VAR_1->spu.dst);
 FUNC_1(VAR_1, 0, sizeof(struct brcm_message));
}
