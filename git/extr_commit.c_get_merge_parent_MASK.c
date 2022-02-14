
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct object_id*) ;
 int FUNC_1 (struct commit*) ;
 struct object* FUNC_2 (int ,struct object_id*) ;
 scalar_t__ FUNC_3 (char const*,int ,struct object*,int ) ;
 int FUNC_4 (struct commit*,char const*,struct object*) ;
 int VAR_1 ;

struct commit *FUNC_5(const char *VAR_2)
{
 struct object *VAR_3;
 struct commit *VAR_4;
 struct object_id VAR_5;
 if (FUNC_0(VAR_2, &VAR_5))
  return ((void*)0);
 VAR_3 = FUNC_2(VAR_1, &VAR_5);
 VAR_4 = (struct commit *)FUNC_3(VAR_2, 0, VAR_3, VAR_0);
 if (VAR_4 && !FUNC_1(VAR_4))
  FUNC_4(VAR_4, VAR_2, VAR_3);
 return VAR_4;
}
