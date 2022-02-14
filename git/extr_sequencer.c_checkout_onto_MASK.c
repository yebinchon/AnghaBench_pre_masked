
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct replay_opts*) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 int FUNC_4 (struct object_id const*) ;
 char* FUNC_5 (struct replay_opts*,char*,char*,char const*) ;
 scalar_t__ FUNC_6 (struct repository*,struct replay_opts*,int ,char const*) ;
 int FUNC_7 (struct replay_opts*) ;
 int FUNC_8 (int *,char*,struct object_id*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct repository *VAR_1, struct replay_opts *VAR_2,
    const char *VAR_3, const struct object_id *VAR_4,
    const char *VAR_5)
{
 struct object_id VAR_6;
 const char *VAR_7 = FUNC_5(VAR_2, "start", "checkout %s", VAR_3);

 if (FUNC_3(VAR_5, &VAR_6))
  return FUNC_2(FUNC_0("%s: not a valid OID"), VAR_5);

 if (FUNC_6(VAR_1, VAR_2, FUNC_4(VAR_4), VAR_7)) {
  FUNC_1(VAR_2);
  FUNC_7(VAR_2);
  return FUNC_2(FUNC_0("could not detach HEAD"));
 }

 return FUNC_8(((void*)0), "ORIG_HEAD", &VAR_6, ((void*)0), 0, VAR_0);
}
