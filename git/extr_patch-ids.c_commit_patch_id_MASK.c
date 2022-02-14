
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct diff_options {int dummy; } ;
struct TYPE_8__ {int oid; } ;
struct commit {TYPE_4__ object; TYPE_3__* parents; } ;
struct TYPE_7__ {TYPE_2__* item; } ;
struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_1__ object; } ;


 int FUNC_0 (struct diff_options*,struct object_id*,int,int) ;
 int FUNC_1 (int *,char*,struct diff_options*) ;
 int FUNC_2 (int *,int *,char*,struct diff_options*) ;
 int FUNC_3 (struct diff_options*) ;
 int FUNC_4 (struct commit*) ;

int FUNC_5(struct commit *VAR_0, struct diff_options *VAR_1,
      struct object_id *VAR_2, int VAR_3, int VAR_4)
{
 if (!FUNC_4(VAR_0))
  return -1;

 if (VAR_0->parents)
  FUNC_2(&VAR_0->parents->item->object.oid,
         &VAR_0->object.oid, "", VAR_1);
 else
  FUNC_1(&VAR_0->object.oid, "", VAR_1);
 FUNC_3(VAR_1);
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
