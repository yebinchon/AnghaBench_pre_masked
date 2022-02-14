
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct siw_pbl {int dummy; } ;
struct ib_mr {int dummy; } ;
struct siw_mr {TYPE_1__* mem; struct ib_mr base_mr; } ;
struct siw_device {int num_mr; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;
struct TYPE_2__ {int is_pbl; int stag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct siw_pbl*) ;
 int VAR_4 ;
 int FUNC_2 (struct siw_pbl*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct siw_pbl*) ;
 int FUNC_6 (struct siw_mr*,int ) ;
 struct siw_mr* FUNC_7 (int,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct ib_pd*,char*,...) ;
 int FUNC_9 (struct siw_mr*,struct ib_pd*,struct siw_pbl*,int ,int,int ) ;
 int FUNC_10 (struct siw_mr*) ;
 struct siw_pbl* FUNC_11 (int) ;
 struct siw_device* FUNC_12 (int ) ;

struct ib_mr *FUNC_13(struct ib_pd *VAR_8, enum ib_mr_type VAR_9,
      u32 VAR_10, struct ib_udata *VAR_11)
{
 struct siw_device *VAR_12 = FUNC_12(VAR_8->device);
 struct siw_mr *VAR_13 = ((void*)0);
 struct siw_pbl *VAR_14 = ((void*)0);
 int VAR_15;

 if (FUNC_4(&VAR_12->num_mr) > VAR_5) {
  FUNC_8(VAR_8, "too many mr's\n");
  VAR_15 = -VAR_0;
  goto err_out;
 }
 if (VAR_9 != VAR_3) {
  FUNC_8(VAR_8, "mr type %d unsupported\n", VAR_9);
  VAR_15 = -VAR_1;
  goto err_out;
 }
 if (VAR_10 > VAR_6) {
  FUNC_8(VAR_8, "too many sge's: %d\n", VAR_10);
  VAR_15 = -VAR_0;
  goto err_out;
 }
 VAR_14 = FUNC_11(VAR_10);
 if (FUNC_1(VAR_14)) {
  VAR_15 = FUNC_2(VAR_14);
  FUNC_8(VAR_8, "pbl allocation failed: %d\n", VAR_15);
  VAR_14 = ((void*)0);
  goto err_out;
 }
 VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_15 = -VAR_0;
  goto err_out;
 }
 VAR_15 = FUNC_9(VAR_13, VAR_8, VAR_14, 0, VAR_10 * VAR_4, 0);
 if (VAR_15)
  goto err_out;

 VAR_13->mem->is_pbl = 1;

 FUNC_8(VAR_8, "[MEM %u]: success\n", VAR_13->mem->stag);

 return &VAR_13->base_mr;

err_out:
 FUNC_3(&VAR_12->num_mr);

 if (!VAR_13) {
  FUNC_5(VAR_14);
 } else {
  if (VAR_13->mem)
   FUNC_10(VAR_13);
  FUNC_6(VAR_13, VAR_7);
 }
 FUNC_8(VAR_8, "failed: %d\n", VAR_15);

 return FUNC_0(VAR_15);
}
