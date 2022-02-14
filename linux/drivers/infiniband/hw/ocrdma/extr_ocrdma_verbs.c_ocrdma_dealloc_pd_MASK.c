
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocrdma_ucontext {int dummy; } ;
struct ocrdma_pd {int id; struct ocrdma_ucontext* uctx; scalar_t__ dpp_enabled; } ;
struct TYPE_2__ {int db_page_size; scalar_t__ dpp_unmapped_addr; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocrdma_dev*,struct ocrdma_pd*) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 struct ocrdma_pd* FUNC_2 (struct ib_pd*) ;
 scalar_t__ FUNC_3 (struct ocrdma_ucontext*,struct ocrdma_pd*) ;
 int FUNC_4 (struct ocrdma_ucontext*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct ocrdma_dev*,int) ;
 int FUNC_6 (struct ocrdma_ucontext*) ;

void FUNC_7(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct ocrdma_pd *VAR_3 = FUNC_2(VAR_1);
 struct ocrdma_dev *VAR_4 = FUNC_1(VAR_1->device);
 struct ocrdma_ucontext *VAR_5 = ((void*)0);
 u64 VAR_6;

 VAR_5 = VAR_3->uctx;
 if (VAR_5) {
  u64 VAR_7 = VAR_4->nic_info.dpp_unmapped_addr +
   (VAR_3->id * VAR_0);
  if (VAR_3->dpp_enabled)
   FUNC_4(VAR_3->uctx, VAR_7, VAR_0);
  VAR_6 = FUNC_5(VAR_4, VAR_3->id);
  FUNC_4(VAR_3->uctx, VAR_6, VAR_4->nic_info.db_page_size);

  if (FUNC_3(VAR_5, VAR_3)) {
   FUNC_6(VAR_5);
   return;
  }
 }
 FUNC_0(VAR_4, VAR_3);
}
