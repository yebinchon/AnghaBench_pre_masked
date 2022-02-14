
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct vc4_plane_state {int dlist_count; int dlist_size; void** dlist; } ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 void** FUNC_1 (void*,int,int ) ;
 void* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (void**,void**,int) ;

__attribute__((used)) static void FUNC_4(struct vc4_plane_state *VAR_1, u32 VAR_2)
{
 if (VAR_1->dlist_count == VAR_1->dlist_size) {
  u32 VAR_3 = FUNC_2(4u, VAR_1->dlist_count * 2);
  u32 *VAR_4 = FUNC_1(VAR_3, 4, VAR_0);

  if (!VAR_4)
   return;
  FUNC_3(VAR_4, VAR_1->dlist, VAR_1->dlist_count * 4);

  FUNC_0(VAR_1->dlist);
  VAR_1->dlist = VAR_4;
  VAR_1->dlist_size = VAR_3;
 }

 VAR_1->dlist[VAR_1->dlist_count++] = VAR_2;
}
