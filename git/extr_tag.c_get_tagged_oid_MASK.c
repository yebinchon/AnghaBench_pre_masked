
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {TYPE_1__* tagged; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {struct object_id oid; } ;


 int FUNC_0 (char*) ;

struct object_id *FUNC_1(struct tag *VAR_0)
{
 if (!VAR_0->tagged)
  FUNC_0("bad tag");
 return &VAR_0->tagged->oid;
}
