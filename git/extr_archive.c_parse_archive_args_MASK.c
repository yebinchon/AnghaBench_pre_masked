
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int dummy; } ;
struct archiver_args {int compression_level; int verbose; char const* base; int worktree_attributes; int baselen; } ;
struct archiver {int flags; } ;
struct TYPE_2__ {int flags; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char*) ;
 struct option FUNC_4 (char,char*,char const**,int ,int ) ;
 struct option FUNC_5 (char,int*,int ,int) ;
 struct option FUNC_6 (char,int*,int) ;
 struct option FUNC_7 (int*,int ) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*) ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_10 (int ,...) ;
 int FUNC_11 (int ) ;
 struct archiver* FUNC_12 (char const*) ;
 int VAR_5 ;
 int FUNC_13 (int,char const**,int *,struct option*,int ,int ) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (int ,struct option*) ;

__attribute__((used)) static int FUNC_17(int VAR_6, const char **VAR_7,
  const struct archiver **VAR_8, struct archiver_args *VAR_9,
  const char *VAR_10, int VAR_11)
{
 const char *VAR_12 = ((void*)0);
 const char *VAR_13 = ((void*)0);
 const char *VAR_14 = ((void*)0);
 const char *VAR_15 = ((void*)0);
 const char *VAR_16 = ((void*)0);
 int VAR_17 = -1;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 struct option VAR_22[] = {
  FUNC_3(""),
  FUNC_4(0, "format", &VAR_12, FUNC_0("fmt"), FUNC_0("archive format")),
  FUNC_4(0, "prefix", &VAR_13, FUNC_0("prefix"),
   FUNC_0("prepend prefix to each pathname in the archive")),
  FUNC_4('o', "output", &VAR_16, FUNC_0("file"),
   FUNC_0("write the archive to this file")),
  FUNC_1(0, "worktree-attributes", &VAR_21,
   FUNC_0("read .gitattributes in working directory")),
  FUNC_7(&VAR_18, FUNC_0("report archived files on stderr")),
  FUNC_5('0', &VAR_17, FUNC_0("store only"), 0),
  FUNC_5('1', &VAR_17, FUNC_0("compress faster"), 1),
  FUNC_6('2', &VAR_17, 2),
  FUNC_6('3', &VAR_17, 3),
  FUNC_6('4', &VAR_17, 4),
  FUNC_6('5', &VAR_17, 5),
  FUNC_6('6', &VAR_17, 6),
  FUNC_6('7', &VAR_17, 7),
  FUNC_6('8', &VAR_17, 8),
  FUNC_5('9', &VAR_17, FUNC_0("compress better"), 9),
  FUNC_3(""),
  FUNC_1('l', "list", &VAR_20,
   FUNC_0("list supported archive formats")),
  FUNC_3(""),
  FUNC_4(0, "remote", &VAR_14, FUNC_0("repo"),
   FUNC_0("retrieve the archive from remote repository <repo>")),
  FUNC_4(0, "exec", &VAR_15, FUNC_0("command"),
   FUNC_0("path to the remote git-upload-archive command")),
  FUNC_2()
 };

 VAR_6 = FUNC_13(VAR_6, VAR_7, ((void*)0), VAR_22, VAR_3, 0);

 if (VAR_14)
  FUNC_10(FUNC_8("Unexpected option --remote"));
 if (VAR_15)
  FUNC_10(FUNC_8("Option --exec can only be used together with --remote"));
 if (VAR_16)
  FUNC_10(FUNC_8("Unexpected option --output"));

 if (!VAR_13)
  VAR_13 = "";

 if (VAR_20) {
  for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
   if (!VAR_11 || VAR_4[VAR_19]->flags & VAR_0)
    FUNC_14("%s\n", VAR_4[VAR_19]->name);
  FUNC_11(0);
 }

 if (!VAR_12 && VAR_10)
  VAR_12 = FUNC_9(VAR_10);
 if (!VAR_12)
  VAR_12 = "tar";


 if (VAR_6 < 1)
  FUNC_16(VAR_3, VAR_22);
 *VAR_8 = FUNC_12(VAR_12);
 if (!*VAR_8 || (VAR_11 && !((*VAR_8)->flags & VAR_0)))
  FUNC_10(FUNC_8("Unknown archive format '%s'"), VAR_12);

 VAR_9->compression_level = VAR_2;
 if (VAR_17 != -1) {
  if ((*VAR_8)->flags & VAR_1)
   VAR_9->compression_level = VAR_17;
  else {
   FUNC_10(FUNC_8("Argument not supported for format '%s': -%d"),
     VAR_12, VAR_17);
  }
 }
 VAR_9->verbose = VAR_18;
 VAR_9->base = VAR_13;
 VAR_9->baselen = FUNC_15(VAR_13);
 VAR_9->worktree_attributes = VAR_21;

 return VAR_6;
}
