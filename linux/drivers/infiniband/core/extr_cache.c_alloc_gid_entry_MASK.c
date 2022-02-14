
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ib_gid_table_entry {int state; int del_work; int attr; int kref; TYPE_1__* ndev_storage; } ;
struct ib_gid_attr {int ndev; } ;
struct TYPE_2__ {struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct ib_gid_table_entry*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct ib_gid_attr const*,int) ;
 struct net_device* FUNC_6 (int ,int) ;

__attribute__((used)) static struct ib_gid_table_entry *
FUNC_7(const struct ib_gid_attr *VAR_3)
{
 struct ib_gid_table_entry *VAR_4;
 struct net_device *VAR_5;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_6(VAR_3->ndev, 1);
 if (VAR_5) {
  VAR_4->ndev_storage = FUNC_4(sizeof(*VAR_4->ndev_storage),
           VAR_0);
  if (!VAR_4->ndev_storage) {
   FUNC_2(VAR_4);
   return ((void*)0);
  }
  FUNC_1(VAR_5);
  VAR_4->ndev_storage->ndev = VAR_5;
 }
 FUNC_3(&VAR_4->kref);
 FUNC_5(&VAR_4->attr, VAR_3, sizeof(*VAR_3));
 FUNC_0(&VAR_4->del_work, VAR_2);
 VAR_4->state = VAR_1;
 return VAR_4;
}
