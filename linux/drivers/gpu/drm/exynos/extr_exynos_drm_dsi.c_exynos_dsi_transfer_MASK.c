
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_packet {int payload; scalar_t__ payload_length; int header; } ;
struct exynos_dsi_transfer {int result; struct mipi_dsi_packet packet; int completed; int list; scalar_t__ rx_done; scalar_t__ tx_done; } ;
struct exynos_dsi {int dev; int transfer_lock; int transfer_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ,int,int ) ;
 int FUNC_1 (struct exynos_dsi*,struct exynos_dsi_transfer*) ;
 int FUNC_2 (struct exynos_dsi*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct exynos_dsi *VAR_2,
     struct exynos_dsi_transfer *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;

 VAR_3->tx_done = 0;
 VAR_3->rx_done = 0;
 VAR_3->result = -VAR_1;
 FUNC_3(&VAR_3->completed);

 FUNC_7(&VAR_2->transfer_lock, VAR_4);

 VAR_5 = FUNC_5(&VAR_2->transfer_list);
 FUNC_4(&VAR_3->list, &VAR_2->transfer_list);

 FUNC_8(&VAR_2->transfer_lock, VAR_4);

 if (VAR_5)
  FUNC_2(VAR_2);

 FUNC_9(&VAR_3->completed,
        FUNC_6(VAR_0));
 if (VAR_3->result == -VAR_1) {
  struct mipi_dsi_packet *VAR_6 = &VAR_3->packet;
  FUNC_1(VAR_2, VAR_3);
  FUNC_0(VAR_2->dev, "xfer timed out: %*ph %*ph\n", 4, VAR_6->header,
   (int)VAR_6->payload_length, VAR_6->payload);
  return -VAR_1;
 }


 return VAR_3->result;
}
