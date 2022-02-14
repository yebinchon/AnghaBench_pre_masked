
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct siw_uresp_alloc_ctx {int dev_id; } ;
struct siw_ucontext {struct siw_device* sdev; scalar_t__ uobj_nextkey; int xa; } ;
struct siw_device {int num_ctx; int vendor_part_id; } ;
struct ib_udata {int outlen; } ;
struct ib_ucontext {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_udata*,struct siw_uresp_alloc_ctx*,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 struct siw_ucontext* FUNC_5 (struct ib_ucontext*) ;
 struct siw_device* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(struct ib_ucontext *VAR_4, struct ib_udata *VAR_5)
{
 struct siw_device *VAR_6 = FUNC_6(VAR_4->device);
 struct siw_ucontext *VAR_7 = FUNC_5(VAR_4);
 struct siw_uresp_alloc_ctx VAR_8 = {};
 int VAR_9;

 if (FUNC_1(&VAR_6->num_ctx) > VAR_2) {
  VAR_9 = -VAR_1;
  goto err_out;
 }
 FUNC_7(&VAR_7->xa, VAR_3);
 VAR_7->uobj_nextkey = 0;
 VAR_7->sdev = VAR_6;

 VAR_8.dev_id = VAR_6->vendor_part_id;

 if (VAR_5->outlen < sizeof(VAR_8)) {
  VAR_9 = -VAR_0;
  goto err_out;
 }
 VAR_9 = FUNC_3(VAR_5, &VAR_8, sizeof(VAR_8));
 if (VAR_9)
  goto err_out;

 FUNC_4(VAR_4->device, "success. now %d context(s)\n",
  FUNC_2(&VAR_6->num_ctx));

 return 0;

err_out:
 FUNC_0(&VAR_6->num_ctx);
 FUNC_4(VAR_4->device, "failure %d. now %d context(s)\n", VAR_9,
  FUNC_2(&VAR_6->num_ctx));

 return VAR_9;
}
