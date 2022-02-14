
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {scalar_t__ size; } ;
struct tree_desc_x {struct tree_desc d; struct tree_desc_skip* skip; } ;
struct tree_desc_skip {char* ptr; struct tree_desc_skip* prev; } ;
struct name_entry {char* path; } ;


 int FUNC_0 (char const*,int,char const*,int) ;
 int FUNC_1 (struct name_entry*) ;
 int FUNC_2 (struct tree_desc*,struct name_entry*) ;
 int FUNC_3 (struct name_entry*) ;
 int FUNC_4 (struct tree_desc*) ;

__attribute__((used)) static void FUNC_5(struct tree_desc_x *VAR_0,
       struct name_entry *VAR_1,
       const char *VAR_2,
       int VAR_3)
{
 const char *VAR_4;
 int VAR_5;
 struct tree_desc VAR_6;
 struct tree_desc_skip *VAR_7;





 while (1) {
  if (!VAR_0->d.size) {
   FUNC_1(VAR_1);
   break;
  }
  FUNC_2(&VAR_0->d, VAR_1);
  for (VAR_7 = VAR_0->skip; VAR_7; VAR_7 = VAR_7->prev)
   if (VAR_1->path == VAR_7->ptr)
    break;
  if (!VAR_7)
   break;

  FUNC_4(&VAR_0->d);
 }

 if (!VAR_2 || !VAR_1->path)
  return;




 VAR_4 = VAR_1->path;
 VAR_5 = FUNC_3(VAR_1);
 switch (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5)) {
 case -1:
  FUNC_1(VAR_1);
 case 0:
  return;
 default:
  break;
 }





 VAR_6 = VAR_0->d;
 while (VAR_6.size) {
  FUNC_2(&VAR_6, VAR_1);
  VAR_4 = VAR_1->path;
  VAR_5 = FUNC_3(VAR_1);
  switch (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5)) {
  case -1:
   FUNC_1(VAR_1);
  case 0:
   return;
  default:
   FUNC_4(&VAR_6);
   break;
  }

 }
 FUNC_1(VAR_1);
}
