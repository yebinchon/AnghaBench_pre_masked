
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int recno; int expire_total; } ;
struct expire_reflog_policy_cb {TYPE_1__ cmd; } ;
typedef int cb ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int VAR_4 ;
 int FUNC_2 (char const*,int,struct object_id*,char**) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 (char*,int ,struct expire_reflog_policy_cb*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct expire_reflog_policy_cb*,int ,int) ;
 char* VAR_5 ;
 int FUNC_7 (char*,struct object_id*,unsigned int,int ,int ,int ,struct expire_reflog_policy_cb*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char const*,char*) ;
 char* FUNC_9 (char const*,char*) ;
 int FUNC_10 (char const*,char**,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(int VAR_9, const char **VAR_10, const char *VAR_11)
{
 struct expire_reflog_policy_cb VAR_12;
 int VAR_13, VAR_14 = 0;
 unsigned int VAR_15 = 0;

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));

 for (VAR_13 = 1; VAR_13 < VAR_9; VAR_13++) {
  const char *VAR_16 = VAR_10[VAR_13];
  if (!FUNC_8(VAR_16, "--dry-run") || !FUNC_8(VAR_16, "-n"))
   VAR_15 |= VAR_0;
  else if (!FUNC_8(VAR_16, "--rewrite"))
   VAR_15 |= VAR_1;
  else if (!FUNC_8(VAR_16, "--updateref"))
   VAR_15 |= VAR_2;
  else if (!FUNC_8(VAR_16, "--verbose"))
   VAR_15 |= VAR_3;
  else if (!FUNC_8(VAR_16, "--")) {
   VAR_13++;
   break;
  }
  else if (VAR_16[0] == '-')
   FUNC_11(FUNC_0(VAR_5));
  else
   break;
 }

 if (VAR_9 - VAR_13 < 1)
  return FUNC_3(FUNC_0("no reflog specified to delete"));

 for ( ; VAR_13 < VAR_9; VAR_13++) {
  const char *VAR_17 = FUNC_9(VAR_10[VAR_13], "@{");
  struct object_id VAR_18;
  char *VAR_19, *VAR_20;
  int VAR_21;

  if (!VAR_17) {
   VAR_14 |= FUNC_3(FUNC_0("not a reflog: %s"), VAR_10[VAR_13]);
   continue;
  }

  if (!FUNC_2(VAR_10[VAR_13], VAR_17 - VAR_10[VAR_13], &VAR_18, &VAR_20)) {
   VAR_14 |= FUNC_3(FUNC_0("no reflog for '%s'"), VAR_10[VAR_13]);
   continue;
  }

  VAR_21 = FUNC_10(VAR_17 + 2, &VAR_19, 10);
  if (*VAR_19 == '}') {
   VAR_12.cmd.recno = -VAR_21;
   FUNC_4(VAR_20, VAR_4, &VAR_12);
  } else {
   VAR_12.cmd.expire_total = FUNC_1(VAR_17 + 2);
   FUNC_4(VAR_20, VAR_4, &VAR_12);
   VAR_12.cmd.expire_total = 0;
  }

  VAR_14 |= FUNC_7(VAR_20, &VAR_18, VAR_15,
     VAR_7,
     VAR_8,
     VAR_6,
     &VAR_12);
  FUNC_5(VAR_20);
 }
 return VAR_14;
}
