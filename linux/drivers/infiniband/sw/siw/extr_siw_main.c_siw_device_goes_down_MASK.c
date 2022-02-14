
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_device {int netdev_down; int base_dev; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct siw_device *VAR_1)
{
 if (FUNC_1(&VAR_1->base_dev)) {
  FUNC_0(&VAR_1->netdev_down, VAR_0);
  FUNC_2(&VAR_1->netdev_down);
 }
}
