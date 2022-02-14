
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_srq {int first_free; int srqn; int max_gs; int wqe_shift; int lock; int * wrid; void* last; } ;
struct mthca_next_seg {scalar_t__ ee_nds; } ;
struct mthca_dev {int doorbell_lock; scalar_t__ kar; } ;
struct mthca_data_seg {int dummy; } ;
struct ib_srq {int device; } ;
struct ib_recv_wr {int num_sge; int wr_id; scalar_t__ sg_list; struct ib_recv_wr* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (struct mthca_srq*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct mthca_dev*,char*,int) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int,int,scalar_t__,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct mthca_dev* FUNC_10 (int ) ;
 struct mthca_srq* FUNC_11 (struct ib_srq*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;
 int* FUNC_14 (void*) ;

int FUNC_15(struct ib_srq *VAR_5, const struct ib_recv_wr *VAR_6,
         const struct ib_recv_wr **VAR_7)
{
 struct mthca_dev *VAR_8 = FUNC_10(VAR_5->device);
 struct mthca_srq *VAR_9 = FUNC_11(VAR_5);
 unsigned long VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 void *VAR_17;
 void *VAR_18;

 FUNC_8(&VAR_9->lock, VAR_10);

 VAR_12 = VAR_9->first_free;

 for (VAR_15 = 0; VAR_6; VAR_6 = VAR_6->next) {
  VAR_13 = VAR_9->first_free;
  VAR_17 = FUNC_2(VAR_9, VAR_13);
  VAR_14 = *FUNC_14(VAR_17);

  if (FUNC_12(VAR_14 < 0)) {
   FUNC_4(VAR_8, "SRQ %06x full\n", VAR_9->srqn);
   VAR_11 = -VAR_1;
   *VAR_7 = VAR_6;
   break;
  }

  VAR_18 = VAR_9->last;
  VAR_9->last = VAR_17;

  ((struct mthca_next_seg *) VAR_17)->ee_nds = 0;


  VAR_17 += sizeof (struct mthca_next_seg);

  if (FUNC_12(VAR_6->num_sge > VAR_9->max_gs)) {
   VAR_11 = -VAR_0;
   *VAR_7 = VAR_6;
   VAR_9->last = VAR_18;
   break;
  }

  for (VAR_16 = 0; VAR_16 < VAR_6->num_sge; ++VAR_16) {
   FUNC_5(VAR_17, VAR_6->sg_list + VAR_16);
   VAR_17 += sizeof (struct mthca_data_seg);
  }

  if (VAR_16 < VAR_9->max_gs)
   FUNC_6(VAR_17);

  ((struct mthca_next_seg *) VAR_18)->ee_nds =
   FUNC_1(VAR_2);

  VAR_9->wrid[VAR_13] = VAR_6->wr_id;
  VAR_9->first_free = VAR_14;

  ++VAR_15;
  if (FUNC_12(VAR_15 == VAR_4)) {
   VAR_15 = 0;





   FUNC_13();

   FUNC_7(VAR_12 << VAR_9->wqe_shift, VAR_9->srqn << 8,
          VAR_8->kar + VAR_3,
          FUNC_0(&VAR_8->doorbell_lock));

   VAR_12 = VAR_9->first_free;
  }
 }

 if (FUNC_3(VAR_15)) {




  FUNC_13();

  FUNC_7(VAR_12 << VAR_9->wqe_shift, (VAR_9->srqn << 8) | VAR_15,
         VAR_8->kar + VAR_3,
         FUNC_0(&VAR_8->doorbell_lock));
 }

 FUNC_9(&VAR_9->lock, VAR_10);
 return VAR_11;
}
