
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_sqe {int rkey; int access; scalar_t__ base_mr; } ;
struct siw_mem {int stag_valid; int stag; int va; int perms; struct ib_pd* pd; } ;
struct siw_device {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_mr {int rkey; int iova; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct siw_mem*,char*,int) ;
 int FUNC_2 (struct ib_pd*,char*,int) ;
 struct siw_mem* FUNC_3 (struct siw_device*,int) ;
 int FUNC_4 (struct siw_mem*) ;
 struct siw_device* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ib_pd *VAR_1, struct siw_sqe *VAR_2)
{
 struct ib_mr *VAR_3 = (struct ib_mr *)(uintptr_t)VAR_2->base_mr;
 struct siw_device *VAR_4 = FUNC_5(VAR_1->device);
 struct siw_mem *VAR_5 = FUNC_3(VAR_4, VAR_2->rkey >> 8);
 int VAR_6 = 0;

 FUNC_2(VAR_1, "STag 0x%08x\n", VAR_2->rkey);

 if (FUNC_6(!VAR_5 || !VAR_3)) {
  FUNC_0("siw: fastreg: STag 0x%08x unknown\n", VAR_2->rkey);
  return -VAR_0;
 }
 if (FUNC_6(VAR_3->rkey >> 8 != VAR_2->rkey >> 8)) {
  FUNC_0("siw: fastreg: STag 0x%08x: bad MR\n", VAR_2->rkey);
  VAR_6 = -VAR_0;
  goto out;
 }
 if (FUNC_6(VAR_5->pd != VAR_1)) {
  FUNC_0("siw: fastreg: PD mismatch\n");
  VAR_6 = -VAR_0;
  goto out;
 }
 if (FUNC_6(VAR_5->stag_valid)) {
  FUNC_0("siw: fastreg: STag 0x%08x already valid\n", VAR_2->rkey);
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_5->stag = VAR_2->rkey;
 VAR_5->perms = VAR_2->access;

 FUNC_1(VAR_5, "STag 0x%08x now valid\n", VAR_2->rkey);
 VAR_5->va = VAR_3->iova;
 VAR_5->stag_valid = 1;
out:
 FUNC_4(VAR_5);
 return VAR_6;
}
