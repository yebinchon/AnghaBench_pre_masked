
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_sha_rec {int flags; int queue_task; TYPE_2__* req; } ;
struct mtk_cryp {int dummy; } ;
struct TYPE_3__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mtk_cryp *VAR_2,
          struct mtk_sha_rec *VAR_3,
          int VAR_4)
{
 if (FUNC_0(!VAR_4 && (VAR_1 & VAR_3->flags)))
  VAR_4 = FUNC_1(VAR_3->req);

 VAR_3->flags &= ~(VAR_0 | VAR_1);

 VAR_3->req->base.complete(&VAR_3->req->base, VAR_4);


 FUNC_3(&VAR_3->queue_task);
}
