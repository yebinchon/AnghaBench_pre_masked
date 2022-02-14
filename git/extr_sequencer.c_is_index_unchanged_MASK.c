
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {struct index_state* index; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct object_id* FUNC_2 (struct index_state*) ;
 int FUNC_3 (struct commit*) ;
 struct commit* FUNC_4 (struct repository*,struct object_id*) ;
 int FUNC_5 (struct object_id*,int ) ;
 scalar_t__ FUNC_6 (struct commit*) ;
 int FUNC_7 (char*,int ,struct object_id*,int *) ;

__attribute__((used)) static int FUNC_8(struct repository *VAR_1)
{
 struct object_id VAR_2, *VAR_3;
 struct commit *VAR_4;
 struct index_state *VAR_5 = VAR_1->index;

 if (!FUNC_7("HEAD", VAR_0, &VAR_2, ((void*)0)))
  return FUNC_1(FUNC_0("could not resolve HEAD commit"));

 VAR_4 = FUNC_4(VAR_1, &VAR_2);
 if (FUNC_6(VAR_4))
  return -1;

 if (!(VAR_3 = FUNC_2(VAR_5)))
  return -1;

 return FUNC_5(VAR_3, FUNC_3(VAR_4));
}
