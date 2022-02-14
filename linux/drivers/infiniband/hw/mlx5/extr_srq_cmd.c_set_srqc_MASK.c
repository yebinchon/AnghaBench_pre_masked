
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_srq_attr {int flags; int log_page_size; int wqe_shift; int log_size; int page_offset; int lwm; int pd; int xrcd; int cqn; int db_record; } ;


 int FUNC_0 (void*,void*,int ,int) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(void *VAR_11, struct mlx5_srq_attr *VAR_12)
{
 FUNC_0(VAR_11, VAR_11, VAR_9, !!(VAR_12->flags
   & VAR_0));
 FUNC_0(VAR_11, VAR_11, VAR_3, VAR_12->log_page_size);
 FUNC_0(VAR_11, VAR_11, VAR_4, VAR_12->wqe_shift);
 FUNC_0(VAR_11, VAR_11, VAR_5, VAR_12->log_size);
 FUNC_0(VAR_11, VAR_11, VAR_7, VAR_12->page_offset);
 FUNC_0(VAR_11, VAR_11, VAR_6, VAR_12->lwm);
 FUNC_0(VAR_11, VAR_11, VAR_8, VAR_12->pd);
 FUNC_1(VAR_11, VAR_11, VAR_2, VAR_12->db_record);
 FUNC_0(VAR_11, VAR_11, VAR_10, VAR_12->xrcd);
 FUNC_0(VAR_11, VAR_11, VAR_1, VAR_12->cqn);
}
