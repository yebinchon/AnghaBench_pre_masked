
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct packed_git {size_t num_objects; scalar_t__ pack_keep_in_core; scalar_t__ pack_keep; int pack_local; struct packed_git* next; } ;
struct object_id {int dummy; } ;
struct object {int flags; int type; int oid; } ;
struct in_pack {size_t nr; TYPE_1__* array; int alloc; } ;
typedef int in_pack ;
struct TYPE_4__ {struct object* object; } ;


 int FUNC_0 (TYPE_1__*,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,size_t,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct packed_git* FUNC_6 (int ) ;
 struct object* FUNC_7 (struct object_id*) ;
 int FUNC_8 (struct object*,struct packed_git*,struct in_pack*) ;
 int FUNC_9 (struct in_pack*,int ,int) ;
 int FUNC_10 (struct object_id*,struct packed_git*,size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (struct packed_git*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_12(void)
{
 struct packed_git *VAR_3;
 struct in_pack VAR_4;
 uint32_t VAR_5;

 FUNC_9(&VAR_4, 0, sizeof(VAR_4));

 for (VAR_3 = FUNC_6(VAR_2); VAR_3; VAR_3 = VAR_3->next) {
  struct object_id VAR_6;
  struct object *VAR_7;

  if (!VAR_3->pack_local || VAR_3->pack_keep || VAR_3->pack_keep_in_core)
   continue;
  if (FUNC_11(VAR_3))
   FUNC_4(FUNC_2("cannot open pack index"));

  FUNC_0(VAR_4.array,
      VAR_4.nr + VAR_3->num_objects,
      VAR_4.alloc);

  for (VAR_5 = 0; VAR_5 < VAR_3->num_objects; VAR_5++) {
   FUNC_10(&VAR_6, VAR_3, VAR_5);
   VAR_7 = FUNC_7(&VAR_6);
   if (!(VAR_7->flags & VAR_0))
    FUNC_8(VAR_7, VAR_3, &VAR_4);
   VAR_7->flags |= VAR_0;
  }
 }

 if (VAR_4.nr) {
  FUNC_1(VAR_4.array, VAR_4.nr, VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_4.nr; VAR_5++) {
   struct object *VAR_8 = VAR_4.array[VAR_5].object;
   FUNC_3(&VAR_8->oid, VAR_8->type, "", 0);
  }
 }
 FUNC_5(VAR_4.array);
}
