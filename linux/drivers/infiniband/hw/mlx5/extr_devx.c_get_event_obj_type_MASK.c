
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ qp_srq; } ;
struct mlx5_eqe {TYPE_2__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u16 FUNC_1(unsigned long VAR_3, struct mlx5_eqe *VAR_4)
{
 switch (VAR_3) {
 case 130:
 case 131:
 case 129:
 case 133:
 case 137:
 case 136:
 case 141:
 case 135:
 case 132:
 case 134:
  return VAR_4->data.qp_srq.type;
 case 140:
 case 128:
  return 0;
 case 139:
 case 138:
  return VAR_0;
 default:
  return FUNC_0(VAR_1, &VAR_4->data, VAR_2);
 }
}
