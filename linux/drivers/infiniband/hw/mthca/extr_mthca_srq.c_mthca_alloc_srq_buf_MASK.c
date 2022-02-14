
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mthca_srq {int max; int wqe_shift; void* last; int wrid; int mr; int is_direct; int queue; } ;
struct mthca_pd {int dummy; } ;
struct mthca_next_seg {scalar_t__ nda_op; } ;
struct mthca_dev {int dummy; } ;
struct mthca_data_seg {int lkey; } ;
struct ib_udata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct mthca_srq*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct mthca_dev*,int,int ,int *,int *,struct mthca_pd*,int,int *) ;
 int* FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct mthca_dev *VAR_4, struct mthca_pd *VAR_5,
          struct mthca_srq *VAR_6, struct ib_udata *VAR_7)
{
 struct mthca_data_seg *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_7)
  return 0;

 VAR_6->wrid = FUNC_4(VAR_6->max, sizeof(u64), VAR_1);
 if (!VAR_6->wrid)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_4, VAR_6->max << VAR_6->wqe_shift,
         VAR_3,
         &VAR_6->queue, &VAR_6->is_direct, VAR_5, 1, &VAR_6->mr);
 if (VAR_10) {
  FUNC_3(VAR_6->wrid);
  return VAR_10;
 }






 for (VAR_11 = 0; VAR_11 < VAR_6->max; ++VAR_11) {
  struct mthca_next_seg *VAR_12;

  VAR_12 = VAR_9 = FUNC_1(VAR_6, VAR_11);

  if (VAR_11 < VAR_6->max - 1) {
   *FUNC_6(VAR_9) = VAR_11 + 1;
   VAR_12->nda_op = FUNC_2(((VAR_11 + 1) << VAR_6->wqe_shift) | 1);
  } else {
   *FUNC_6(VAR_9) = -1;
   VAR_12->nda_op = 0;
  }

  for (VAR_8 = VAR_9 + sizeof (struct mthca_next_seg);
       (void *) VAR_8 < VAR_9 + (1 << VAR_6->wqe_shift);
       ++VAR_8)
   VAR_8->lkey = FUNC_0(VAR_2);
 }

 VAR_6->last = FUNC_1(VAR_6, VAR_6->max - 1);

 return 0;
}
