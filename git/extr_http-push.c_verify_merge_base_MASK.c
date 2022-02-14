
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct ref {char* name; struct object_id old_oid; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit*,struct commit*) ;
 struct commit* FUNC_1 (struct object_id*,char*) ;

__attribute__((used)) static int FUNC_2(struct object_id *VAR_0, struct ref *VAR_1)
{
 struct commit *VAR_2 = FUNC_1(VAR_0, "HEAD");
 struct commit *VAR_3 = FUNC_1(&VAR_1->old_oid,
           VAR_1->name);

 return FUNC_0(VAR_3, VAR_2);
}
