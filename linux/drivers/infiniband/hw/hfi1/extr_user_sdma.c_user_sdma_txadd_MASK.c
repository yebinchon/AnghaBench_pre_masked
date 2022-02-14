
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef unsigned int u32 ;
struct user_sdma_txreq {int txreq; } ;
struct TYPE_4__ {unsigned long fragsize; } ;
struct user_sdma_request {int iov_idx; int data_iovs; struct user_sdma_iovec* iovs; TYPE_2__ info; struct hfi1_user_sdma_pkt_q* pq; } ;
struct TYPE_3__ {scalar_t__ iov_base; } ;
struct user_sdma_iovec {unsigned long offset; unsigned int npages; int * pages; TYPE_1__ iov; } ;
struct hfi1_user_sdma_pkt_q {int dd; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct user_sdma_request*,char*,int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int *,int ,unsigned long,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct user_sdma_request *VAR_3,
      struct user_sdma_txreq *VAR_4,
      struct user_sdma_iovec *VAR_5, u32 VAR_6,
      u32 *VAR_7, u32 *VAR_8,
      u64 *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14;
 u64 VAR_15 = *VAR_9;
 u32 VAR_16 = *VAR_7, VAR_17 = *VAR_8;
 struct hfi1_user_sdma_pkt_q *VAR_18 = VAR_3->pq;

 VAR_13 = (unsigned long)VAR_5->iov.iov_base;
 VAR_14 = FUNC_2(VAR_13 + VAR_5->offset + VAR_15);
 VAR_11 = (((VAR_5->offset + VAR_15 + VAR_13) - (VAR_13 & VAR_0)) >>
     VAR_1);
 VAR_12 = VAR_14 + VAR_3->info.fragsize > VAR_2 ?
  VAR_2 - VAR_14 : VAR_3->info.fragsize;
 VAR_12 = FUNC_1((VAR_6 - VAR_16), VAR_12);
 VAR_10 = FUNC_3(VAR_18->dd, &VAR_4->txreq, VAR_5->pages[VAR_11],
         VAR_14, VAR_12);
 if (VAR_10) {
  FUNC_0(VAR_3, "SDMA txreq add page failed %d\n", VAR_10);
  return VAR_10;
 }
 VAR_15 += VAR_12;
 VAR_16 += VAR_12;
 VAR_17 += VAR_12;
 if (FUNC_4(VAR_16 < VAR_6 && VAR_11 == VAR_5->npages &&
       VAR_3->iov_idx < VAR_3->data_iovs - 1)) {
  VAR_5->offset += VAR_15;
  VAR_5 = &VAR_3->iovs[++VAR_3->iov_idx];
  VAR_15 = 0;
 }

 *VAR_7 = VAR_16;
 *VAR_8 = VAR_17;
 *VAR_9 = VAR_15;
 return VAR_10;
}
