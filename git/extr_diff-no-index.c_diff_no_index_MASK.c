
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_9__ {int no_index; int relative_name; int exit_with_status; } ;
struct TYPE_10__ {int skip_stat_unmatch; char const* prefix; TYPE_1__ flags; scalar_t__ output_format; int parseopts; } ;
struct rev_info {char* prefix; int max_count; TYPE_2__ diffopt; } ;
struct option {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct option*) ;
 struct option FUNC_1 (int ,char*,int*,char*,int) ;
 struct option FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,char*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 char* VAR_5 ;
 int FUNC_9 (char const**,struct strbuf*) ;
 int FUNC_10 (int,char const**,char*,struct option*,int ,int ) ;
 struct option* FUNC_11 (struct option*,int ) ;
 char* FUNC_12 (char const*,char const*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,char const*,char const*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (int ,struct option*) ;
 int FUNC_18 (int ) ;

int FUNC_19(struct rev_info *VAR_6,
    int VAR_7,
    int VAR_8, const char **VAR_9)
{
 int VAR_10, VAR_11;
 const char *VAR_12[2];
 struct strbuf VAR_13 = VAR_3;
 const char *VAR_14 = VAR_6->prefix;
 struct option VAR_15[] = {
  FUNC_1(0, "no-index", &VAR_11, "",
      VAR_2 | VAR_1),
  FUNC_2(),
 };
 struct option *VAR_16;

 VAR_16 = FUNC_11(VAR_15,
           VAR_6->diffopt.parseopts);
 VAR_8 = FUNC_10(VAR_8, VAR_9, VAR_6->prefix, VAR_16,
        VAR_4, 0);
 if (VAR_8 != 2) {
  if (VAR_7)
   FUNC_18(FUNC_3("Not a git repository. Use --no-index to "
      "compare two paths outside a working tree"));
  FUNC_17(VAR_4, VAR_16);
 }
 FUNC_0(VAR_16);
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  const char *VAR_17 = VAR_9[VAR_8 - 2 + VAR_10];
  if (!FUNC_16(VAR_17, "-"))




   VAR_17 = VAR_5;
  else if (VAR_14)
   VAR_17 = FUNC_12(VAR_14, VAR_17);
  VAR_12[VAR_10] = VAR_17;
 }

 FUNC_9(VAR_12, &VAR_13);

 VAR_6->diffopt.skip_stat_unmatch = 1;
 if (!VAR_6->diffopt.output_format)
  VAR_6->diffopt.output_format = VAR_0;

 VAR_6->diffopt.flags.no_index = 1;

 VAR_6->diffopt.flags.relative_name = 1;
 VAR_6->diffopt.prefix = VAR_14;

 VAR_6->max_count = -2;
 FUNC_7(&VAR_6->diffopt);

 FUNC_14(&VAR_6->diffopt);
 VAR_6->diffopt.flags.exit_with_status = 1;

 if (FUNC_13(&VAR_6->diffopt, VAR_12[0], VAR_12[1]))
  return 1;
 FUNC_6(&VAR_6->diffopt, "1/", "2/");
 FUNC_8(&VAR_6->diffopt);
 FUNC_4(&VAR_6->diffopt);

 FUNC_15(&VAR_13);





 return FUNC_5(&VAR_6->diffopt, 0);
}
