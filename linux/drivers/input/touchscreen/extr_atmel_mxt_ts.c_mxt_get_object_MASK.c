
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mxt_object {scalar_t__ type; } ;
struct mxt_data {TYPE_2__* client; struct mxt_object* object_table; TYPE_1__* info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int object_num; } ;


 int FUNC_0 (int *,char*,scalar_t__) ;

__attribute__((used)) static struct mxt_object *
FUNC_1(struct mxt_data *VAR_0, u8 VAR_1)
{
 struct mxt_object *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->info->object_num; VAR_3++) {
  VAR_2 = VAR_0->object_table + VAR_3;
  if (VAR_2->type == VAR_1)
   return VAR_2;
 }

 FUNC_0(&VAR_0->client->dev, "Invalid object type T%u\n", VAR_1);
 return ((void*)0);
}
