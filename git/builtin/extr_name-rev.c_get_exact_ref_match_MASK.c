
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hash; } ;
struct object {TYPE_1__ oid; } ;
struct TYPE_7__ {char const* refname; } ;
struct TYPE_6__ {int sorted; TYPE_3__* table; int nr; } ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*,int ,int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *FUNC_2(const struct object *VAR_3)
{
 int VAR_4;

 if (!VAR_1.table || !VAR_1.nr)
  return ((void*)0);

 if (!VAR_1.sorted) {
  FUNC_0(VAR_1.table, VAR_1.nr, VAR_2);
  VAR_1.sorted = 1;
 }

 VAR_4 = FUNC_1(VAR_3->oid.hash, VAR_1.table, VAR_1.nr,
    VAR_0);
 if (0 <= VAR_4)
  return VAR_1.table[VAR_4].refname;
 return ((void*)0);
}
