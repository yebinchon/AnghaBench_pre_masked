
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_gid_table {int sz; int lock; TYPE_2__** data_vec; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {struct net_device* ndev; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;


 int FUNC_0 (struct ib_device*,int ,struct ib_gid_table*,int) ;
 int FUNC_1 (struct ib_device*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ib_gid_table* FUNC_5 (struct ib_device*,int ) ;

int FUNC_6(struct ib_device *VAR_0, u8 VAR_1,
         struct net_device *VAR_2)
{
 struct ib_gid_table *VAR_3;
 int VAR_4;
 bool VAR_5 = 0;

 VAR_3 = FUNC_5(VAR_0, VAR_1);

 FUNC_3(&VAR_3->lock);

 for (VAR_4 = 0; VAR_4 < VAR_3->sz; VAR_4++) {
  if (FUNC_2(VAR_3->data_vec[VAR_4]) &&
      VAR_3->data_vec[VAR_4]->attr.ndev == VAR_2) {
   FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
   VAR_5 = 1;
  }
 }

 FUNC_4(&VAR_3->lock);

 if (VAR_5)
  FUNC_1(VAR_0, VAR_1);

 return 0;
}
