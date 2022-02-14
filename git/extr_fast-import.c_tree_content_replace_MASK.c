
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct tree_entry {struct tree_content* tree; TYPE_1__* versions; } ;
struct tree_content {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int oid; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct object_id const*) ;
 int FUNC_4 (struct tree_content*) ;

__attribute__((used)) static void FUNC_5(
 struct tree_entry *VAR_0,
 const struct object_id *VAR_1,
 const uint16_t VAR_2,
 struct tree_content *VAR_3)
{
 if (!FUNC_0(VAR_2))
  FUNC_1("Root cannot be a non-directory");
 FUNC_2(&VAR_0->versions[0].oid);
 FUNC_3(&VAR_0->versions[1].oid, VAR_1);
 if (VAR_0->tree)
  FUNC_4(VAR_0->tree);
 VAR_0->tree = VAR_3;
}
