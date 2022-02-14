
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {unsigned int pack_id; struct tag* next_tag; } ;
struct object_entry {unsigned int pack_id; struct object_entry* next; } ;
struct branch {unsigned int pack_id; struct branch* table_next_branch; } ;


 unsigned int FUNC_0 (struct object_entry**) ;
 void* VAR_0 ;
 struct branch** VAR_1 ;
 unsigned long VAR_2 ;
 struct tag* VAR_3 ;
 struct object_entry** VAR_4 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;
 struct tag *VAR_8;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  struct object_entry *VAR_9;

  for (VAR_9 = VAR_4[VAR_6]; VAR_9; VAR_9 = VAR_9->next)
   if (VAR_9->pack_id == VAR_5)
    VAR_9->pack_id = VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct branch *VAR_10;

  for (VAR_10 = VAR_1[VAR_7]; VAR_10; VAR_10 = VAR_10->table_next_branch)
   if (VAR_10->pack_id == VAR_5)
    VAR_10->pack_id = VAR_0;
 }

 for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next_tag)
  if (VAR_8->pack_id == VAR_5)
   VAR_8->pack_id = VAR_0;
}
