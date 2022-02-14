
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_pxa_data {int dma_cookie; int dma_chan; } ;
struct dma_tx_state {int dummy; } ;
struct ata_port {struct pata_pxa_data* private_data; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct dma_tx_state*) ;

__attribute__((used)) static unsigned char FUNC_1(struct ata_port *VAR_3)
{
 struct pata_pxa_data *VAR_4 = VAR_3->private_data;
 unsigned char VAR_5 = VAR_1;
 struct dma_tx_state VAR_6;
 enum dma_status VAR_7;

 VAR_7 = FUNC_0(VAR_4->dma_chan, VAR_4->dma_cookie, &VAR_6);
 if (VAR_7 != VAR_2)
  VAR_5 |= VAR_0;

 return VAR_5;
}
