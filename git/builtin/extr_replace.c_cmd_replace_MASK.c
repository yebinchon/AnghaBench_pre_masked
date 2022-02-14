
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 (float,char*,int*,int ,int ) ;
 struct option FUNC_4 (char,char*,int*,int ,int) ;
 struct option FUNC_5 () ;
 struct option FUNC_6 (int ,char*,char const**,int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char const**,int,int ) ;
 int VAR_1 ;
 int FUNC_10 (char const*,int,int) ;
 int FUNC_11 (char const**,int ) ;
 int FUNC_12 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (char const*,char const*) ;
 int FUNC_14 (int,char const**,char const*,struct option*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (char const*,char const*,int) ;
 int FUNC_16 (int ,int ,struct option*) ;

int FUNC_17(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 const char *VAR_10 = ((void*)0);
 enum {
  MODE_UNSPECIFIED = 0,
  MODE_LIST,
  MODE_DELETE,
  MODE_EDIT,
  MODE_GRAFT,
  MODE_CONVERT_GRAFT_FILE,
  MODE_REPLACE
 } VAR_11 = MODE_UNSPECIFIED;
 struct option VAR_12[] = {
  FUNC_4('l', "list", &VAR_11, FUNC_1("list replace refs"), MODE_LIST),
  FUNC_4('d', "delete", &VAR_11, FUNC_1("delete replace refs"), MODE_DELETE),
  FUNC_4('e', "edit", &VAR_11, FUNC_1("edit existing object"), MODE_EDIT),
  FUNC_4('g', "graft", &VAR_11, FUNC_1("change a commit's parents"), MODE_GRAFT),
  FUNC_4(0, "convert-graft-file", &VAR_11, FUNC_1("convert existing graft file"), MODE_CONVERT_GRAFT_FILE),
  FUNC_3('f', "force", &VAR_8, FUNC_1("replace the ref if it exists"),
      VAR_0),
  FUNC_2(0, "raw", &VAR_9, FUNC_1("do not pretty-print contents for --edit")),
  FUNC_6(0, "format", &VAR_10, FUNC_1("format"), FUNC_1("use this format")),
  FUNC_5()
 };

 VAR_4 = 0;
 FUNC_12(VAR_2, ((void*)0));

 VAR_5 = FUNC_14(VAR_5, VAR_6, VAR_7, VAR_12, VAR_3, 0);

 if (!VAR_11)
  VAR_11 = VAR_5 ? MODE_REPLACE : MODE_LIST;

 if (VAR_10 && VAR_11 != MODE_LIST)
  FUNC_16(FUNC_7("--format cannot be used when not listing"),
         VAR_3, VAR_12);

 if (VAR_8 &&
     VAR_11 != MODE_REPLACE &&
     VAR_11 != MODE_EDIT &&
     VAR_11 != MODE_GRAFT &&
     VAR_11 != MODE_CONVERT_GRAFT_FILE)
  FUNC_16(FUNC_7("-f only makes sense when writing a replacement"),
         VAR_3, VAR_12);

 if (VAR_9 && VAR_11 != MODE_EDIT)
  FUNC_16(FUNC_7("--raw only makes sense with --edit"),
         VAR_3, VAR_12);

 switch (VAR_11) {
 case MODE_DELETE:
  if (VAR_5 < 1)
   FUNC_16(FUNC_7("-d needs at least one argument"),
          VAR_3, VAR_12);
  return FUNC_11(VAR_6, VAR_1);

 case MODE_REPLACE:
  if (VAR_5 != 2)
   FUNC_16(FUNC_7("bad number of arguments"),
          VAR_3, VAR_12);
  return FUNC_15(VAR_6[0], VAR_6[1], VAR_8);

 case MODE_EDIT:
  if (VAR_5 != 1)
   FUNC_16(FUNC_7("-e needs exactly one argument"),
          VAR_3, VAR_12);
  return FUNC_10(VAR_6[0], VAR_8, VAR_9);

 case MODE_GRAFT:
  if (VAR_5 < 1)
   FUNC_16(FUNC_7("-g needs at least one argument"),
          VAR_3, VAR_12);
  return FUNC_9(VAR_5, VAR_6, VAR_8, 0);

 case MODE_CONVERT_GRAFT_FILE:
  if (VAR_5 != 0)
   FUNC_16(FUNC_7("--convert-graft-file takes no argument"),
          VAR_3, VAR_12);
  return !!FUNC_8(VAR_8);

 case MODE_LIST:
  if (VAR_5 > 1)
   FUNC_16(FUNC_7("only one pattern can be given with -l"),
          VAR_3, VAR_12);
  return FUNC_13(VAR_6[0], VAR_10);

 default:
  FUNC_0("invalid cmdmode %d", (int)VAR_11);
 }
}
