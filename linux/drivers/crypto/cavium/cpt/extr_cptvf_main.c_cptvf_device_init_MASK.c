
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_6__ {TYPE_2__* queue; } ;
struct cpt_vf {int flags; TYPE_3__ cqinfo; } ;
struct TYPE_5__ {TYPE_1__* qhead; } ;
struct TYPE_4__ {scalar_t__ dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpt_vf*,int) ;
 int FUNC_1 (struct cpt_vf*,int) ;
 int FUNC_2 (struct cpt_vf*,int ) ;
 int FUNC_3 (struct cpt_vf*,int ) ;
 int FUNC_4 (struct cpt_vf*,int ) ;
 int FUNC_5 (struct cpt_vf*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cpt_vf *VAR_2)
{
 u64 VAR_3 = 0;


 FUNC_0(VAR_2, 0);

 FUNC_3(VAR_2, 0);

 FUNC_4(VAR_2, 0);


 VAR_3 = (u64)(VAR_2->cqinfo.queue[0].qhead->dma_addr);
 FUNC_5(VAR_2, VAR_3);

 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_2, 1);

 FUNC_0(VAR_2, 1);

 VAR_2->flags |= VAR_0;
}
