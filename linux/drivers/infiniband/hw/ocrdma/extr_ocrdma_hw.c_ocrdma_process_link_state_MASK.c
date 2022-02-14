
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocrdma_dev {int flags; } ;
struct ocrdma_ae_mcqe {int dummy; } ;
struct ocrdma_ae_lnkst_mcqe {int speed_state_ptn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocrdma_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_3,
          struct ocrdma_ae_mcqe *VAR_4)
{
 struct ocrdma_ae_lnkst_mcqe *VAR_5;
 u8 VAR_6;

 VAR_5 = (struct ocrdma_ae_lnkst_mcqe *)VAR_4;
 VAR_6 = FUNC_0(VAR_5->speed_state_ptn);

 if (!(VAR_6 & VAR_0))
  return;

 if (VAR_3->flags & VAR_1)
  FUNC_1(VAR_3, (VAR_6 & VAR_2));
}
