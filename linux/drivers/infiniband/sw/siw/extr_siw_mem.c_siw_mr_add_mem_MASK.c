
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct xa_limit {int dummy; } ;
struct TYPE_2__ {int lkey; int rkey; } ;
struct siw_mr {TYPE_1__ base_mr; struct siw_mem* mem; } ;
struct siw_mem {int perms; int stag; int ref; struct ib_pd* pd; void* len; void* va; struct siw_device* sdev; scalar_t__ stag_valid; void* mem_obj; } ;
struct siw_device {int mem_xa; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xa_limit FUNC_0 (int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct siw_mem*) ;
 int FUNC_3 (int *) ;
 struct siw_mem* FUNC_4 (int,int ) ;
 struct siw_device* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int*,struct siw_mem*,struct xa_limit,int*,int ) ;

int FUNC_7(struct siw_mr *VAR_3, struct ib_pd *VAR_4, void *VAR_5,
     u64 VAR_6, u64 VAR_7, int VAR_8)
{
 struct siw_device *VAR_9 = FUNC_5(VAR_4->device);
 struct siw_mem *VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 struct xa_limit VAR_11 = FUNC_0(1, 0x00ffffff);
 u32 VAR_12, VAR_13;

 if (!VAR_10)
  return -VAR_0;

 VAR_10->mem_obj = VAR_5;
 VAR_10->stag_valid = 0;
 VAR_10->sdev = VAR_9;
 VAR_10->va = VAR_6;
 VAR_10->len = VAR_7;
 VAR_10->pd = VAR_4;
 VAR_10->perms = VAR_8 & VAR_2;
 FUNC_3(&VAR_10->ref);

 VAR_3->mem = VAR_10;

 FUNC_1(&VAR_13, 4);
 VAR_13 &= 0x00ffffff;

 if (FUNC_6(&VAR_9->mem_xa, &VAR_12, VAR_10, VAR_11, &VAR_13,
     VAR_1) < 0) {
  FUNC_2(VAR_10);
  return -VAR_0;
 }

 VAR_10->stag = VAR_12 << 8;
 VAR_3->base_mr.lkey = VAR_3->base_mr.rkey = VAR_10->stag;

 return 0;
}
