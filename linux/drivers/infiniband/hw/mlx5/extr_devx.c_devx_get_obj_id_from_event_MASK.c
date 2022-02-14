
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int cqn; } ;
struct TYPE_7__ {int dctn; } ;
struct TYPE_6__ {int type_xrqn; } ;
struct TYPE_9__ {int qp_srq_n; } ;
struct TYPE_10__ {TYPE_3__ cq_err; TYPE_2__ dct; TYPE_1__ xrq_err; TYPE_4__ qp_srq; } ;
struct mlx5_eqe {TYPE_5__ data; } ;
 int FUNC_0 (int ,TYPE_5__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(unsigned long VAR_1, void *VAR_2)
{
 struct mlx5_eqe *VAR_3 = VAR_2;
 u32 VAR_4 = 0;

 switch (VAR_1) {
 case 134:
 case 132:
 case 137:
 case 141:
 case 135:
 case 133:
 case 130:
 case 136:
 case 129:
 case 131:
  VAR_4 = FUNC_1(VAR_3->data.qp_srq.qp_srq_n) & 0xffffff;
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_3->data.xrq_err.type_xrqn) & 0xffffff;
  break;
 case 139:
 case 138:
  VAR_4 = FUNC_1(VAR_3->data.dct.dctn) & 0xffffff;
  break;
 case 140:
  VAR_4 = FUNC_1(VAR_3->data.cq_err.cqn) & 0xffffff;
  break;
 default:
  VAR_4 = FUNC_0(VAR_0, &VAR_3->data, VAR_4);
  break;
 }

 return VAR_4;
}
