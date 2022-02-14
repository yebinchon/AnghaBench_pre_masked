
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct idma64_lli {int ctllo; } ;
struct idma64_hw_desc {scalar_t__ len; int llp; struct idma64_lli* lli; } ;
struct idma64_desc {unsigned int ndesc; int length; int direction; struct idma64_hw_desc* hw; } ;
struct dma_slave_config {int dummy; } ;
struct idma64_chan {struct dma_slave_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct idma64_hw_desc*,struct dma_slave_config*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct idma64_chan *VAR_3,
  struct idma64_desc *VAR_4)
{
 struct dma_slave_config *VAR_5 = &VAR_3->config;
 unsigned int VAR_6 = VAR_4->ndesc;
 struct idma64_hw_desc *VAR_7 = &VAR_4->hw[VAR_6 - 1];
 struct idma64_lli *VAR_8 = VAR_7->lli;
 u64 VAR_9 = 0;


 do {
  VAR_7 = &VAR_4->hw[--VAR_6];
  FUNC_0(VAR_7, VAR_5, VAR_4->direction, VAR_9);
  VAR_9 = VAR_7->llp;
  VAR_4->length += VAR_7->len;
 } while (VAR_6);


 VAR_8->ctllo |= VAR_0;


 VAR_8->ctllo &= ~(VAR_2 | VAR_1);
}
