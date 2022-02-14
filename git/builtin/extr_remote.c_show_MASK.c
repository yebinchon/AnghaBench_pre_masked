
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {scalar_t__ nr; int items; } ;
struct TYPE_5__ {int nr; TYPE_1__* items; } ;
struct show_info {struct string_list* list; struct string_list push; scalar_t__ width2; scalar_t__ width; TYPE_3__* remote; scalar_t__ any_rebase; struct string_list stale; struct string_list tracked; struct string_list new_refs; TYPE_2__ heads; struct show_info* states; } ;
struct ref_states {struct string_list* list; struct string_list push; scalar_t__ width2; scalar_t__ width; TYPE_3__* remote; scalar_t__ any_rebase; struct string_list stale; struct string_list tracked; struct string_list new_refs; TYPE_2__ heads; struct ref_states* states; } ;
struct option {int dummy; } ;
typedef int states ;
typedef int info ;
struct TYPE_6__ {int url_nr; char** url; int pushurl_nr; char** pushurl; scalar_t__ mirror; } ;
struct TYPE_4__ {char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,int *,int*,int ) ;
 struct option FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 char* FUNC_4 (char*,char*,scalar_t__) ;
 struct string_list VAR_3 ;
 char* FUNC_5 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct string_list VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct string_list*,int ,struct show_info*) ;
 int FUNC_7 (struct show_info*) ;
 int FUNC_8 (char const*,struct show_info*,int) ;
 int FUNC_9 (struct show_info*,int ,int) ;
 int FUNC_10 (int,char const**,int *,struct option*,int ,int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_15(int VAR_13, const char **VAR_14)
{
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 struct option VAR_18[] = {
  FUNC_1('n', ((void*)0), &VAR_15, FUNC_0("do not query remotes")),
  FUNC_2()
 };
 struct ref_states VAR_19;
 struct string_list VAR_20 = VAR_3;
 struct show_info VAR_21;

 VAR_13 = FUNC_10(VAR_13, VAR_14, ((void*)0), VAR_18, VAR_8,
        0);

 if (VAR_13 < 1)
  return FUNC_13();

 if (!VAR_15)
  VAR_17 = (VAR_2 | VAR_0 | VAR_1);

 FUNC_9(&VAR_19, 0, sizeof(VAR_19));
 FUNC_9(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.states = &VAR_19;
 VAR_21.list = &VAR_20;
 for (; VAR_13; VAR_13--, VAR_14++) {
  int VAR_22;
  const char **VAR_23;
  int VAR_24;

  FUNC_8(*VAR_14, &VAR_19, VAR_17);

  FUNC_12(FUNC_5("* remote %s"), *VAR_14);
  FUNC_12(FUNC_5("  Fetch URL: %s"), VAR_19.remote->url_nr > 0 ?
         VAR_19.remote->url[0] : FUNC_5("(no URL)"));
  if (VAR_19.remote->pushurl_nr) {
   VAR_23 = VAR_19.remote->pushurl;
   VAR_24 = VAR_19.remote->pushurl_nr;
  } else {
   VAR_23 = VAR_19.remote->url;
   VAR_24 = VAR_19.remote->url_nr;
  }
  for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++)





   FUNC_12(FUNC_5("  Push  URL: %s"), VAR_23[VAR_22]);
  if (!VAR_22)
   FUNC_12(FUNC_5("  Push  URL: %s"), FUNC_5("(no URL)"));
  if (VAR_15)
   FUNC_12(FUNC_5("  HEAD branch: %s"), FUNC_5("(not queried)"));
  else if (!VAR_19.heads.nr)
   FUNC_12(FUNC_5("  HEAD branch: %s"), FUNC_5("(unknown)"));
  else if (VAR_19.heads.nr == 1)
   FUNC_12(FUNC_5("  HEAD branch: %s"), VAR_19.heads.items[0].string);
  else {
   FUNC_11(FUNC_5("  HEAD branch (remote HEAD is ambiguous,"
     " may be one of the following):\n"));
   for (VAR_22 = 0; VAR_22 < VAR_19.heads.nr; VAR_22++)
    FUNC_11("    %s\n", VAR_19.heads.items[VAR_22].string);
  }


  VAR_21.width = 0;
  FUNC_6(&VAR_19.new_refs, VAR_6, &VAR_21);
  FUNC_6(&VAR_19.tracked, VAR_6, &VAR_21);
  FUNC_6(&VAR_19.stale, VAR_6, &VAR_21);
  if (VAR_21.list->nr)
   FUNC_12(FUNC_4("  Remote branch:%s",
         "  Remote branches:%s",
         VAR_21.list->nr),
      VAR_15 ? FUNC_5(" (status not queried)") : "");
  FUNC_6(VAR_21.list, VAR_12, &VAR_21);
  FUNC_14(VAR_21.list, 0);


  VAR_21.width = 0;
  VAR_21.any_rebase = 0;
  FUNC_6(&VAR_7, VAR_4, &VAR_21);
  if (VAR_21.list->nr)
   FUNC_12(FUNC_4("  Local branch configured for 'git pull':",
         "  Local branches configured for 'git pull':",
         VAR_21.list->nr));
  FUNC_6(VAR_21.list, VAR_10, &VAR_21);
  FUNC_14(VAR_21.list, 0);


  if (VAR_19.remote->mirror)
   FUNC_12(FUNC_5("  Local refs will be mirrored by 'git push'"));

  VAR_21.width = VAR_21.width2 = 0;
  FUNC_6(&VAR_19.push, VAR_5, &VAR_21);
  FUNC_3(VAR_21.list->items, VAR_21.list->nr, VAR_9);
  if (VAR_21.list->nr)
   FUNC_12(FUNC_4("  Local ref configured for 'git push'%s:",
         "  Local refs configured for 'git push'%s:",
         VAR_21.list->nr),
      VAR_15 ? FUNC_5(" (status not queried)") : "");
  FUNC_6(VAR_21.list, VAR_11, &VAR_21);
  FUNC_14(VAR_21.list, 0);

  FUNC_7(&VAR_19);
 }

 return VAR_16;
}
