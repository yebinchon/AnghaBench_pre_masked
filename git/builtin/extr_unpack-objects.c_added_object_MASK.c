
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct delta_info {scalar_t__ base_offset; struct delta_info* next; int size; int delta; int nr; int base_oid; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {scalar_t__ offset; int oid; } ;


 struct delta_info* VAR_0 ;
 int FUNC_0 (struct delta_info*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int,void*,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_2, enum object_type VAR_3,
    void *VAR_4, unsigned long VAR_5)
{
 struct delta_info **VAR_6 = &VAR_0;
 struct delta_info *VAR_7;

 while ((VAR_7 = *VAR_6) != ((void*)0)) {
  if (FUNC_1(&VAR_7->base_oid, &VAR_1[VAR_2].oid) ||
      VAR_7->base_offset == VAR_1[VAR_2].offset) {
   *VAR_6 = VAR_7->next;
   VAR_6 = &VAR_0;
   FUNC_2(VAR_7->nr, VAR_3, VAR_4, VAR_5,
          VAR_7->delta, VAR_7->size);
   FUNC_0(VAR_7);
   continue;
  }
  VAR_6 = &VAR_7->next;
 }
}
