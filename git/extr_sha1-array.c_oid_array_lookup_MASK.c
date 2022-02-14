
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int nr; int oid; int sorted; } ;
struct object_id {int hash; } ;


 int FUNC_0 (struct oid_array*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;

int FUNC_2(struct oid_array *VAR_1, const struct object_id *VAR_2)
{
 if (!VAR_1->sorted)
  FUNC_0(VAR_1);
 return FUNC_1(VAR_2->hash, VAR_1->oid, VAR_1->nr, VAR_0);
}
