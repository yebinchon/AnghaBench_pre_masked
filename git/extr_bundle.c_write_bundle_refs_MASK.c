
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr; struct object_array_entry* objects; } ;
struct rev_info {int repo; TYPE_1__ pending; } ;
struct object_id {int dummy; } ;
struct object_array_entry {char const* name; TYPE_3__* item; } ;
struct object {int flags; } ;
struct TYPE_6__ {int flags; scalar_t__ type; int oid; } ;
struct commit {TYPE_3__ object; } ;
struct TYPE_5__ {int hexsz; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rev_info*,struct object*,char*) ;
 int FUNC_2 (char const*,int,struct object_id*,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,struct rev_info*) ;
 struct commit* FUNC_5 (int ,struct object_id*) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (struct object_id*,int *) ;
 struct object* FUNC_8 (struct object_id*,char*) ;
 scalar_t__ FUNC_9 (char const*,int ,struct object_id*,int*) ;
 int FUNC_10 (char const*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int,char const*,int) ;

__attribute__((used)) static int FUNC_13(int VAR_7, struct rev_info *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_8->pending.nr; VAR_9++) {
  struct object_array_entry *VAR_11 = VAR_8->pending.objects + VAR_9;
  struct object_id VAR_12;
  char *VAR_13;
  const char *VAR_14;
  int VAR_15;

  if (VAR_11->item->flags & VAR_5)
   continue;
  if (FUNC_2(VAR_11->name, FUNC_10(VAR_11->name), &VAR_12, &VAR_13) != 1)
   goto skip_write_ref;
  if (FUNC_9(VAR_11->name, VAR_3, &VAR_12, &VAR_15))
   VAR_15 = 0;
  VAR_14 = (VAR_15 & VAR_2) ? VAR_11->name : VAR_13;

  if (VAR_11->item->type == VAR_1 &&
    !FUNC_4(VAR_11->item, VAR_8)) {
   VAR_11->item->flags |= VAR_5;
   goto skip_write_ref;
  }
  if (!(VAR_11->item->flags & VAR_4) && VAR_11->item->type == VAR_0) {
   FUNC_11(FUNC_0("ref '%s' is excluded by the rev-list options"),
    VAR_11->name);
   goto skip_write_ref;
  }






  if (!FUNC_7(&VAR_12, &VAR_11->item->oid)) {





   struct commit *VAR_16 = FUNC_5(VAR_8->repo, &VAR_12);
   struct object *VAR_17;

   if (VAR_11->item == &(VAR_16->object)) {
    VAR_17 = FUNC_8(&VAR_12, VAR_11->name);
    VAR_17->flags |= VAR_4;
    FUNC_1(VAR_8, VAR_17, VAR_11->name);
   }
   goto skip_write_ref;
  }

  VAR_10++;
  FUNC_12(VAR_7, FUNC_6(&VAR_11->item->oid), VAR_6->hexsz);
  FUNC_12(VAR_7, " ", 1);
  FUNC_12(VAR_7, VAR_14, FUNC_10(VAR_14));
  FUNC_12(VAR_7, "\n", 1);
 skip_write_ref:
  FUNC_3(VAR_13);
 }


 FUNC_12(VAR_7, "\n", 1);
 return VAR_10;
}
