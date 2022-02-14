
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hidma_mgmt_dev {int max_write_request; int max_read_request; int max_wr_xactions; int max_rd_xactions; unsigned int dma_channels; int* priority; int* weight; int hw_version; int hw_version_major; int hw_version_minor; int chreset_timeout_cycles; TYPE_1__* pdev; scalar_t__ virtaddr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

int FUNC_7(struct hidma_mgmt_dev *VAR_16)
{
 unsigned int VAR_17;
 u32 VAR_18;

 if (!FUNC_1(VAR_16->max_write_request) ||
     (VAR_16->max_write_request < 128) ||
     (VAR_16->max_write_request > 1024)) {
  FUNC_0(&VAR_16->pdev->dev, "invalid write request %d\n",
   VAR_16->max_write_request);
  return -VAR_0;
 }

 if (!FUNC_1(VAR_16->max_read_request) ||
     (VAR_16->max_read_request < 128) ||
     (VAR_16->max_read_request > 1024)) {
  FUNC_0(&VAR_16->pdev->dev, "invalid read request %d\n",
   VAR_16->max_read_request);
  return -VAR_0;
 }

 if (VAR_16->max_wr_xactions > VAR_10) {
  FUNC_0(&VAR_16->pdev->dev,
   "max_wr_xactions cannot be bigger than %ld\n",
   VAR_10);
  return -VAR_0;
 }

 if (VAR_16->max_rd_xactions > VAR_8) {
  FUNC_0(&VAR_16->pdev->dev,
   "max_rd_xactions cannot be bigger than %ld\n",
   VAR_8);
  return -VAR_0;
 }

 for (VAR_17 = 0; VAR_17 < VAR_16->dma_channels; VAR_17++) {
  if (VAR_16->priority[VAR_17] > 1) {
   FUNC_0(&VAR_16->pdev->dev,
    "priority can be 0 or 1\n");
   return -VAR_0;
  }

  if (VAR_16->weight[VAR_17] > VAR_7) {
   FUNC_0(&VAR_16->pdev->dev,
    "max value of weight can be %d.\n",
    VAR_7);
   return -VAR_0;
  }


  if (VAR_16->weight[VAR_17] == 0)
   VAR_16->weight[VAR_17] = 1;
 }

 FUNC_2(&VAR_16->pdev->dev);
 VAR_18 = FUNC_5(VAR_16->virtaddr + VAR_5);
 VAR_18 &= ~(VAR_4 << VAR_6);
 VAR_18 |= VAR_16->max_write_request << VAR_6;
 VAR_18 &= ~VAR_4;
 VAR_18 |= VAR_16->max_read_request;
 FUNC_6(VAR_18, VAR_16->virtaddr + VAR_5);

 VAR_18 = FUNC_5(VAR_16->virtaddr + VAR_11);
 VAR_18 &= ~(VAR_10 << VAR_9);
 VAR_18 |= VAR_16->max_wr_xactions << VAR_9;
 VAR_18 &= ~VAR_8;
 VAR_18 |= VAR_16->max_rd_xactions;
 FUNC_6(VAR_18, VAR_16->virtaddr + VAR_11);

 VAR_16->hw_version =
     FUNC_5(VAR_16->virtaddr + VAR_3);
 VAR_16->hw_version_major = (VAR_16->hw_version >> 28) & 0xF;
 VAR_16->hw_version_minor = (VAR_16->hw_version >> 16) & 0xF;

 for (VAR_17 = 0; VAR_17 < VAR_16->dma_channels; VAR_17++) {
  u32 VAR_19 = VAR_16->weight[VAR_17];
  u32 VAR_20 = VAR_16->priority[VAR_17];

  VAR_18 = FUNC_5(VAR_16->virtaddr + VAR_13 + (4 * VAR_17));
  VAR_18 &= ~(1 << VAR_12);
  VAR_18 |= (VAR_20 & 0x1) << VAR_12;
  VAR_18 &= ~(VAR_14 << VAR_15);
  VAR_18 |= (VAR_19 & VAR_14) << VAR_15;
  FUNC_6(VAR_18, VAR_16->virtaddr + VAR_13 + (4 * VAR_17));
 }

 VAR_18 = FUNC_5(VAR_16->virtaddr + VAR_2);
 VAR_18 &= ~VAR_1;
 VAR_18 |= VAR_16->chreset_timeout_cycles & VAR_1;
 FUNC_6(VAR_18, VAR_16->virtaddr + VAR_2);

 FUNC_3(&VAR_16->pdev->dev);
 FUNC_4(&VAR_16->pdev->dev);
 return 0;
}
