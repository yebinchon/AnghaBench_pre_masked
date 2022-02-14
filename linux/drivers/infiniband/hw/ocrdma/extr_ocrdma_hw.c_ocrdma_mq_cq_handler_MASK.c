
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_mcqe {int valid_ae_cmpl_cons; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct ocrdma_dev {TYPE_2__ mq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocrdma_mcqe*,int ,int) ;
 struct ocrdma_mcqe* FUNC_1 (struct ocrdma_dev*) ;
 int FUNC_2 (struct ocrdma_mcqe*,int) ;
 int FUNC_3 (struct ocrdma_dev*) ;
 int FUNC_4 (struct ocrdma_dev*,struct ocrdma_mcqe*) ;
 int FUNC_5 (struct ocrdma_dev*,struct ocrdma_mcqe*) ;
 int FUNC_6 (struct ocrdma_dev*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct ocrdma_dev *VAR_2, u16 VAR_3)
{
 u16 VAR_4 = 0;
 struct ocrdma_mcqe *VAR_5;

 while (1) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 == ((void*)0))
   break;
  FUNC_2(VAR_5, sizeof(*VAR_5));
  VAR_4 += 1;
  if (VAR_5->valid_ae_cmpl_cons & VAR_0)
   FUNC_4(VAR_2, VAR_5);
  else if (VAR_5->valid_ae_cmpl_cons & VAR_1)
   FUNC_5(VAR_2, VAR_5);
  FUNC_0(VAR_5, 0, sizeof(struct ocrdma_mcqe));
  FUNC_3(VAR_2);
 }
 FUNC_6(VAR_2, VAR_2->mq.cq.id, 1, 0, VAR_4);
 return 0;
}
