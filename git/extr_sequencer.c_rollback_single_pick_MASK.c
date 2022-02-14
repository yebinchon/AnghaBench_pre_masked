
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct repository*) ;
 int FUNC_4 (struct repository*) ;
 scalar_t__ FUNC_5 (struct object_id*) ;
 scalar_t__ FUNC_6 (char*,int ,struct object_id*,int *) ;
 int FUNC_7 (struct object_id*) ;

__attribute__((used)) static int FUNC_8(struct repository *VAR_0)
{
 struct object_id VAR_1;

 if (!FUNC_2(FUNC_3(VAR_0)) &&
     !FUNC_2(FUNC_4(VAR_0)))
  return FUNC_1(FUNC_0("no cherry-pick or revert in progress"));
 if (FUNC_6("HEAD", 0, &VAR_1, ((void*)0)))
  return FUNC_1(FUNC_0("cannot resolve HEAD"));
 if (FUNC_5(&VAR_1))
  return FUNC_1(FUNC_0("cannot abort from a branch yet to be born"));
 return FUNC_7(&VAR_1);
}
