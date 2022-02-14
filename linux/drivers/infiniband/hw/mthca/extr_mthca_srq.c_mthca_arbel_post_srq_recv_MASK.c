
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_srq {int first_free; int max_gs; int counter; int lock; int * db; int * wrid; int srqn; } ;
struct mthca_next_seg {scalar_t__ ee_nds; } ;
struct mthca_dev {int dummy; } ;
struct mthca_data_seg {int dummy; } ;
struct ib_srq {int device; } ;
struct ib_recv_wr {int num_sge; int wr_id; scalar_t__ sg_list; struct ib_recv_wr* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (struct mthca_srq*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mthca_dev*,char*,int ) ;
 int FUNC_4 (void*,scalar_t__) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct mthca_dev* FUNC_8 (int ) ;
 struct mthca_srq* FUNC_9 (struct ib_srq*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 () ;
 int* FUNC_12 (void*) ;

int FUNC_13(struct ib_srq *VAR_2, const struct ib_recv_wr *VAR_3,
         const struct ib_recv_wr **VAR_4)
{
 struct mthca_dev *VAR_5 = FUNC_8(VAR_2->device);
 struct mthca_srq *VAR_6 = FUNC_9(VAR_2);
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 void *VAR_13;

 FUNC_6(&VAR_6->lock, VAR_7);

 for (VAR_11 = 0; VAR_3; ++VAR_11, VAR_3 = VAR_3->next) {
  VAR_9 = VAR_6->first_free;
  VAR_13 = FUNC_1(VAR_6, VAR_9);
  VAR_10 = *FUNC_12(VAR_13);

  if (FUNC_10(VAR_10 < 0)) {
   FUNC_3(VAR_5, "SRQ %06x full\n", VAR_6->srqn);
   VAR_8 = -VAR_1;
   *VAR_4 = VAR_3;
   break;
  }

  ((struct mthca_next_seg *) VAR_13)->ee_nds = 0;


  VAR_13 += sizeof (struct mthca_next_seg);

  if (FUNC_10(VAR_3->num_sge > VAR_6->max_gs)) {
   VAR_8 = -VAR_0;
   *VAR_4 = VAR_3;
   break;
  }

  for (VAR_12 = 0; VAR_12 < VAR_3->num_sge; ++VAR_12) {
   FUNC_4(VAR_13, VAR_3->sg_list + VAR_12);
   VAR_13 += sizeof (struct mthca_data_seg);
  }

  if (VAR_12 < VAR_6->max_gs)
   FUNC_5(VAR_13);

  VAR_6->wrid[VAR_9] = VAR_3->wr_id;
  VAR_6->first_free = VAR_10;
 }

 if (FUNC_2(VAR_11)) {
  VAR_6->counter += VAR_11;





  FUNC_11();
  *VAR_6->db = FUNC_0(VAR_6->counter);
 }

 FUNC_7(&VAR_6->lock, VAR_7);
 return VAR_8;
}
