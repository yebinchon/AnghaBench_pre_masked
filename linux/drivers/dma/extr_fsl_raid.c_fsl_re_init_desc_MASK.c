
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fmt32; int addr_low; int lbea32; } ;
struct TYPE_4__ {int tx_submit; } ;
struct fsl_re_desc {int cf_paddr; int cdb_paddr; void* cdb_addr; void* cf_addr; TYPE_1__ hwdesc; int node; TYPE_2__ async_tx; struct fsl_re_chan* re_chan; } ;
struct fsl_re_chan {int chan; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static struct fsl_re_desc *FUNC_4(struct fsl_re_chan *VAR_4,
         struct fsl_re_desc *VAR_5,
         void *VAR_6, dma_addr_t VAR_7)
{
 VAR_5->re_chan = VAR_4;
 VAR_5->async_tx.tx_submit = VAR_3;
 FUNC_1(&VAR_5->async_tx, &VAR_4->chan);
 FUNC_0(&VAR_5->node);

 VAR_5->hwdesc.fmt32 = VAR_1 << VAR_2;
 VAR_5->hwdesc.lbea32 = FUNC_3(VAR_7);
 VAR_5->hwdesc.addr_low = FUNC_2(VAR_7);
 VAR_5->cf_addr = VAR_6;
 VAR_5->cf_paddr = VAR_7;

 VAR_5->cdb_addr = (void *)(VAR_6 + VAR_0);
 VAR_5->cdb_paddr = VAR_7 + VAR_0;

 return VAR_5;
}
