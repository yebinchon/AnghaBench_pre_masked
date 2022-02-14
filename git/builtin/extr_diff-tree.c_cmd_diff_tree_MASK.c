
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct setup_revision_opt {int tweak; } ;
struct TYPE_9__ {int needed_rename_limit; int degraded_cc_to_c; int setup; scalar_t__ detect_rename; } ;
struct TYPE_7__ {int nr; TYPE_1__* objects; } ;
struct rev_info {int diff; int disable_stdin; TYPE_4__ diffopt; TYPE_2__ pending; scalar_t__ abbrev; } ;
struct object_id {int dummy; } ;
struct object {int flags; int oid; } ;
typedef int s_r_opt ;
typedef int line ;
struct TYPE_8__ {int cache; } ;
struct TYPE_6__ {struct object* item; } ;


 int VAR_0 ;
 int FUNC_0 (struct object*,struct object*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,char*,TYPE_4__*) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,int,int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (char*,struct object_id*) ;
 int FUNC_11 (int ,int *) ;
 int VAR_4 ;
 int FUNC_12 (struct rev_info*) ;
 struct rev_info VAR_5 ;
 int FUNC_13 (struct setup_revision_opt*,int ,int) ;
 int FUNC_14 (int,char const**) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int ,struct rev_info*,char const*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,char const**,struct rev_info*,struct setup_revision_opt*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_19 (char const*,char*) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int FUNC_20 (int ) ;

int FUNC_21(int VAR_10, const char **VAR_11, const char *VAR_12)
{
 char VAR_13[1000];
 struct object *VAR_14, *VAR_15;
 static struct rev_info *VAR_16 = &VAR_5;
 struct setup_revision_opt VAR_17;
 int VAR_18 = 0;

 if (VAR_10 == 2 && !FUNC_19(VAR_11[1], "-h"))
  FUNC_20(VAR_3);

 FUNC_11(VAR_4, ((void*)0));
 FUNC_16(VAR_9, VAR_16, VAR_12);
 if (FUNC_15() < 0)
  FUNC_2(FUNC_1("index file corrupt"));
 VAR_16->abbrev = 0;
 VAR_16->diff = 1;
 VAR_16->disable_stdin = 1;
 FUNC_13(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.tweak = VAR_2;

 FUNC_14(VAR_10, VAR_11);
 VAR_10 = FUNC_18(VAR_10, VAR_11, VAR_16, &VAR_17);

 while (--VAR_10 > 0) {
  const char *VAR_19 = *++VAR_11;

  if (!FUNC_19(VAR_19, "--stdin")) {
   VAR_18 = 1;
   continue;
  }
  FUNC_20(VAR_3);
 }
 switch (VAR_16->pending.nr) {
 case 0:
  if (!VAR_18)
   FUNC_20(VAR_3);
  break;
 case 1:
  VAR_14 = VAR_16->pending.objects[0].item;
  FUNC_4(&VAR_14->oid);
  break;
 case 2:
  VAR_14 = VAR_16->pending.objects[0].item;
  VAR_15 = VAR_16->pending.objects[1].item;
  if (VAR_15->flags & VAR_1) {
   FUNC_0(VAR_15, VAR_14);
  }
  FUNC_5(&VAR_14->oid, &VAR_15->oid, "", &VAR_16->diffopt);
  FUNC_12(VAR_16);
  break;
 }

 if (VAR_18) {
  int VAR_20 = 0;
  int VAR_21 = 0;

  if (VAR_16->diffopt.detect_rename) {
   if (!VAR_8.cache)
    FUNC_17(VAR_9);
   VAR_16->diffopt.setup |= VAR_0;
  }
  while (FUNC_8(VAR_13, sizeof(VAR_13), VAR_6)) {
   struct object_id VAR_22;

   if (FUNC_10(VAR_13, &VAR_22)) {
    FUNC_9(VAR_13, VAR_7);
    FUNC_7(VAR_7);
   }
   else {
    FUNC_6(VAR_13);
    if (VAR_20 < VAR_16->diffopt.needed_rename_limit)
     VAR_20 = VAR_16->diffopt.needed_rename_limit;
    if (VAR_16->diffopt.degraded_cc_to_c)
     VAR_21 = 1;
   }
  }
  VAR_16->diffopt.degraded_cc_to_c = VAR_21;
  VAR_16->diffopt.needed_rename_limit = VAR_20;
 }

 return FUNC_3(&VAR_16->diffopt, 0);
}
