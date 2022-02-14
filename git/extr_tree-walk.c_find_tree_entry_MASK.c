
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int entry; scalar_t__ size; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct repository*,struct object_id*,char const*,struct object_id*,unsigned short*) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (struct object_id*,struct object_id*) ;
 int FUNC_4 (char const*) ;
 struct object_id* FUNC_5 (struct tree_desc*,char const**,unsigned short*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tree_desc*) ;

__attribute__((used)) static int FUNC_8(struct repository *VAR_0, struct tree_desc *VAR_1,
      const char *VAR_2, struct object_id *VAR_3,
      unsigned short *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_2);
 while (VAR_1->size) {
  const char *VAR_6;
  struct object_id VAR_7;
  int VAR_8, VAR_9;

  FUNC_3(&VAR_7, FUNC_5(VAR_1, &VAR_6, VAR_4));
  VAR_8 = FUNC_6(&VAR_1->entry);
  FUNC_7(VAR_1);
  if (VAR_8 > VAR_5)
   continue;
  VAR_9 = FUNC_2(VAR_2, VAR_6, VAR_8);
  if (VAR_9 > 0)
   continue;
  if (VAR_9 < 0)
   break;
  if (VAR_8 == VAR_5) {
   FUNC_3(VAR_3, &VAR_7);
   return 0;
  }
  if (VAR_2[VAR_8] != '/')
   continue;
  if (!FUNC_0(*VAR_4))
   break;
  if (++VAR_8 == VAR_5) {
   FUNC_3(VAR_3, &VAR_7);
   return 0;
  }
  return FUNC_1(VAR_0, &VAR_7, VAR_2 + VAR_8, VAR_3, VAR_4);
 }
 return -1;
}
