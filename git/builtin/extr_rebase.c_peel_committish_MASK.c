
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct object_id*) ;
 struct object* FUNC_1 (int ,struct object_id*) ;
 scalar_t__ FUNC_2 (char const*,int ,struct object*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct commit *FUNC_3(const char *VAR_2)
{
 struct object *VAR_3;
 struct object_id VAR_4;

 if (FUNC_0(VAR_2, &VAR_4))
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 return (struct commit *)FUNC_2(VAR_2, 0, VAR_3, VAR_0);
}
