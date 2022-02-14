
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_pack_object {scalar_t__ offset; TYPE_1__* object; } ;
struct TYPE_2__ {int oid; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct in_pack_object *VAR_2 = (struct in_pack_object *)VAR_0;
 struct in_pack_object *VAR_3 = (struct in_pack_object *)VAR_1;

 if (VAR_2->offset < VAR_3->offset)
  return -1;
 else if (VAR_2->offset > VAR_3->offset)
  return 1;
 else
  return FUNC_0(&VAR_2->object->oid, &VAR_3->object->oid);
}
