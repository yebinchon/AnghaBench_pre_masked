
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ifla_vf_stats {void* multicast; void* tx_bytes; void* rx_bytes; void* tx_packets; void* rx_packets; } ;
struct ib_device {int dummy; } ;
struct TYPE_6__ {int packets; } ;
struct TYPE_5__ {int octets; int packets; } ;
struct TYPE_4__ {int octets; int packets; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int,int,int ,void*,int) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 struct mlx5_ib_dev* FUNC_5 (struct ib_device*) ;
 TYPE_1__ VAR_5 ;

int FUNC_6(struct ib_device *VAR_6, int VAR_7,
    u8 VAR_8, struct ifla_vf_stats *VAR_9)
{
 int VAR_10 = FUNC_1(VAR_2);
 struct mlx5_core_dev *VAR_11;
 struct mlx5_ib_dev *VAR_12;
 void *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(VAR_6);
 VAR_11 = VAR_12->mdev;

 VAR_13 = FUNC_3(VAR_10, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_4(VAR_11, 1, VAR_7, VAR_8, VAR_13, VAR_10);
 if (VAR_14)
  goto ex;

 VAR_9->rx_packets = FUNC_0(VAR_2, VAR_13, VAR_4.packets);
 VAR_9->tx_packets = FUNC_0(VAR_2, VAR_13, VAR_5.packets);
 VAR_9->rx_bytes = FUNC_0(VAR_2, VAR_13, VAR_4.octets);
 VAR_9->tx_bytes = FUNC_0(VAR_2, VAR_13, VAR_5.octets);
 VAR_9->multicast = FUNC_0(VAR_2, VAR_13, VAR_3.packets);

ex:
 FUNC_2(VAR_13);
 return VAR_14;
}
