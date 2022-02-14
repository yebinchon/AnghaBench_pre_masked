
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dcp_dma_desc {int dummy; } ;
struct dcp_async_ctx {int chan; } ;
struct dcp {int dev; scalar_t__ base; int * completion; TYPE_1__* coh; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct dcp_dma_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*,int const,int) ;
 int FUNC_5 (int ,struct dcp_dma_desc*,int,int ) ;
 int FUNC_6 (int ,int,int,int ) ;
 struct dcp* VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 unsigned long FUNC_10 (int *,int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct dcp_async_ctx *VAR_5)
{
 struct dcp *VAR_6 = VAR_4;
 const int VAR_7 = VAR_5->chan;
 uint32_t VAR_8;
 unsigned long VAR_9;
 struct dcp_dma_desc *VAR_10 = &VAR_6->coh->desc[VAR_5->chan];

 dma_addr_t VAR_11 = FUNC_5(VAR_6->dev, VAR_10, sizeof(*VAR_10),
           VAR_0);

 FUNC_9(&VAR_6->completion[VAR_7]);


 FUNC_11(0xffffffff, VAR_6->base + FUNC_3(VAR_7));


 FUNC_11(VAR_11, VAR_6->base + FUNC_0(VAR_7));


 FUNC_11(1, VAR_6->base + FUNC_1(VAR_7));

 VAR_9 = FUNC_10(&VAR_6->completion[VAR_7],
       FUNC_7(1000));
 if (!VAR_9) {
  FUNC_4(VAR_6->dev, "Channel %i timeout (DCP_STAT=0x%08x)\n",
   VAR_7, FUNC_8(VAR_6->base + VAR_3));
  return -VAR_2;
 }

 VAR_8 = FUNC_8(VAR_6->base + FUNC_2(VAR_7));
 if (VAR_8 & 0xff) {
  FUNC_4(VAR_6->dev, "Channel %i error (CH_STAT=0x%08x)\n",
   VAR_7, VAR_8);
  return -VAR_1;
 }

 FUNC_6(VAR_6->dev, VAR_11, sizeof(*VAR_10), VAR_0);

 return 0;
}
