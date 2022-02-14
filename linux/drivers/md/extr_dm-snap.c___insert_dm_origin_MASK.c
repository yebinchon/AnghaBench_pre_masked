
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct dm_origin {int hash_list; TYPE_1__* dev; } ;
struct TYPE_2__ {int bdev; } ;


 struct list_head* VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dm_origin *VAR_1)
{
 struct list_head *VAR_2 = &VAR_0[FUNC_1(VAR_1->dev->bdev)];
 FUNC_0(&VAR_1->hash_list, VAR_2);
}
