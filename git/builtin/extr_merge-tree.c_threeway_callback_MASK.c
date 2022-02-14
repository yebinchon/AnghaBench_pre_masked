
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {int mode; int oid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct name_entry*,struct name_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct traverse_info*,struct name_entry*,struct name_entry*) ;
 scalar_t__ FUNC_4 (struct name_entry*,struct name_entry*) ;
 int FUNC_5 (struct traverse_info*,struct name_entry*) ;

__attribute__((used)) static int FUNC_6(int VAR_0, unsigned long VAR_1, unsigned long VAR_2, struct name_entry *VAR_3, struct traverse_info *VAR_4)
{

 if (FUNC_4(VAR_3+1, VAR_3+2) || FUNC_1(VAR_3+1, VAR_3+2)) {

  FUNC_3(VAR_4, ((void*)0), VAR_3+1);
  return VAR_1;
 }

 if (FUNC_4(VAR_3+0, VAR_3+1)) {
  if (!FUNC_2(&VAR_3[2].oid) && !FUNC_0(VAR_3[2].mode)) {

   FUNC_3(VAR_4, VAR_3+1, VAR_3+2);
   return VAR_1;
  }





 }

 if (FUNC_4(VAR_3+0, VAR_3+2) || FUNC_1(VAR_3+0, VAR_3+2)) {

  FUNC_3(VAR_4, ((void*)0), VAR_3+1);
  return VAR_1;
 }

 FUNC_5(VAR_4, VAR_3);
 return VAR_1;
}
