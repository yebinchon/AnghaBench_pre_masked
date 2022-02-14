
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tag_lo; } ;
struct ocrdma_mqe {TYPE_3__ hdr; } ;
struct TYPE_8__ {int head; } ;
struct TYPE_5__ {TYPE_4__ sq; } ;
struct TYPE_6__ {int cmd_done; int tag; } ;
struct ocrdma_dev {TYPE_1__ mq; TYPE_2__ mqe_ctx; } ;


 int FUNC_0 (struct ocrdma_mqe*,struct ocrdma_mqe*,int) ;
 struct ocrdma_mqe* FUNC_1 (struct ocrdma_dev*) ;
 int FUNC_2 (struct ocrdma_dev*) ;
 int FUNC_3 (struct ocrdma_dev*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct ocrdma_dev *VAR_0, struct ocrdma_mqe *VAR_1)
{
 struct ocrdma_mqe *VAR_2;

 VAR_0->mqe_ctx.tag = VAR_0->mq.sq.head;
 VAR_0->mqe_ctx.cmd_done = 0;
 VAR_2 = FUNC_1(VAR_0);
 VAR_1->hdr.tag_lo = VAR_0->mq.sq.head;
 FUNC_0(VAR_2, VAR_1, sizeof(*VAR_2));

 FUNC_4();
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
