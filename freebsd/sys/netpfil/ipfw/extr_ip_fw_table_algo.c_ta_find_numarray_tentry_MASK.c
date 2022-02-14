
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct numarray_cfg {int dummy; } ;
struct numarray {int dummy; } ;
struct TYPE_5__ {int key; } ;
struct TYPE_6__ {TYPE_1__ k; } ;
typedef TYPE_2__ ipfw_obj_tentry ;


 int VAR_0 ;
 struct numarray* FUNC_0 (struct table_info*,int *) ;
 int FUNC_1 (void*,struct table_info*,struct numarray*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, struct table_info *VAR_2,
    ipfw_obj_tentry *VAR_3)
{
 struct numarray_cfg *VAR_4;
 struct numarray *VAR_5;

 VAR_4 = (struct numarray_cfg *)VAR_1;

 VAR_5 = FUNC_0(VAR_2, &VAR_3->k.key);

 if (VAR_5 != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2, VAR_5, VAR_3);
  return (0);
 }

 return (VAR_0);
}
