
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp {int qpn; } ;
typedef enum mlx4_event { ____Placeholder_mlx4_event } mlx4_event ;


 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_qp *VAR_0, enum mlx4_event VAR_1)
{
 FUNC_0("Unexpected event type %d on WQ 0x%06x. Events are not supported for WQs\n",
       VAR_1, VAR_0->qpn);
}
