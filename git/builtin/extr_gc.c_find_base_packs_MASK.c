
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct packed_git {unsigned long pack_size; int pack_name; int pack_local; struct packed_git* next; } ;


 struct packed_git* FUNC_0 (int ) ;
 int FUNC_1 (struct string_list*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct packed_git *FUNC_2(struct string_list *VAR_1,
       unsigned long VAR_2)
{
 struct packed_git *VAR_3, *VAR_4 = ((void*)0);

 for (VAR_3 = FUNC_0(VAR_0); VAR_3; VAR_3 = VAR_3->next) {
  if (!VAR_3->pack_local)
   continue;
  if (VAR_2) {
   if (VAR_3->pack_size >= VAR_2)
    FUNC_1(VAR_1, VAR_3->pack_name);
  } else if (!VAR_4 || VAR_4->pack_size < VAR_3->pack_size) {
   VAR_4 = VAR_3;
  }
 }

 if (VAR_4)
  FUNC_1(VAR_1, VAR_4->pack_name);

 return VAR_4;
}
