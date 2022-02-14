
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct numarray {int value; int number; } ;
struct TYPE_6__ {int kidx; } ;
struct TYPE_5__ {int key; } ;
struct TYPE_7__ {TYPE_2__ v; TYPE_1__ k; } ;
typedef TYPE_3__ ipfw_obj_tentry ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, struct table_info *VAR_1, void *VAR_2,
    ipfw_obj_tentry *VAR_3)
{
 struct numarray *VAR_4;

 VAR_4 = (struct numarray *)VAR_2;

 VAR_3->k.key = VAR_4->number;
 VAR_3->v.kidx = VAR_4->value;

 return (0);
}
