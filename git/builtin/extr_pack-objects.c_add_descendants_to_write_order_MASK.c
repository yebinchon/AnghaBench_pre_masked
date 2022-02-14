
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry {int dummy; } ;


 struct object_entry* FUNC_0 (struct object_entry*) ;
 struct object_entry* FUNC_1 (struct object_entry*) ;
 struct object_entry* FUNC_2 (struct object_entry*) ;
 int FUNC_3 (struct object_entry**,unsigned int*,struct object_entry*) ;

__attribute__((used)) static void FUNC_4(struct object_entry **VAR_0,
        unsigned int *VAR_1,
        struct object_entry *VAR_2)
{
 int VAR_3 = 1;
 while (VAR_2) {
  if (VAR_3) {
   struct object_entry *VAR_4;

   FUNC_3(VAR_0, VAR_1, VAR_2);

   for (VAR_4 = FUNC_2(VAR_2); VAR_4; VAR_4 = FUNC_2(VAR_4)) {
    FUNC_3(VAR_0, VAR_1, VAR_4);
   }
  }

  if (FUNC_1(VAR_2)) {
   VAR_3 = 1;
   VAR_2 = FUNC_1(VAR_2);
  } else {
   VAR_3 = 0;

   if (FUNC_2(VAR_2)) {
    VAR_2 = FUNC_2(VAR_2);
    continue;
   }

   VAR_2 = FUNC_0(VAR_2);
   while (VAR_2 && !FUNC_2(VAR_2)) {


    VAR_2 = FUNC_0(VAR_2);
   }
   if (!VAR_2) {

    return;
   }

   VAR_2 = FUNC_2(VAR_2);
  }
 };
}
