
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_sdma_request {struct hfi1_user_sdma_pkt_q* pq; } ;
struct TYPE_4__ {int iov_len; scalar_t__ iov_base; } ;
struct user_sdma_iovec {TYPE_2__ iov; } ;
struct TYPE_3__ {int len; } ;
struct sdma_mmu_node {int npages; struct page** pages; TYPE_1__ rb; } ;
struct page {int dummy; } ;
struct hfi1_user_sdma_pkt_q {int n_locked; int mm; int dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long,int,int ,struct page**) ;
 int FUNC_3 (int ,int ,int ,int) ;
 struct page** FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct page**) ;
 int FUNC_6 (struct page**,struct page**,int) ;
 int FUNC_7 (struct hfi1_user_sdma_pkt_q*,int) ;
 int FUNC_8 (int ,struct page**,int,int) ;

__attribute__((used)) static int FUNC_9(struct user_sdma_request *VAR_4,
     struct user_sdma_iovec *VAR_5,
     struct sdma_mmu_node *VAR_6,
     int VAR_7)
{
 int VAR_8, VAR_9;
 struct page **VAR_10;
 struct hfi1_user_sdma_pkt_q *VAR_11 = VAR_4->pq;

 VAR_10 = FUNC_4(VAR_7, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 FUNC_6(VAR_10, VAR_6->pages, VAR_6->npages * sizeof(*VAR_10));

 VAR_7 -= VAR_6->npages;
retry:
 if (!FUNC_3(VAR_11->dd, VAR_11->mm,
    FUNC_1(&VAR_11->n_locked), VAR_7)) {
  VAR_9 = FUNC_7(VAR_11, VAR_7);
  if (VAR_9 >= VAR_7)
   goto retry;
 }
 VAR_8 = FUNC_2(VAR_11->mm,
      ((unsigned long)VAR_5->iov.iov_base +
      (VAR_6->npages * VAR_3)), VAR_7, 0,
      VAR_10 + VAR_6->npages);
 if (VAR_8 < 0) {
  FUNC_5(VAR_10);
  return VAR_8;
 }
 if (VAR_8 != VAR_7) {
  FUNC_8(VAR_11->mm, VAR_10, VAR_6->npages, VAR_8);
  return -VAR_0;
 }
 FUNC_5(VAR_6->pages);
 VAR_6->rb.len = VAR_5->iov.iov_len;
 VAR_6->pages = VAR_10;
 FUNC_0(VAR_8, &VAR_11->n_locked);
 return VAR_8;
}
