
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct shortlog {int user_format; scalar_t__ file; int abbrev; int email; int summary; int sort_by_number; int committer; int member_0; } ;
struct TYPE_5__ {scalar_t__ nr; } ;
struct TYPE_4__ {scalar_t__ file; } ;
struct rev_info {scalar_t__ commit_format; TYPE_2__ pending; TYPE_1__ diffopt; int abbrev; } ;
struct parse_opt_ctx_t {int dummy; } ;
struct option {char member_1; int * member_7; int member_6; int member_5; int member_4; struct shortlog* member_3; int * member_2; int member_0; } ;
struct TYPE_6__ {int have_repository; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct option const FUNC_1 (char,char*,int *,int ) ;
 struct option const FUNC_2 () ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct rev_info*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct rev_info*,struct shortlog*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct parse_opt_ctx_t*) ;
 int FUNC_13 (struct parse_opt_ctx_t*,int,char const**,char const*,struct option const*,int) ;
 int FUNC_14 (struct parse_opt_ctx_t*,struct option const*,int ) ;
 int FUNC_15 (struct rev_info*,struct parse_opt_ctx_t*,struct option const*,int ) ;
 int VAR_7 ;
 int FUNC_16 (struct shortlog*) ;
 int FUNC_17 (int ,struct rev_info*,char const*) ;
 int FUNC_18 (int,char const**,struct rev_info*,int *) ;
 int FUNC_19 (struct shortlog*) ;
 int FUNC_20 (struct shortlog*) ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_21 (int ,struct option const*) ;

int FUNC_22(int VAR_13, const char **VAR_14, const char *VAR_15)
{
 struct shortlog VAR_16 = { VAR_5 };
 struct rev_info VAR_17;
 int VAR_18 = !VAR_9->have_repository;

 const struct option VAR_19[] = {
  FUNC_1('c', "committer", &VAR_16.committer,
    FUNC_0("Group by committer rather than author")),
  FUNC_1('n', "numbered", &VAR_16.sort_by_number,
    FUNC_0("sort output according to the number of commits per author")),
  FUNC_1('s', "summary", &VAR_16.summary,
    FUNC_0("Suppress commit descriptions, only provides commit count")),
  FUNC_1('e', "email", &VAR_16.email,
    FUNC_0("Show the email address of each author")),
  { VAR_1, 'w', ((void*)0), &VAR_16, FUNC_0("<w>[,<i1>[,<i2>]]"),
   FUNC_0("Linewrap output"), &VAR_4,
   VAR_7 },
  FUNC_2(),
 };

 struct parse_opt_ctx_t VAR_20;

 FUNC_10(VAR_6, ((void*)0));
 FUNC_19(&VAR_16);
 FUNC_17(VAR_12, &VAR_17, VAR_15);
 FUNC_13(&VAR_20, VAR_13, VAR_14, VAR_15, VAR_19,
       VAR_3 | VAR_2);

 for (;;) {
  switch (FUNC_14(&VAR_20, VAR_19, VAR_8)) {
  case 128:
  case 129:
   FUNC_6(129);
  case 131:
   FUNC_6(0);
  case 130:
   goto parse_done;
  }
  FUNC_15(&VAR_17, &VAR_20, VAR_19, VAR_8);
 }
parse_done:
 VAR_13 = FUNC_12(&VAR_20);

 if (VAR_18 && VAR_13 > 1) {
  FUNC_5(FUNC_3("too many arguments given outside repository"));
  FUNC_21(VAR_8, VAR_19);
 }

 if (FUNC_18(VAR_13, VAR_14, &VAR_17, ((void*)0)) != 1) {
  FUNC_5(FUNC_3("unrecognized argument: %s"), VAR_14[1]);
  FUNC_21(VAR_8, VAR_19);
 }

 VAR_16.user_format = VAR_17.commit_format == VAR_0;
 VAR_16.abbrev = VAR_17.abbrev;
 VAR_16.file = VAR_17.diffopt.file;


 if (!VAR_18 && !VAR_17.pending.nr && FUNC_11(0))
  FUNC_4(&VAR_17);
 if (VAR_17.pending.nr == 0) {
  if (FUNC_11(0))
   FUNC_8(VAR_10, "%s", FUNC_3("(reading log message from standard input)\n"));
  FUNC_16(&VAR_16);
 }
 else
  FUNC_9(&VAR_17, &VAR_16);

 FUNC_20(&VAR_16);
 if (VAR_16.file != VAR_11)
  FUNC_7(VAR_16.file);
 return 0;
}
