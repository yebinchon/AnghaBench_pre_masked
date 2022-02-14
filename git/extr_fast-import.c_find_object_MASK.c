
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int* hash; } ;
struct TYPE_2__ {int oid; } ;
struct object_entry {TYPE_1__ idx; struct object_entry* next; } ;


 struct object_entry** VAR_0 ;
 scalar_t__ FUNC_0 (struct object_id*,int *) ;

__attribute__((used)) static struct object_entry *FUNC_1(struct object_id *VAR_1)
{
 unsigned int VAR_2 = VAR_1->hash[0] << 8 | VAR_1->hash[1];
 struct object_entry *VAR_3;
 for (VAR_3 = VAR_0[VAR_2]; VAR_3; VAR_3 = VAR_3->next)
  if (FUNC_0(VAR_1, &VAR_3->idx.oid))
   return VAR_3;
 return ((void*)0);
}
