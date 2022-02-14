
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_7__ {int recursive; } ;
struct TYPE_8__ {TYPE_3__ flags; struct string_list* format_callback_data; int format_callback; } ;
struct TYPE_6__ {scalar_t__ nr; } ;
struct rev_info {int topo_order; int rewrite_parents; TYPE_4__ diffopt; int cmdline; TYPE_2__ prune_data; int * sources; } ;
struct option {int dummy; } ;
struct object_array {int dummy; } ;
struct commit {int object; } ;
struct TYPE_5__ {int string; } ;


 int FUNC_0 (char*) ;
 struct object_array VAR_0 ;
 struct option FUNC_1 (int ,char*,int*,int ) ;
 struct option FUNC_2 (int ,char*,int *,int ,int ,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (int ,char*,int *,int ) ;
 struct option FUNC_5 (int ,char*,char**,int ,int ) ;
 struct option FUNC_6 (int ,char*,struct string_list*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct string_list VAR_3 ;
 struct string_list VAR_4 ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int *,int *,struct object_array*) ;
 int VAR_5 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct commit* FUNC_11 (struct rev_info*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int VAR_10 ;
 int FUNC_14 (struct commit*,struct rev_info*,struct string_list*) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct object_array*,struct rev_info*,struct string_list*) ;
 scalar_t__ FUNC_18 (struct commit*) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_21 (int,char const**,char const*,struct option*,int ,int) ;
 scalar_t__ FUNC_22 (struct rev_info*) ;
 int FUNC_23 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *) ;
 int VAR_20 ;
 int FUNC_26 (int ,struct rev_info*,char const*) ;
 int VAR_21 ;
 int FUNC_27 (int,char const**,struct rev_info*,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_28 (struct string_list*,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_29 (int ,struct option*) ;
 int VAR_28 ;

int FUNC_30(int VAR_29, const char **VAR_30, const char *VAR_31)
{
 struct rev_info VAR_32;
 struct object_array VAR_33 = VAR_0;
 struct commit *VAR_34;
 char *VAR_35 = ((void*)0),
      *VAR_36 = ((void*)0),
      *VAR_37 = ((void*)0);
 uint32_t VAR_38;
 struct string_list VAR_39 = VAR_4;
 struct string_list VAR_40 = VAR_3;
 struct option VAR_41[] = {
  FUNC_4(0, "progress", &VAR_17,
       FUNC_0("show progress after <n> objects")),
  FUNC_2(0, "signed-tags", &VAR_24, FUNC_0("mode"),
        FUNC_0("select handling of signed tags"),
        VAR_15),
  FUNC_2(0, "tag-of-filtered-object", &VAR_25, FUNC_0("mode"),
        FUNC_0("select handling of tags that tag filtered objects"),
        VAR_16),
  FUNC_2(0, "reencode", &VAR_18, FUNC_0("mode"),
        FUNC_0("select handling of commit messages in an alternate encoding"),
        VAR_14),
  FUNC_5(0, "export-marks", &VAR_35, FUNC_0("file"),
        FUNC_0("Dump marks to this file")),
  FUNC_5(0, "import-marks", &VAR_36, FUNC_0("file"),
        FUNC_0("Import marks from this file")),
  FUNC_5(0, "import-marks-if-exists",
        &VAR_37,
        FUNC_0("file"),
        FUNC_0("Import marks from this file if it exists")),
  FUNC_1(0, "fake-missing-tagger", &VAR_7,
    FUNC_0("Fake a tagger when tags lack one")),
  FUNC_1(0, "full-tree", &VAR_9,
    FUNC_0("Output full tree for each commit")),
  FUNC_1(0, "use-done-feature", &VAR_28,
        FUNC_0("Use the done feature to terminate the stream")),
  FUNC_1(0, "no-data", &VAR_13, FUNC_0("Skip output of blob data")),
  FUNC_6(0, "refspec", &VAR_39, FUNC_0("refspec"),
        FUNC_0("Apply refspec to exported refs")),
  FUNC_1(0, "anonymize", &VAR_5, FUNC_0("anonymize output")),
  FUNC_1(0, "reference-excluded-parents",
    &VAR_19, FUNC_0("Reference parents which are not in fast-export stream by object id")),
  FUNC_1(0, "show-original-ids", &VAR_23,
       FUNC_0("Show original object ids of blobs/commits")),
  FUNC_1(0, "mark-tags", &VAR_12,
       FUNC_0("Label tags with mark ids")),

  FUNC_3()
 };

 if (VAR_29 == 1)
  FUNC_29 (VAR_8, VAR_41);


 FUNC_13(VAR_10, ((void*)0));

 FUNC_26(VAR_27, &VAR_32, VAR_31);
 FUNC_20(&VAR_21);
 VAR_32.topo_order = 1;
 VAR_32.sources = &VAR_21;
 VAR_32.rewrite_parents = 1;
 VAR_29 = FUNC_21(VAR_29, VAR_30, VAR_31, VAR_41, VAR_8,
   VAR_1 | VAR_2);
 VAR_29 = FUNC_27(VAR_29, VAR_30, &VAR_32, ((void*)0));
 if (VAR_29 > 1)
  FUNC_29 (VAR_8, VAR_41);

 if (VAR_39.nr) {
  int VAR_42;

  for (VAR_42 = 0; VAR_42 < VAR_39.nr; VAR_42++)
   FUNC_24(&VAR_20, VAR_39.items[VAR_42].string);

  FUNC_28(&VAR_39, 1);
 }

 if (VAR_28)
  FUNC_23("feature done\n");

 if (VAR_36 && VAR_37)
  FUNC_9(FUNC_7("Cannot pass both --import-marks and --import-marks-if-exists"));
 if (VAR_36)
  FUNC_19(VAR_36, 0);
 else if (VAR_37)
  FUNC_19(VAR_37, 1);
 VAR_38 = VAR_11;

 if (VAR_36 && VAR_32.prune_data.nr)
  VAR_9 = 1;

 FUNC_12(&VAR_32.cmdline);

 if (FUNC_22(&VAR_32))
  FUNC_9("revision walk setup failed");
 VAR_32.diffopt.format_callback = VAR_22;
 VAR_32.diffopt.format_callback_data = &VAR_40;
 VAR_32.diffopt.flags.recursive = 1;
 while ((VAR_34 = FUNC_11(&VAR_32))) {
  if (FUNC_18(VAR_34)) {
   FUNC_8(&VAR_34->object, ((void*)0), &VAR_33);
  }
  else {
   FUNC_14(VAR_34, &VAR_32, &VAR_40);
   FUNC_17(&VAR_33, &VAR_32, &VAR_40);
  }
 }

 FUNC_16(&VAR_6);
 FUNC_16(&VAR_26);
 FUNC_15();

 if (VAR_35 && VAR_38 != VAR_11)
  FUNC_10(VAR_35);

 if (VAR_28)
  FUNC_23("done\n");

 FUNC_25(&VAR_20);

 return 0;
}
