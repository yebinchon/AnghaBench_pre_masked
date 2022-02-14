
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_2; char* member_4; int member_6; int member_7; int member_5; struct batch_options* member_3; int member_1; int member_0; } ;
struct batch_options {int buffer_output; int follow_symlinks; int all_objects; int unordered; int cmdmode; scalar_t__ enabled; int member_0; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct option const FUNC_1 (int ,char*,int*,int ) ;
 struct option const FUNC_2 (char,char*,int*,int ,char) ;
 struct option const FUNC_3 () ;
 struct option const FUNC_4 (int ) ;
 struct option const FUNC_5 (int ,char*,scalar_t__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct batch_options*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int,char const*,char const*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_12 (int ,struct option const*) ;

int FUNC_13(int VAR_7, const char **VAR_8, const char *VAR_9)
{
 int VAR_10 = 0;
 const char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct batch_options VAR_13 = {0};
 int VAR_14 = 0;

 const struct option VAR_15[] = {
  FUNC_4(FUNC_0("<type> can be one of: blob, tree, commit, tag")),
  FUNC_2('t', ((void*)0), &VAR_10, FUNC_0("show object type"), 't'),
  FUNC_2('s', ((void*)0), &VAR_10, FUNC_0("show object size"), 's'),
  FUNC_2('e', ((void*)0), &VAR_10,
       FUNC_0("exit with zero when there's no error"), 'e'),
  FUNC_2('p', ((void*)0), &VAR_10, FUNC_0("pretty-print object's content"), 'p'),
  FUNC_2(0, "textconv", &VAR_10,
       FUNC_0("for blob objects, run textconv on object's content"), 'c'),
  FUNC_2(0, "filters", &VAR_10,
       FUNC_0("for blob objects, run filters on object's content"), 'w'),
  FUNC_5(0, "path", &VAR_5, FUNC_0("blob"),
      FUNC_0("use a specific path for --textconv/--filters")),
  FUNC_1(0, "allow-unknown-type", &VAR_14,
     FUNC_0("allow -s and -t to work with broken/corrupt objects")),
  FUNC_1(0, "buffer", &VAR_13.buffer_output, FUNC_0("buffer --batch output")),
  { VAR_0, 0, "batch", &VAR_13, "format",
   FUNC_0("show info and content of objects fed from the standard input"),
   VAR_2 | VAR_1,
   VAR_3 },
  { VAR_0, 0, "batch-check", &VAR_13, "format",
   FUNC_0("show info about objects fed from the standard input"),
   VAR_2 | VAR_1,
   VAR_3 },
  FUNC_1(0, "follow-symlinks", &VAR_13.follow_symlinks,
    FUNC_0("follow in-tree symlinks (used with --batch or --batch-check)")),
  FUNC_1(0, "batch-all-objects", &VAR_13.all_objects,
    FUNC_0("show all objects with --batch or --batch-check")),
  FUNC_1(0, "unordered", &VAR_13.unordered,
    FUNC_0("do not order --batch-all-objects output")),
  FUNC_3()
 };

 FUNC_10(VAR_6, ((void*)0));

 VAR_13.buffer_output = -1;
 VAR_7 = FUNC_11(VAR_7, VAR_8, VAR_9, VAR_15, VAR_4, 0);

 if (VAR_10) {
  if (VAR_13.enabled && (VAR_10 == 'c' || VAR_10 == 'w'))
   VAR_13.cmdmode = VAR_10;
  else if (VAR_7 == 1)
   VAR_12 = VAR_8[0];
  else
   FUNC_12(VAR_4, VAR_15);
 }
 if (!VAR_10 && !VAR_13.enabled) {
  if (VAR_7 == 2) {
   VAR_11 = VAR_8[0];
   VAR_12 = VAR_8[1];
  } else
   FUNC_12(VAR_4, VAR_15);
 }
 if (VAR_13.enabled) {
  if (VAR_13.cmdmode != VAR_10 || VAR_7)
   FUNC_12(VAR_4, VAR_15);
  if (VAR_13.cmdmode && VAR_13.all_objects)
   FUNC_8("--batch-all-objects cannot be combined with "
       "--textconv nor with --filters");
 }

 if ((VAR_13.follow_symlinks || VAR_13.all_objects) && !VAR_13.enabled) {
  FUNC_12(VAR_4, VAR_15);
 }

 if (VAR_5 && VAR_10 != 'c' && VAR_10 != 'w') {
  FUNC_9("--path=<path> needs --textconv or --filters");
  FUNC_12(VAR_4, VAR_15);
 }

 if (VAR_5 && VAR_13.enabled) {
  FUNC_9("--path=<path> incompatible with --batch");
  FUNC_12(VAR_4, VAR_15);
 }

 if (VAR_13.buffer_output < 0)
  VAR_13.buffer_output = VAR_13.all_objects;

 if (VAR_13.enabled)
  return FUNC_6(&VAR_13);

 if (VAR_14 && VAR_10 != 't' && VAR_10 != 's')
  FUNC_8("git cat-file --allow-unknown-type: use with -s or -t");
 return FUNC_7(VAR_10, VAR_11, VAR_12, VAR_14);
}
