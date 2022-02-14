
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i40iw_sc_qp {int term_flags; scalar_t__ back_qp; } ;
struct i40iw_qp {int lock; scalar_t__ hte_added; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40iw_qp*) ;
 int FUNC_1 (struct i40iw_qp*,int ,int,int ,int ) ;
 int FUNC_2 (struct i40iw_sc_qp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct i40iw_sc_qp *VAR_3, int VAR_4)
{
 struct i40iw_qp *VAR_5;
 u32 VAR_6 = VAR_1;
 u8 VAR_7 = 0;
 bool VAR_8;
 unsigned long VAR_9;

 VAR_5 = (struct i40iw_qp *)VAR_3->back_qp;
 FUNC_3(&VAR_5->lock, VAR_9);
 if (VAR_5->hte_added) {
  VAR_5->hte_added = 0;
  VAR_7 = 1;
 }
 VAR_8 = !(VAR_3->term_flags & VAR_2);
 VAR_3->term_flags |= VAR_2;
 FUNC_4(&VAR_5->lock, VAR_9);
 if (VAR_8) {
  if (!VAR_4)
   FUNC_2(VAR_3);
  else
   VAR_6 = VAR_0;

  FUNC_1(VAR_5, VAR_6, VAR_7, 0, 0);
  FUNC_0(VAR_5);
 }
}
