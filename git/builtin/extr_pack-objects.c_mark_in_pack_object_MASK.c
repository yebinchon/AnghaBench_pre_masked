
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packed_git {int dummy; } ;
struct TYPE_3__ {int hash; } ;
struct object {TYPE_1__ oid; } ;
struct in_pack {size_t nr; TYPE_2__* array; } ;
struct TYPE_4__ {struct object* object; int offset; } ;


 int FUNC_0 (int ,struct packed_git*) ;

__attribute__((used)) static void FUNC_1(struct object *VAR_0, struct packed_git *VAR_1, struct in_pack *VAR_2)
{
 VAR_2->array[VAR_2->nr].offset = FUNC_0(VAR_0->oid.hash, VAR_1);
 VAR_2->array[VAR_2->nr].object = VAR_0;
 VAR_2->nr++;
}
