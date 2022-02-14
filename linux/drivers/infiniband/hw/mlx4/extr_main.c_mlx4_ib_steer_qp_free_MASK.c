
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_ib_dev {scalar_t__ steering_support; scalar_t__ steer_qpn_base; int ib_uc_qpns_bitmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct mlx4_ib_dev *VAR_1, u32 VAR_2, int VAR_3)
{
 if (!VAR_2 ||
     VAR_1->steering_support != VAR_0)
  return;

 if (FUNC_0(VAR_2 < VAR_1->steer_qpn_base, "qpn = %u, steer_qpn_base = %u\n",
   VAR_2, VAR_1->steer_qpn_base))

  return;

 FUNC_1(VAR_1->ib_uc_qpns_bitmap,
         VAR_2 - VAR_1->steer_qpn_base,
         FUNC_2(VAR_3));
}
