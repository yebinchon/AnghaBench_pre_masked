
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct oid_array {int nr; struct object_id* oid; } ;
struct object_id {int hash; } ;
struct object_directory {struct object_directory* next; } ;
struct TYPE_7__ {int hash; } ;
struct disambiguate_state {TYPE_3__ bin_pfx; int len; int ambiguous; TYPE_2__* repo; } ;
struct TYPE_6__ {TYPE_1__* objects; } ;
struct TYPE_5__ {struct object_directory* odb; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct oid_array* FUNC_1 (struct object_directory*,TYPE_3__*) ;
 int FUNC_2 (struct oid_array*,TYPE_3__*) ;
 int FUNC_3 (struct disambiguate_state*,struct object_id const*) ;

__attribute__((used)) static void FUNC_4(struct disambiguate_state *VAR_0)
{
 struct object_directory *VAR_1;

 for (VAR_1 = VAR_0->repo->objects->odb; VAR_1 && !VAR_0->ambiguous; VAR_1 = VAR_1->next) {
  int VAR_2;
  struct oid_array *VAR_3;

  VAR_3 = FUNC_1(VAR_1, &VAR_0->bin_pfx);
  VAR_2 = FUNC_2(VAR_3, &VAR_0->bin_pfx);
  if (VAR_2 < 0)
   VAR_2 = -1 - VAR_2;
  while (!VAR_0->ambiguous && VAR_2 < VAR_3->nr) {
   const struct object_id *VAR_4;
   VAR_4 = VAR_3->oid + VAR_2;
   if (!FUNC_0(VAR_0->len, VAR_0->bin_pfx.hash, VAR_4->hash))
    break;
   FUNC_3(VAR_0, VAR_4);
   VAR_2++;
  }
 }
}
