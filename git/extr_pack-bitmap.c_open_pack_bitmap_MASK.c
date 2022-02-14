
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct packed_git {struct packed_git* next; } ;
struct bitmap_index {int map; } ;


 int FUNC_0 (int) ;
 struct packed_git* FUNC_1 (struct repository*) ;
 scalar_t__ FUNC_2 (struct bitmap_index*,struct packed_git*) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_0,
       struct bitmap_index *VAR_1)
{
 struct packed_git *VAR_2;
 int VAR_3 = -1;

 FUNC_0(!VAR_1->map);

 for (VAR_2 = FUNC_1(VAR_0); VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_2(VAR_1, VAR_2) == 0)
   VAR_3 = 0;
 }

 return VAR_3;
}
