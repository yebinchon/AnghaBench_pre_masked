
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mr {int dummy; } ;
struct siw_mr {struct ib_mr base_mr; TYPE_1__* mem; } ;
struct siw_device {int num_mr; } ;
struct ib_pd {int device; } ;
struct TYPE_2__ {int stag_valid; int stag; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct siw_mr*) ;
 struct siw_mr* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ib_pd*,char*,...) ;
 int FUNC_6 (struct siw_mr*,struct ib_pd*,int *,int ,int ,int) ;
 struct siw_device* FUNC_7 (int ) ;

struct ib_mr *FUNC_8(struct ib_pd *VAR_4, int VAR_5)
{
 struct siw_device *VAR_6 = FUNC_7(VAR_4->device);
 struct siw_mr *VAR_7 = ((void*)0);
 int VAR_8;

 if (FUNC_2(&VAR_6->num_mr) > VAR_2) {
  FUNC_5(VAR_4, "too many mr's\n");
  VAR_8 = -VAR_0;
  goto err_out;
 }
 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err_out;
 }
 VAR_8 = FUNC_6(VAR_7, VAR_4, ((void*)0), 0, VAR_3, VAR_5);
 if (VAR_8)
  goto err_out;

 VAR_7->mem->stag_valid = 1;

 FUNC_5(VAR_4, "[MEM %u]: success\n", VAR_7->mem->stag);

 return &VAR_7->base_mr;

err_out:
 if (VAR_8)
  FUNC_3(VAR_7);

 FUNC_1(&VAR_6->num_mr);

 return FUNC_0(VAR_8);
}
