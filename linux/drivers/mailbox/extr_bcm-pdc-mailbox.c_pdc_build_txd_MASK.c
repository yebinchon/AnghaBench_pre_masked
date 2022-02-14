
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pdc_state {size_t txout; int ntxpost; int pdc_idx; struct dma64dd* txd_64; TYPE_1__* pdev; } ;
struct dma64dd {void* ctrl2; void* ctrl1; void* addrhigh; void* addrlow; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 size_t FUNC_0 (size_t,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,size_t,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void
FUNC_5(struct pdc_state *VAR_0, dma_addr_t VAR_1, u32 VAR_2,
       u32 VAR_3)
{
 struct device *VAR_4 = &VAR_0->pdev->dev;
 struct dma64dd *VAR_5 = &VAR_0->txd_64[VAR_0->txout];

 FUNC_2(VAR_4,
  "Writing tx descriptor for PDC %u at index %u with length %u, flags %#x\n",
  VAR_0->pdc_idx, VAR_0->txout, VAR_2, VAR_3);

 VAR_5->addrlow = FUNC_1(FUNC_3(VAR_1));
 VAR_5->addrhigh = FUNC_1(FUNC_4(VAR_1));
 VAR_5->ctrl1 = FUNC_1(VAR_3);
 VAR_5->ctrl2 = FUNC_1(VAR_2);


 VAR_0->txout = FUNC_0(VAR_0->txout, VAR_0->ntxpost);
}
