
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct packed_git {scalar_t__ num_objects; int mtime; scalar_t__ pack_keep_in_core; scalar_t__ pack_keep; int pack_local; struct packed_git* next; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct object_id*,int ) ;
 struct packed_git* FUNC_3 (int ) ;
 int FUNC_4 (struct object_id*) ;
 int FUNC_5 (struct object_id*,int ) ;
 int FUNC_6 (struct object_id*,struct packed_git*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct packed_git*) ;
 int FUNC_8 (int *,struct object_id*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(void)
{
 struct packed_git *VAR_2;
 uint32_t VAR_3;
 struct object_id VAR_4;

 for (VAR_2 = FUNC_3(VAR_0); VAR_2; VAR_2 = VAR_2->next) {
  if (!VAR_2->pack_local || VAR_2->pack_keep || VAR_2->pack_keep_in_core)
   continue;

  if (FUNC_7(VAR_2))
   FUNC_1(FUNC_0("cannot open pack index"));

  for (VAR_3 = 0; VAR_3 < VAR_2->num_objects; VAR_3++) {
   FUNC_6(&VAR_4, VAR_2, VAR_3);
   if (!FUNC_8(&VAR_1, &VAR_4) &&
       !FUNC_4(&VAR_4) &&
       !FUNC_5(&VAR_4, VAR_2->mtime))
    if (FUNC_2(&VAR_4, VAR_2->mtime))
     FUNC_1(FUNC_0("unable to force loose object"));
  }
 }
}
