
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uresp ;
typedef int ureq ;
typedef int u64 ;
struct siw_uresp_reg_mr {int stag; } ;
struct siw_ureq_reg_mr {int stag_key; } ;
struct siw_umem {int dummy; } ;
struct ib_mr {int rkey; int lkey; } ;
struct siw_mr {struct siw_mem* mem; struct ib_mr base_mr; } ;
struct siw_mem {int stag_valid; int stag; } ;
struct siw_device {int num_mr; } ;
struct ib_udata {int inlen; int outlen; } ;
struct ib_pd {int device; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long locked_vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct siw_umem*) ;
 unsigned long FUNC_2 (int ) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct siw_umem*) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_2__* VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct siw_ureq_reg_mr*,struct ib_udata*,int) ;
 int FUNC_8 (struct ib_udata*,struct siw_uresp_reg_mr*,int) ;
 int FUNC_9 (struct siw_mr*,int ) ;
 struct siw_mr* FUNC_10 (int,int ) ;
 int VAR_9 ;
 unsigned long FUNC_11 (int ) ;
 int FUNC_12 (struct ib_pd*,char*,...) ;
 int FUNC_13 (struct siw_mr*,struct ib_pd*,struct siw_umem*,int,int,int) ;
 int FUNC_14 (struct siw_mr*) ;
 struct siw_umem* FUNC_15 (int,int,int ) ;
 int FUNC_16 (struct siw_umem*,int) ;
 struct siw_device* FUNC_17 (int ) ;

struct ib_mr *FUNC_18(struct ib_pd *VAR_10, u64 VAR_11, u64 VAR_12,
         u64 VAR_13, int VAR_14, struct ib_udata *VAR_15)
{
 struct siw_mr *VAR_16 = ((void*)0);
 struct siw_umem *VAR_17 = ((void*)0);
 struct siw_ureq_reg_mr VAR_18;
 struct siw_device *VAR_19 = FUNC_17(VAR_10->device);

 unsigned long VAR_20 = FUNC_11(VAR_5);
 int VAR_21;

 FUNC_12(VAR_10, "start: 0x%pK, va: 0x%pK, len: %llu\n",
     (void *)(uintptr_t)VAR_11, (void *)(uintptr_t)VAR_13,
     (unsigned long long)VAR_12);

 if (FUNC_5(&VAR_19->num_mr) > VAR_7) {
  FUNC_12(VAR_10, "too many mr's\n");
  VAR_21 = -VAR_1;
  goto err_out;
 }
 if (!VAR_12) {
  VAR_21 = -VAR_0;
  goto err_out;
 }
 if (VAR_20 != VAR_6) {
  unsigned long VAR_22 =
   (FUNC_2(VAR_12 + (VAR_11 & ~VAR_3))) >> VAR_4;
  VAR_20 >>= VAR_4;

  if (VAR_22 > VAR_20 - VAR_8->mm->locked_vm) {
   FUNC_12(VAR_10, "pages req %lu, max %lu, lock %lu\n",
       VAR_22, VAR_20,
       VAR_8->mm->locked_vm);
   VAR_21 = -VAR_1;
   goto err_out;
  }
 }
 VAR_17 = FUNC_15(VAR_11, VAR_12, FUNC_6(VAR_14));
 if (FUNC_1(VAR_17)) {
  VAR_21 = FUNC_3(VAR_17);
  FUNC_12(VAR_10, "getting user memory failed: %d\n", VAR_21);
  VAR_17 = ((void*)0);
  goto err_out;
 }
 VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_2);
 if (!VAR_16) {
  VAR_21 = -VAR_1;
  goto err_out;
 }
 VAR_21 = FUNC_13(VAR_16, VAR_10, VAR_17, VAR_11, VAR_12, VAR_14);
 if (VAR_21)
  goto err_out;

 if (VAR_15) {
  struct siw_uresp_reg_mr VAR_23 = {};
  struct siw_mem *VAR_24 = VAR_16->mem;

  if (VAR_15->inlen < sizeof(VAR_18)) {
   VAR_21 = -VAR_0;
   goto err_out;
  }
  VAR_21 = FUNC_7(&VAR_18, VAR_15, sizeof(VAR_18));
  if (VAR_21)
   goto err_out;

  VAR_16->base_mr.lkey |= VAR_18.stag_key;
  VAR_16->base_mr.rkey |= VAR_18.stag_key;
  VAR_24->stag |= VAR_18.stag_key;
  VAR_23.stag = VAR_24->stag;

  if (VAR_15->outlen < sizeof(VAR_23)) {
   VAR_21 = -VAR_0;
   goto err_out;
  }
  VAR_21 = FUNC_8(VAR_15, &VAR_23, sizeof(VAR_23));
  if (VAR_21)
   goto err_out;
 }
 VAR_16->mem->stag_valid = 1;

 return &VAR_16->base_mr;

err_out:
 FUNC_4(&VAR_19->num_mr);
 if (VAR_16) {
  if (VAR_16->mem)
   FUNC_14(VAR_16);
  FUNC_9(VAR_16, VAR_9);
 } else {
  if (VAR_17)
   FUNC_16(VAR_17, 0);
 }
 return FUNC_0(VAR_21);
}
