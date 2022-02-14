
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_4__ {int refname; int oid; } ;
struct TYPE_3__ {int nr; scalar_t__ sorted; TYPE_2__* table; int alloc; } ;


 int FUNC_0 (TYPE_2__*,int,int ) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (int *,struct object_id const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(const struct object_id *VAR_1, const char *VAR_2,
        int VAR_3)
{
 VAR_2 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_0.table, VAR_0.nr + 1, VAR_0.alloc);
 FUNC_2(&VAR_0.table[VAR_0.nr].oid, VAR_1);
 VAR_0.table[VAR_0.nr].refname = FUNC_3(VAR_2);
 VAR_0.nr++;
 VAR_0.sorted = 0;
}
