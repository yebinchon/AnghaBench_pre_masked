
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_dev {int pvid; int update_sl; } ;
struct ocrdma_ae_pvid_mcqe {int tag_enabled; } ;
struct ocrdma_ae_mcqe {int valid_ae_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_6,
     struct ocrdma_ae_mcqe *VAR_7)
{
 struct ocrdma_ae_pvid_mcqe *VAR_8;
 int VAR_9 = (VAR_7->valid_ae_event & VAR_0) >>
   VAR_1;

 switch (VAR_9) {
 case 128:
  VAR_8 = (struct ocrdma_ae_pvid_mcqe *)VAR_7;
  if ((VAR_8->tag_enabled & VAR_2) >>
   VAR_3)
   VAR_6->pvid = ((VAR_8->tag_enabled &
     VAR_4) >>
     VAR_5);
  break;

 case 129:
  FUNC_0(&VAR_6->update_sl, 1);
  break;
 default:

  break;
 }
}
