
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct cmdinfo {int ci_calls; int ci_flags; int compare; int ci_comm; } ;
struct TYPE_6__ {int size; struct cmdinfo* data; } ;
typedef TYPE_1__ DBT ;
typedef int DB ;
typedef struct cmdinfo BTREEINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct cmdinfo*,struct cmdinfo*) ;
 int VAR_7 ;
 int FUNC_4 (struct cmdinfo*,struct cmdinfo*,int) ;
 int FUNC_5 (struct cmdinfo*,int) ;
 scalar_t__ FUNC_6 (struct cmdinfo*) ;
 int VAR_8 ;
 int * FUNC_7 (int *,int ,int ,int ,struct cmdinfo*) ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int FUNC_8 (struct cmdinfo*,struct cmdinfo*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (char*) ;

void
FUNC_11(void)
{
 BTREEINFO VAR_14;
 DBT VAR_15, VAR_16, VAR_17;
 DB *VAR_18;
 struct cmdinfo *VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24;

 FUNC_5(&VAR_21, sizeof VAR_21);
 FUNC_9(VAR_21.ci_comm, "");
 FUNC_5(&VAR_22, sizeof VAR_22);
 FUNC_9(VAR_22.ci_comm, "***other");
 FUNC_5(&VAR_23, sizeof VAR_23);
 FUNC_9(VAR_23.ci_comm, "**junk**");





 FUNC_5(&VAR_14, sizeof VAR_14);
 VAR_14.compare = VAR_12;
 VAR_18 = FUNC_7(((void*)0), VAR_2, 0, VAR_1, &VAR_14);
 if (VAR_18 == ((void*)0)) {
  FUNC_10("couldn't sort process accounting stats");
  return;
 }

 VAR_17.data = ((void*)0);
 VAR_17.size = 0;
 VAR_24 = FUNC_2(VAR_10, &VAR_15, &VAR_16, VAR_3);
 if (VAR_24 < 0)
  FUNC_10("retrieving process accounting stats");
 while (VAR_24 == 0) {
  VAR_19 = (struct cmdinfo *) VAR_16.data;
  FUNC_4(VAR_19, &VAR_20, sizeof VAR_20);


  FUNC_3(&VAR_20, &VAR_21);

  if (VAR_13 && VAR_20.ci_calls <= VAR_8 &&
      (VAR_9 || FUNC_6(&VAR_20))) {

   FUNC_3(&VAR_20, &VAR_23);
   goto next;
  }
  if (!VAR_7 &&
      ((VAR_20.ci_flags & VAR_0) != 0 || VAR_20.ci_calls <= 1)) {

   FUNC_3(&VAR_20, &VAR_22);
   goto next;
  }
  VAR_24 = FUNC_1(VAR_18, &VAR_16, &VAR_17, 0);
  if (VAR_24 < 0)
   FUNC_10("sorting process accounting stats");

next: VAR_24 = FUNC_2(VAR_10, &VAR_15, &VAR_16, VAR_5);
  if (VAR_24 < 0)
   FUNC_10("retrieving process accounting stats");
 }


 if (VAR_23.ci_calls != 0) {
  VAR_16.data = &VAR_23;
  VAR_16.size = sizeof VAR_23;
  VAR_24 = FUNC_1(VAR_18, &VAR_16, &VAR_17, 0);
  if (VAR_24 < 0)
   FUNC_10("sorting process accounting stats");
 }
 if (VAR_22.ci_calls != 0) {
  VAR_16.data = &VAR_22;
  VAR_16.size = sizeof VAR_22;
  VAR_24 = FUNC_1(VAR_18, &VAR_16, &VAR_17, 0);
  if (VAR_24 < 0)
   FUNC_10("sorting process accounting stats");
 }


 FUNC_8(&VAR_21, &VAR_21);


 VAR_24 = FUNC_2(VAR_18, &VAR_16, &VAR_17, VAR_11 ? VAR_3 : VAR_4);
 if (VAR_24 < 0)
  FUNC_10("retrieving process accounting report");
 while (VAR_24 == 0) {
  VAR_19 = (struct cmdinfo *) VAR_16.data;
  FUNC_4(VAR_19, &VAR_20, sizeof VAR_20);

  FUNC_8(&VAR_20, &VAR_21);

  VAR_24 = FUNC_2(VAR_18, &VAR_16, &VAR_17,
      VAR_11 ? VAR_5 : VAR_6);
  if (VAR_24 < 0)
   FUNC_10("retrieving process accounting report");
 }
 FUNC_0(VAR_18);
}
