
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int dummy; } ;
struct tag {char const* tag; } ;
struct setup_revision_opt {char* def; int tweak; } ;
struct TYPE_4__ {int nr; int alloc; struct object_array_entry* objects; } ;
struct TYPE_3__ {int stat_width; int file; } ;
struct rev_info {int diff; int always_show_header; int shown_one; TYPE_2__ pending; TYPE_1__ diffopt; int no_walk; } ;
struct pathspec {char* def; int tweak; } ;
struct object_id {int dummy; } ;
struct object_array_entry {char* name; struct object* item; } ;
struct object {int type; int oid; } ;
typedef int opt ;
typedef int match_all ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct object*,char const*,TYPE_2__*) ;
 int FUNC_2 (int,char const**,char const*,struct rev_info*,struct setup_revision_opt*) ;
 int FUNC_3 (struct rev_info*) ;
 char* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,char*,char const*,char*) ;
 int FUNC_7 (struct object_array_entry*) ;
 struct object_id* FUNC_8 (struct tag*) ;
 int FUNC_9 (int ,int *) ;
 int VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 (struct setup_revision_opt*,int ,int) ;
 int FUNC_12 (struct object_id*) ;
 struct object* FUNC_13 (int ,struct object_id*) ;
 int FUNC_14 (char) ;
 int FUNC_15 (int ,struct tree*,char*,int ,int ,struct setup_revision_opt*,int ,int ) ;
 int FUNC_16 (int ,struct rev_info*,char const*) ;
 int FUNC_17 (int *,struct rev_info*,char const*) ;
 int VAR_4 ;
 int FUNC_18 (int *,struct rev_info*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_19(int VAR_7, const char **VAR_8, const char *VAR_9)
{
 struct rev_info VAR_10;
 struct object_array_entry *VAR_11;
 struct setup_revision_opt VAR_12;
 struct pathspec VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 FUNC_10();
 FUNC_9(VAR_3, ((void*)0));

 FUNC_11(&VAR_13, 0, sizeof(VAR_13));
 FUNC_16(VAR_6, &VAR_10, VAR_9);
 VAR_10.diff = 1;
 VAR_10.always_show_header = 1;
 VAR_10.no_walk = VAR_2;
 VAR_10.diffopt.stat_width = -1;

 FUNC_11(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.def = "HEAD";
 VAR_12.tweak = VAR_4;
 FUNC_2(VAR_7, VAR_8, VAR_9, &VAR_10, &VAR_12);

 if (!VAR_10.no_walk)
  return FUNC_3(&VAR_10);

 VAR_15 = VAR_10.pending.nr;
 VAR_11 = VAR_10.pending.objects;
 for (VAR_14 = 0; VAR_14 < VAR_15 && !VAR_16; VAR_14++) {
  struct object *VAR_17 = VAR_11[VAR_14].item;
  const char *VAR_18 = VAR_11[VAR_14].name;
  switch (VAR_17->type) {
  case 131:
   VAR_16 = FUNC_17(&VAR_17->oid, &VAR_10, VAR_18);
   break;
  case 129: {
   struct tag *VAR_19 = (struct tag *)VAR_17;
   struct object_id *VAR_20 = FUNC_8(VAR_19);

   if (VAR_10.shown_one)
    FUNC_14('\n');
   FUNC_6(VAR_10.diffopt.file, "%stag %s%s\n",
     FUNC_4(&VAR_10.diffopt, VAR_0),
     VAR_19->tag,
     FUNC_4(&VAR_10.diffopt, VAR_1));
   VAR_16 = FUNC_18(&VAR_17->oid, &VAR_10);
   VAR_10.shown_one = 1;
   if (VAR_16)
    break;
   VAR_17 = FUNC_13(VAR_6, VAR_20);
   if (!VAR_17)
    VAR_16 = FUNC_5(FUNC_0("could not read object %s"),
         FUNC_12(VAR_20));
   VAR_11[VAR_14].item = VAR_17;
   VAR_14--;
   break;
  }
  case 128:
   if (VAR_10.shown_one)
    FUNC_14('\n');
   FUNC_6(VAR_10.diffopt.file, "%stree %s%s\n\n",
     FUNC_4(&VAR_10.diffopt, VAR_0),
     VAR_18,
     FUNC_4(&VAR_10.diffopt, VAR_1));
   FUNC_15(VAR_6, (struct tree *)VAR_17, "",
         0, 0, &VAR_13, VAR_5,
         VAR_10.diffopt.file);
   VAR_10.shown_one = 1;
   break;
  case 130:
   VAR_10.pending.nr = VAR_10.pending.alloc = 0;
   VAR_10.pending.objects = ((void*)0);
   FUNC_1(VAR_17, VAR_18, &VAR_10.pending);
   VAR_16 = FUNC_3(&VAR_10);
   break;
  default:
   VAR_16 = FUNC_5(FUNC_0("unknown type: %d"), VAR_17->type);
  }
 }
 FUNC_7(VAR_11);
 return VAR_16;
}
