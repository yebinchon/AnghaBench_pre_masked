
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int src_addr_widths; int dst_addr_widths; } ;
struct sun6i_dma_dev {TYPE_2__* cfg; TYPE_1__ slave; } ;
struct dma_slave_config {int src_addr_width; int dst_addr_width; int src_maxburst; int dst_maxburst; } ;
typedef int s8 ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
struct TYPE_4__ {int src_burst_lengths; int dst_burst_lengths; int (* set_burst_length ) (int*,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sun6i_dma_dev *VAR_3,
   struct dma_slave_config *VAR_4,
   enum dma_transfer_direction VAR_5,
   u32 *VAR_6)
{
 enum dma_slave_buswidth VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 s8 VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_7 = VAR_4->src_addr_width;
 VAR_8 = VAR_4->dst_addr_width;
 VAR_9 = VAR_4->src_maxburst;
 VAR_10 = VAR_4->dst_maxburst;

 switch (VAR_5) {
 case 128:
  if (VAR_7 == VAR_1)
   VAR_7 = VAR_0;
  VAR_9 = VAR_9 ? VAR_9 : 8;
  break;
 case 129:
  if (VAR_8 == VAR_1)
   VAR_8 = VAR_0;
  VAR_10 = VAR_10 ? VAR_10 : 8;
  break;
 default:
  return -VAR_2;
 }

 if (!(FUNC_0(VAR_7) & VAR_3->slave.src_addr_widths))
  return -VAR_2;
 if (!(FUNC_0(VAR_8) & VAR_3->slave.dst_addr_widths))
  return -VAR_2;
 if (!(FUNC_0(VAR_9) & VAR_3->cfg->src_burst_lengths))
  return -VAR_2;
 if (!(FUNC_0(VAR_10) & VAR_3->cfg->dst_burst_lengths))
  return -VAR_2;

 VAR_11 = FUNC_4(VAR_7);
 VAR_12 = FUNC_4(VAR_8);
 VAR_14 = FUNC_3(VAR_10);
 VAR_13 = FUNC_3(VAR_9);

 *VAR_6 = FUNC_2(VAR_11) |
  FUNC_1(VAR_12);

 VAR_3->cfg->set_burst_length(VAR_6, VAR_13, VAR_14);

 return 0;
}
