
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct rev_name {char const* tip_name; int generation; int distance; int from_tag; int taggerdate; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {scalar_t__ date; struct commit_list* parents; } ;
typedef int rev_name ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 struct rev_name* FUNC_2 (struct commit*) ;
 scalar_t__ FUNC_3 (struct rev_name*,int ,int,int) ;
 int FUNC_4 (struct commit*) ;
 int FUNC_5 (struct commit*,struct rev_name*) ;
 int FUNC_6 (char const*,char*,size_t*) ;
 struct rev_name* FUNC_7 (int) ;
 char* FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9(struct commit *VAR_2,
  const char *VAR_3, timestamp_t VAR_4,
  int VAR_5, int VAR_6, int VAR_7,
  int VAR_8)
{
 struct rev_name *VAR_9 = FUNC_2(VAR_2);
 struct commit_list *VAR_10;
 int VAR_11 = 1;
 char *VAR_12 = ((void*)0);

 FUNC_4(VAR_2);

 if (VAR_2->date < VAR_1)
  return;

 if (VAR_8) {
  VAR_3 = VAR_12 = FUNC_8("%s^0", VAR_3);

  if (VAR_5)
   FUNC_0("generation: %d, but deref?", VAR_5);
 }

 if (VAR_9 == ((void*)0)) {
  VAR_9 = FUNC_7(sizeof(rev_name));
  FUNC_5(VAR_2, VAR_9);
  goto copy_data;
 } else if (FUNC_3(VAR_9, VAR_4, VAR_6, VAR_7)) {
copy_data:
  VAR_9->tip_name = VAR_3;
  VAR_9->taggerdate = VAR_4;
  VAR_9->generation = VAR_5;
  VAR_9->distance = VAR_6;
  VAR_9->from_tag = VAR_7;
 } else {
  FUNC_1(VAR_12);
  return;
 }

 for (VAR_10 = VAR_2->parents;
   VAR_10;
   VAR_10 = VAR_10->next, VAR_11++) {
  if (VAR_11 > 1) {
   size_t VAR_13;
   char *VAR_14;

   FUNC_6(VAR_3, "^0", &VAR_13);
   if (VAR_5 > 0)
    VAR_14 = FUNC_8("%.*s~%d^%d", (int)VAR_13, VAR_3,
         VAR_5, VAR_11);
   else
    VAR_14 = FUNC_8("%.*s^%d", (int)VAR_13, VAR_3,
         VAR_11);

   FUNC_9(VAR_10->item, VAR_14, VAR_4, 0,
     VAR_6 + VAR_0,
     VAR_7, 0);
  } else {
   FUNC_9(VAR_10->item, VAR_3, VAR_4,
     VAR_5 + 1, VAR_6 + 1,
     VAR_7, 0);
  }
 }
}
