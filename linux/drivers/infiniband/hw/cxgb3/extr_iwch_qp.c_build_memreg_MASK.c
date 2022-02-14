
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * pbl_addrs; } ;
struct TYPE_6__ {int * pbl_addrs; void* page_type_perms; void* va_base_lo_fbo; void* va_base_hi; void* len; void* stag; } ;
union t3_wr {TYPE_3__ pbl_frag; TYPE_2__ fastreg; } ;
typedef int u8 ;
typedef int u64 ;
struct t3_wq {int size_log2; scalar_t__ wptr; scalar_t__ queue; } ;
struct TYPE_5__ {int length; int iova; } ;
struct iwch_mr {int npages; scalar_t__* pages; TYPE_1__ ibmr; } ;
struct ib_reg_wr {int key; int access; TYPE_4__* mr; } ;
typedef int __be64 ;
struct TYPE_8__ {int page_size; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int ,int ,int ,int ,int,int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct iwch_mr* FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_12(union t3_wr *VAR_6, const struct ib_reg_wr *VAR_7,
   u8 *VAR_8, int *VAR_9, struct t3_wq *VAR_10)
{
 struct iwch_mr *VAR_11 = FUNC_11(VAR_7->mr);
 int VAR_12;
 __be64 *VAR_13;

 if (VAR_11->npages > VAR_2)
  return -VAR_0;
 *VAR_9 = 1;
 VAR_6->fastreg.stag = FUNC_7(VAR_7->key);
 VAR_6->fastreg.len = FUNC_7(VAR_11->ibmr.length);
 VAR_6->fastreg.va_base_hi = FUNC_7(VAR_11->ibmr.iova >> 32);
 VAR_6->fastreg.va_base_lo_fbo =
    FUNC_7(VAR_11->ibmr.iova & 0xffffffff);
 VAR_6->fastreg.page_type_perms = FUNC_7(
  FUNC_2(VAR_11->npages) |
  FUNC_3(FUNC_9(VAR_7->mr->page_size) - 12) |
  FUNC_5(VAR_5) |
  FUNC_4(FUNC_10(VAR_7->access)));
 VAR_13 = &VAR_6->fastreg.pbl_addrs[0];
 for (VAR_12 = 0; VAR_12 < VAR_11->npages; VAR_12++, VAR_13++) {


  if (VAR_12 == VAR_3) {
   *VAR_9 = 2;
   VAR_6 = (union t3_wr *)(VAR_10->queue +
    FUNC_1((VAR_10->wptr+1), VAR_10->size_log2));
   FUNC_6((void *)VAR_6, VAR_4, 0,
          FUNC_0(VAR_10->wptr + 1, VAR_10->size_log2),
          0, 1 + VAR_11->npages - VAR_3,
          VAR_1);

   VAR_13 = &VAR_6->pbl_frag.pbl_addrs[0];
  }
  *VAR_13 = FUNC_8((u64)VAR_11->pages[VAR_12]);
 }
 *VAR_8 = 5 + VAR_11->npages;
 if (*VAR_8 > 15)
  *VAR_8 = 15;
 return 0;
}
