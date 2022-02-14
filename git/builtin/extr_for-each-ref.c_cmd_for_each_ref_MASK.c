
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_sorting {int ignore_case; } ;
struct ref_format {char* format; int quote_style; int use_color; } ;
struct ref_filter {int ignore_case; char const** name_patterns; int match_as_path; int nr; int * items; int no_commit; int with_commit; int points_at; } ;
struct ref_array {int ignore_case; char const** name_patterns; int match_as_path; int nr; int * items; int no_commit; int with_commit; int points_at; } ;
struct option {int dummy; } ;
typedef int filter ;
typedef int array ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (char,char*,int *,int ,int ) ;
 struct option FUNC_3 (int ,char*,int*,int ) ;
 struct option FUNC_4 (int ,char*,int *,int ,int ,int ) ;
 struct option FUNC_5 (int *,int ) ;
 struct option FUNC_6 () ;
 struct option FUNC_7 (char*) ;
 struct option FUNC_8 (int ,char*,int*,int ) ;
 struct option FUNC_9 (struct ref_filter*,int ) ;
 struct option FUNC_10 (int *,int ) ;
 struct option FUNC_11 (struct ref_filter*,int ) ;
 struct option FUNC_12 (struct ref_sorting**) ;
 struct option FUNC_13 (int ,char*,char**,int ,int ) ;
 struct option FUNC_14 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ref_format VAR_6 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (struct ref_filter*,struct ref_filter*,int) ;
 int VAR_7 ;
 int FUNC_17 (int ,int *) ;
 int VAR_8 ;
 int FUNC_18 (struct ref_filter*,int ,int) ;
 int VAR_9 ;
 int FUNC_19 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_20 (struct ref_filter*) ;
 int FUNC_21 (struct ref_sorting*,struct ref_filter*) ;
 struct ref_sorting* FUNC_22 () ;
 int FUNC_23 (int ,struct ref_format*) ;
 int FUNC_24 (int ,struct option*) ;
 scalar_t__ FUNC_25 (struct ref_format*) ;

int FUNC_26(int VAR_10, const char **VAR_11, const char *VAR_12)
{
 int VAR_13;
 struct ref_sorting *VAR_14 = ((void*)0), **VAR_15 = &VAR_14;
 int VAR_16 = 0, VAR_17 = 0;
 struct ref_array VAR_18;
 struct ref_filter VAR_19;
 struct ref_format VAR_20 = VAR_6;

 struct option VAR_21[] = {
  FUNC_2('s', "shell", &VAR_20.quote_style,
   FUNC_1("quote placeholders suitably for shells"), VAR_4),
  FUNC_2('p', "perl", &VAR_20.quote_style,
   FUNC_1("quote placeholders suitably for perl"), VAR_2),
  FUNC_2(0 , "python", &VAR_20.quote_style,
   FUNC_1("quote placeholders suitably for python"), VAR_3),
  FUNC_2(0 , "tcl", &VAR_20.quote_style,
   FUNC_1("quote placeholders suitably for Tcl"), VAR_5),

  FUNC_7(""),
  FUNC_8( 0 , "count", &VAR_16, FUNC_1("show only <n> matched refs")),
  FUNC_13( 0 , "format", &VAR_20.format, FUNC_1("format"), FUNC_1("format to use for the output")),
  FUNC_14(&VAR_20.use_color, FUNC_1("respect format colors")),
  FUNC_12(VAR_15),
  FUNC_4(0, "points-at", &VAR_19.points_at,
        FUNC_1("object"), FUNC_1("print only refs which points at the given object"),
        VAR_9),
  FUNC_9(&VAR_19, FUNC_1("print only refs that are merged")),
  FUNC_11(&VAR_19, FUNC_1("print only refs that are not merged")),
  FUNC_5(&VAR_19.with_commit, FUNC_1("print only refs which contain the commit")),
  FUNC_10(&VAR_19.no_commit, FUNC_1("print only refs which don't contain the commit")),
  FUNC_3(0, "ignore-case", &VAR_17, FUNC_1("sorting and filtering are case insensitive")),
  FUNC_6(),
 };

 FUNC_18(&VAR_18, 0, sizeof(VAR_18));
 FUNC_18(&VAR_19, 0, sizeof(VAR_19));

 VAR_20.format = "%(objectname) %(objecttype)\t%(refname)";

 FUNC_17(VAR_8, ((void*)0));

 FUNC_19(VAR_10, VAR_11, VAR_12, VAR_21, VAR_7, 0);
 if (VAR_16 < 0) {
  FUNC_15("invalid --count argument: `%d'", VAR_16);
  FUNC_24(VAR_7, VAR_21);
 }
 if (FUNC_0(VAR_20.quote_style)) {
  FUNC_15("more than one quoting style?");
  FUNC_24(VAR_7, VAR_21);
 }
 if (FUNC_25(&VAR_20))
  FUNC_24(VAR_7, VAR_21);

 if (!VAR_14)
  VAR_14 = FUNC_22();
 VAR_14->ignore_case = VAR_17;
 VAR_19.ignore_case = VAR_17;

 VAR_19.name_patterns = VAR_11;
 VAR_19.match_as_path = 1;
 FUNC_16(&VAR_18, &VAR_19, VAR_0 | VAR_1);
 FUNC_21(VAR_14, &VAR_18);

 if (!VAR_16 || VAR_18.nr < VAR_16)
  VAR_16 = VAR_18.nr;
 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
  FUNC_23(VAR_18.items[VAR_13], &VAR_20);
 FUNC_20(&VAR_18);
 return 0;
}
