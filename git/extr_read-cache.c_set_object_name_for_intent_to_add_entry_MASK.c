
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct cache_entry {int oid; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct object_id*) ;
 scalar_t__ FUNC_3 (char*,int ,int ,struct object_id*) ;

void FUNC_4(struct cache_entry *VAR_1)
{
 struct object_id VAR_2;
 if (FUNC_3("", 0, VAR_0, &VAR_2))
  FUNC_1(FUNC_0("cannot create an empty blob in the object database"));
 FUNC_2(&VAR_1->oid, &VAR_2);
}
