
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spcl_sge_cnt_emb; } ;
struct ocrdma_mqe {TYPE_1__ hdr; } ;
struct ocrdma_mbx_rsp {int status; int subsys_op; } ;
struct ocrdma_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_7, struct ocrdma_mqe *VAR_8,
     void *VAR_9)
{
 int VAR_10;
 struct ocrdma_mbx_rsp *VAR_11 = VAR_9;

 if ((VAR_8->hdr.spcl_sge_cnt_emb & VAR_5) >>
    VAR_6)
  FUNC_0();

 VAR_10 = FUNC_2(VAR_7, VAR_8);
 if (!VAR_10)



  if (VAR_11->status & VAR_2)
   VAR_10 = FUNC_1(VAR_11->status);

 if (VAR_10)
  FUNC_3("opcode=0x%x, subsystem=0x%x\n",
         (VAR_11->subsys_op & VAR_0) >>
   VAR_1,
   (VAR_11->subsys_op & VAR_3) >>
   VAR_4);
 return VAR_10;
}
