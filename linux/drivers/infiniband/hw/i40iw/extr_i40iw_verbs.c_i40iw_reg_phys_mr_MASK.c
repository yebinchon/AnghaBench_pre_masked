
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
typedef int u16 ;
struct ib_pd {int device; } ;
struct ib_mr {void* lkey; void* rkey; int device; struct ib_pd* pd; } ;
struct i40iw_pd {int dummy; } ;
struct i40iw_pbl {void* user_base; struct i40iw_mr* iwmr; } ;
struct i40iw_mr {int page_cnt; struct ib_mr ibmr; void* length; void** pgaddrmem; void* stag; int type; struct i40iw_pbl iwpbl; } ;
struct i40iw_device {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i40iw_pd*) ;
 void* FUNC_2 (struct i40iw_device*) ;
 int FUNC_3 (struct i40iw_device*,void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct i40iw_device*,struct i40iw_mr*,int ) ;
 int FUNC_6 (struct i40iw_mr*) ;
 struct i40iw_mr* FUNC_7 (int,int ) ;
 struct i40iw_device* FUNC_8 (int ) ;
 struct i40iw_pd* FUNC_9 (struct ib_pd*) ;

struct ib_mr *FUNC_10(struct ib_pd *VAR_5,
    u64 VAR_6,
    u64 VAR_7,
    int VAR_8,
    u64 *VAR_9)
{
 struct i40iw_pd *VAR_10 = FUNC_9(VAR_5);
 struct i40iw_device *VAR_11 = FUNC_8(VAR_5->device);
 struct i40iw_pbl *VAR_12;
 struct i40iw_mr *VAR_13;
 enum i40iw_status_code VAR_14;
 u32 VAR_15;
 u16 VAR_16 = VAR_3;
 int VAR_17;

 VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_0);
 VAR_13->ibmr.pd = VAR_5;
 VAR_13->ibmr.device = VAR_5->device;
 VAR_12 = &VAR_13->iwpbl;
 VAR_12->iwmr = VAR_13;
 VAR_13->type = VAR_4;
 VAR_12->user_base = *VAR_9;
 VAR_15 = FUNC_2(VAR_11);
 if (!VAR_15) {
  VAR_17 = -VAR_1;
  goto err;
 }
 VAR_16 |= FUNC_4(VAR_8);
 VAR_13->stag = VAR_15;
 VAR_13->ibmr.rkey = VAR_15;
 VAR_13->ibmr.lkey = VAR_15;
 VAR_13->page_cnt = 1;
 VAR_13->pgaddrmem[0] = VAR_6;
 VAR_13->length = VAR_7;
 VAR_14 = FUNC_5(VAR_11, VAR_13, VAR_16);
 if (VAR_14) {
  FUNC_3(VAR_11, VAR_15);
  VAR_17 = -VAR_0;
  goto err;
 }

 FUNC_1(VAR_10);
 return &VAR_13->ibmr;
 err:
 FUNC_6(VAR_13);
 return FUNC_0(VAR_17);
}
