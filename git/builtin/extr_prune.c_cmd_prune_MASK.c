
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int exclude_promisor_objects; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option const FUNC_1 (int ,char*,int*,int ) ;
 struct option const FUNC_2 () ;
 struct option const FUNC_3 (int ,char*,int *,int ) ;
 struct option const FUNC_4 (scalar_t__*,int ) ;
 struct option const FUNC_5 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct rev_info*,struct object*,char*) ;
 int FUNC_8 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*,int ,int ,int ,struct rev_info*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 () ;
 int FUNC_12 (char const*,struct object_id*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 char* FUNC_15 (char*,char*) ;
 struct object* FUNC_16 (struct object_id*,char const*) ;
 int FUNC_17 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_18 (struct rev_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ,struct rev_info*,char const*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

int FUNC_23(int VAR_17, const char **VAR_18, const char *VAR_19)
{
 struct rev_info VAR_20;
 int VAR_21 = 0;
 const struct option VAR_22[] = {
  FUNC_4(&VAR_13, FUNC_0("do not remove, show only")),
  FUNC_5(&VAR_16, FUNC_0("report pruned objects")),
  FUNC_1(0, "progress", &VAR_14, FUNC_0("show progress")),
  FUNC_3(0, "expire", &VAR_3,
    FUNC_0("expire objects older than <time>")),
  FUNC_1(0, "exclude-promisor-objects", &VAR_21,
    FUNC_0("limit traversal to objects outside promisor packfiles")),
  FUNC_2()
 };
 char *VAR_23;

 VAR_3 = VAR_2;
 VAR_12 = 0;
 VAR_9 = 0;
 VAR_10 = 1;
 FUNC_22(VAR_15, &VAR_20, VAR_19);

 VAR_17 = FUNC_17(VAR_17, VAR_18, VAR_19, VAR_22, VAR_8, 0);

 if (VAR_11)
  FUNC_8(FUNC_6("cannot prune in a precious-objects repo"));

 while (VAR_17--) {
  struct object_id VAR_24;
  const char *VAR_25 = *VAR_18++;

  if (!FUNC_12(VAR_25, &VAR_24)) {
   struct object *VAR_26 = FUNC_16(&VAR_24,
            VAR_25);
   FUNC_7(&VAR_20, VAR_26, "");
  }
  else
   FUNC_8("unrecognized argument: %s", VAR_25);
 }

 if (VAR_14 == -1)
  VAR_14 = FUNC_14(2);
 if (VAR_21) {
  VAR_4 = 0;
  VAR_20.exclude_promisor_objects = 1;
 }

 FUNC_9(FUNC_11(), VAR_6,
          VAR_5, VAR_7, &VAR_20);

 FUNC_19(VAR_13 ? VAR_0 : 0);
 FUNC_21(FUNC_11());
 VAR_23 = FUNC_15("%s/pack", FUNC_11());
 FUNC_21(VAR_23);
 FUNC_10(VAR_23);

 if (FUNC_13(VAR_15)) {
  FUNC_18(&VAR_20);
  FUNC_20(VAR_13 ? VAR_1 : 0);
 }

 return 0;
}
