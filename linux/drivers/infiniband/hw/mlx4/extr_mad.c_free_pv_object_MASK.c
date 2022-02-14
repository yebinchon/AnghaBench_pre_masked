
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* demux; } ;
struct mlx4_ib_dev {TYPE_2__ sriov; } ;
struct TYPE_3__ {int ** tun; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->sriov.demux[VAR_2 - 1].tun[VAR_1]) {
  FUNC_0(VAR_0->sriov.demux[VAR_2 - 1].tun[VAR_1]);
  VAR_0->sriov.demux[VAR_2 - 1].tun[VAR_1] = ((void*)0);
 }
}
