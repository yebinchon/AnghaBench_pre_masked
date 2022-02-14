
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; struct object_array_entry* objects; } ;
struct rev_info {int diffopt; TYPE_1__ pending; } ;
struct object_array_entry {int name; TYPE_2__* item; } ;
struct TYPE_4__ {int oid; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct rev_info*,int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

int FUNC_9(struct rev_info *VAR_0, int VAR_1)
{
 struct object_array_entry *VAR_2;

 if (VAR_0->pending.nr != 1)
  FUNC_0("run_diff_index must be passed exactly one tree");

 FUNC_7();
 VAR_2 = VAR_0->pending.objects;
 if (FUNC_1(VAR_0, &VAR_2->item->oid, VAR_2->name, VAR_1))
  FUNC_6(128);

 FUNC_3(&VAR_0->diffopt, "c/", VAR_1 ? "i/" : "w/");
 FUNC_4();
 FUNC_5(&VAR_0->diffopt);
 FUNC_2(&VAR_0->diffopt);
 FUNC_8("diff-index");
 return 0;
}
