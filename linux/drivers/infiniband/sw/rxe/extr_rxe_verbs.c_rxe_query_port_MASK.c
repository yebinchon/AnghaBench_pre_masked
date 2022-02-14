
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_attr {scalar_t__ state; int phys_state; int active_width; int active_speed; } ;
struct rxe_port {struct ib_port_attr attr; } ;
struct rxe_dev {int usdev_lock; int ndev; struct rxe_port port; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rxe_dev* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_5,
     u8 VAR_6, struct ib_port_attr *VAR_7)
{
 struct rxe_dev *VAR_8 = FUNC_4(VAR_5);
 struct rxe_port *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_8->port;


 *VAR_7 = VAR_9->attr;

 FUNC_2(&VAR_8->usdev_lock);
 VAR_10 = FUNC_1(VAR_5, VAR_6, &VAR_7->active_speed,
         &VAR_7->active_width);

 if (VAR_7->state == VAR_0)
  VAR_7->phys_state = VAR_2;
 else if (FUNC_0(VAR_8->ndev) & VAR_4)
  VAR_7->phys_state = VAR_3;
 else
  VAR_7->phys_state = VAR_1;

 FUNC_3(&VAR_8->usdev_lock);

 return VAR_10;
}
