
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setup_revision_opt {int allow_exclude_promisor_objects; } ;
struct rev_info {int ignore_missing_links; } ;
struct object_id {int dummy; } ;
typedef int line ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct rev_info*,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (char*,int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct rev_info*) ;
 scalar_t__ FUNC_7 (char*,struct object_id*) ;
 scalar_t__ FUNC_8 (char*,struct rev_info*,int,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct rev_info*,int ,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_14 (struct rev_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ,struct object_id*) ;
 int FUNC_16 (int ,struct rev_info*,int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_17 (int,char const**,struct rev_info*,struct setup_revision_opt*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int VAR_15 ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 int VAR_16 ;
 int FUNC_21 (struct rev_info*,int ,int ,int *) ;
 int FUNC_22 (int *,struct rev_info*,int ,scalar_t__,int *,int *) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static void FUNC_23(int VAR_23, const char **VAR_24)
{
 struct rev_info VAR_25;
 struct setup_revision_opt VAR_26 = {
  .allow_exclude_promisor_objects = 1,
 };
 char VAR_27[1000];
 int VAR_28 = 0;
 int VAR_29;

 FUNC_16(VAR_16, &VAR_25, ((void*)0));
 VAR_10 = 0;
 FUNC_17(VAR_23, VAR_24, &VAR_25, &VAR_26);


 FUNC_9(VAR_16);

 VAR_29 = VAR_21;
 VAR_21 = 0;

 while (FUNC_5(VAR_27, sizeof(VAR_27), VAR_15) != ((void*)0)) {
  int VAR_30 = FUNC_20(VAR_27);
  if (VAR_30 && VAR_27[VAR_30 - 1] == '\n')
   VAR_27[--VAR_30] = 0;
  if (!VAR_30)
   break;
  if (*VAR_27 == '-') {
   if (!FUNC_19(VAR_27, "--not")) {
    VAR_28 ^= VAR_1;
    VAR_22 = 0;
    continue;
   }
   if (FUNC_18(VAR_27, "--shallow ")) {
    struct object_id VAR_31;
    if (FUNC_7(VAR_27 + 10, &VAR_31))
     FUNC_4("not an SHA-1 '%s'", VAR_27 + 10);
    FUNC_15(VAR_16, &VAR_31);
    VAR_19 = 0;
    continue;
   }
   FUNC_4(FUNC_0("not a rev '%s'"), VAR_27);
  }
  if (FUNC_8(VAR_27, &VAR_25, VAR_28, VAR_0))
   FUNC_4(FUNC_0("bad revision '%s'"), VAR_27);
 }

 VAR_21 = VAR_29;

 if (VAR_19 && !FUNC_6(&VAR_25))
  return;

 if (VAR_20)
  FUNC_10(VAR_16, VAR_6);

 if (FUNC_14(&VAR_25))
  FUNC_4(FUNC_0("revision walk setup failed"));
 FUNC_12(&VAR_25, VAR_12, VAR_14);

 if (!VAR_3)
  VAR_3 = VAR_13;
 FUNC_22(&VAR_2, &VAR_25,
          VAR_11, VAR_3, ((void*)0),
          ((void*)0));

 if (VAR_18) {
  VAR_25.ignore_missing_links = 1;
  if (FUNC_3(&VAR_25,
    VAR_18))
   FUNC_4(FUNC_0("unable to add recent objects"));
  if (FUNC_14(&VAR_25))
   FUNC_4(FUNC_0("revision walk setup failed"));
  FUNC_21(&VAR_25, VAR_8,
         VAR_9, ((void*)0));
 }

 if (VAR_4)
  FUNC_1();
 if (VAR_5)
  FUNC_2();
 if (VAR_17)
  FUNC_11();

 FUNC_13(&VAR_7);
}
