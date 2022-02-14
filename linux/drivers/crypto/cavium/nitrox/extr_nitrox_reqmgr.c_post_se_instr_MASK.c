
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nitrox_softreq {int tstamp; int status; int instr; struct nitrox_device* ndev; } ;
struct TYPE_2__ {int posted; } ;
struct nitrox_device {TYPE_1__ stats; int qlen; } ;
struct nitrox_cmdq {int write_idx; int instr_size; int cmd_qlock; int dbell_csr_addr; int * base; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct nitrox_softreq*,struct nitrox_cmdq*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct nitrox_softreq *VAR_2,
     struct nitrox_cmdq *VAR_3)
{
 struct nitrox_device *VAR_4 = VAR_2->ndev;
 int VAR_5;
 u8 *VAR_6;

 FUNC_6(&VAR_3->cmd_qlock);

 VAR_5 = VAR_3->write_idx;

 VAR_6 = VAR_3->base + (VAR_5 * VAR_3->instr_size);
 FUNC_4(VAR_6, &VAR_2->instr, VAR_3->instr_size);

 FUNC_1(&VAR_2->status, VAR_0);
 FUNC_5(VAR_2, VAR_3);
 VAR_2->tstamp = VAR_1;

 FUNC_2();


 FUNC_8(1, VAR_3->dbell_csr_addr);

 VAR_3->write_idx = FUNC_3(VAR_5, 1, VAR_4->qlen);

 FUNC_7(&VAR_3->cmd_qlock);


 FUNC_0(&VAR_4->stats.posted);
}
