
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_trailer_options {scalar_t__ in_place; scalar_t__ only_input; scalar_t__ no_divider; scalar_t__ unfold; scalar_t__ only_trailers; scalar_t__ trim_empty; } ;
struct option {char* member_2; int member_6; int member_7; int member_5; int * member_4; struct process_trailer_options* member_3; int member_1; int member_0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct option FUNC_2 (int ,char*,scalar_t__*,int ) ;
 struct option FUNC_3 (int ,char*,int *,int ,int ,int ) ;
 struct option FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct process_trailer_options VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_11 (char const*,struct process_trailer_options*,int *) ;
 int VAR_11 ;
 int FUNC_12 (int ,int ,struct option*) ;

int FUNC_13(int VAR_12, const char **VAR_13, const char *VAR_14)
{
 struct process_trailer_options VAR_15 = VAR_3;
 FUNC_0(VAR_11);

 struct option VAR_16[] = {
  FUNC_2(0, "in-place", &VAR_15.in_place, FUNC_1("edit files in place")),
  FUNC_2(0, "trim-empty", &VAR_15.trim_empty, FUNC_1("trim empty trailers")),

  FUNC_3(0, "where", ((void*)0), FUNC_1("action"),
        FUNC_1("where to place the new trailer"), VAR_9),
  FUNC_3(0, "if-exists", ((void*)0), FUNC_1("action"),
        FUNC_1("action if trailer already exists"), VAR_6),
  FUNC_3(0, "if-missing", ((void*)0), FUNC_1("action"),
        FUNC_1("action if trailer is missing"), VAR_7),

  FUNC_2(0, "only-trailers", &VAR_15.only_trailers, FUNC_1("output only the trailers")),
  FUNC_2(0, "only-input", &VAR_15.only_input, FUNC_1("do not apply config rules")),
  FUNC_2(0, "unfold", &VAR_15.unfold, FUNC_1("join whitespace-continued values")),
  { VAR_0, 0, "parse", &VAR_15, ((void*)0), FUNC_1("set parsing options"),
   VAR_1 | VAR_2, VAR_10 },
  FUNC_2(0, "no-divider", &VAR_15.no_divider, FUNC_1("do not treat --- specially")),
  FUNC_3(0, "trailer", &VAR_11, FUNC_1("trailer"),
    FUNC_1("trailer(s) to add"), VAR_8),
  FUNC_4()
 };

 FUNC_7(VAR_4, ((void*)0));

 VAR_12 = FUNC_10(VAR_12, VAR_13, VAR_14, VAR_16,
        VAR_5, 0);

 if (VAR_15.only_input && !FUNC_8(&VAR_11))
  FUNC_12(
   FUNC_5("--trailer with --only-input does not make sense"),
   VAR_5,
   VAR_16);

 if (VAR_12) {
  int VAR_17;
  for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
   FUNC_11(VAR_13[VAR_17], &VAR_15, &VAR_11);
 } else {
  if (VAR_15.in_place)
   FUNC_6(FUNC_5("no input file given for in-place editing"));
  FUNC_11(((void*)0), &VAR_15, &VAR_11);
 }

 FUNC_9(&VAR_11);

 return 0;
}
