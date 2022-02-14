
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vio_remove_node_data {scalar_t__ node; int hp; } ;
struct vio_dev {int dummy; } ;
struct device {int dummy; } ;


 struct vio_dev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ,struct vio_dev*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct vio_dev *VAR_2 = FUNC_0(VAR_0);
 struct vio_remove_node_data *VAR_3;
 u64 VAR_4;

 VAR_3 = (struct vio_remove_node_data *)VAR_1;

 VAR_4 = FUNC_1(VAR_3->hp, VAR_2);

 if (VAR_4 == VAR_3->node)
  return 1;
 else
  return 0;
}
