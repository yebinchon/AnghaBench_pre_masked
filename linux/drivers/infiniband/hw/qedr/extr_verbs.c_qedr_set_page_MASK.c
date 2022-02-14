
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct regpair {void* hi; void* lo; } ;
struct qedr_pbl {scalar_t__ va; } ;
struct TYPE_3__ {int num_pbes; int pbl_size; } ;
struct TYPE_4__ {struct qedr_pbl* pbl_table; TYPE_1__ pbl_info; } ;
struct qedr_mr {int npages; TYPE_2__ info; int dev; } ;
struct ib_mr {int dummy; } ;


 int FUNC_0 (int ,int ,char*,int,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int) ;
 struct qedr_mr* FUNC_3 (struct ib_mr*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ib_mr *VAR_2, u64 VAR_3)
{
 struct qedr_mr *VAR_4 = FUNC_3(VAR_2);
 struct qedr_pbl *VAR_5;
 struct regpair *VAR_6;
 u32 VAR_7;

 if (FUNC_4(VAR_4->npages == VAR_4->info.pbl_info.num_pbes)) {
  FUNC_1(VAR_4->dev, "qedr_set_page fails when %d\n", VAR_4->npages);
  return -VAR_0;
 }

 FUNC_0(VAR_4->dev, VAR_1, "qedr_set_page pages[%d] = 0x%llx\n",
   VAR_4->npages, VAR_3);

 VAR_7 = VAR_4->info.pbl_info.pbl_size / sizeof(u64);
 VAR_5 = VAR_4->info.pbl_table + (VAR_4->npages / VAR_7);
 VAR_6 = (struct regpair *)VAR_5->va;
 VAR_6 += VAR_4->npages % VAR_7;
 VAR_6->lo = FUNC_2((u32)VAR_3);
 VAR_6->hi = FUNC_2((u32)FUNC_5(VAR_3));

 VAR_4->npages++;

 return 0;
}
