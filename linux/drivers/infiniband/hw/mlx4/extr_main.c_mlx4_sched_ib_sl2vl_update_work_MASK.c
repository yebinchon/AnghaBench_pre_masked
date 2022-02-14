
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int dummy; } ;
struct ib_event_work {int port; int work; struct mlx4_ib_dev* ib_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct ib_event_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;

void FUNC_3(struct mlx4_ib_dev *VAR_3,
         int VAR_4)
{
 struct ib_event_work *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5) {
  FUNC_0(&VAR_5->work, VAR_1);
  VAR_5->port = VAR_4;
  VAR_5->ib_dev = VAR_3;
  FUNC_2(VAR_2, &VAR_5->work);
 }
}
