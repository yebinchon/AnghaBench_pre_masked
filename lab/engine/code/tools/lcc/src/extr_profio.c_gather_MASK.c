
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func {int dummy; } ;
struct file {char* name; struct file* link; scalar_t__ funcs; scalar_t__ counts; scalar_t__ count; scalar_t__ size; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (struct file*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int,int,int,struct func*) ;
 struct func* FUNC_3 (char*,char*,int,int,int) ;
 int FUNC_4 (int,char*,int,int,int) ;
 int FUNC_5 (int) ;
 struct file* VAR_1 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 char* FUNC_8 () ;

__attribute__((used)) static int FUNC_9(void) {
 int VAR_2, VAR_3, VAR_4, VAR_5;
 char *VAR_6[64];

 if ((VAR_3 = FUNC_7()) < 0)
  return 0;
 FUNC_5(VAR_3 < FUNC_0(VAR_6));
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if ((VAR_6[VAR_2] = FUNC_8()) == 0)
   return -1;
  if (!FUNC_6(VAR_6[VAR_2])) {
   struct file *VAR_7;
   FUNC_1(VAR_7, VAR_0);
   VAR_7->name = VAR_6[VAR_2];
   VAR_7->size = VAR_7->count = 0;
   VAR_7->counts = 0;
   VAR_7->funcs = 0;
   VAR_7->link = VAR_1;
   VAR_1 = VAR_7;
  }
 }
 if ((VAR_4 = FUNC_7()) < 0)
  return -1;
 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  struct func *VAR_8;
  char *VAR_9, *VAR_10;
  int VAR_11, VAR_12, VAR_13, VAR_14;
  if ((VAR_9 = FUNC_8()) == 0 || (VAR_11 = FUNC_7()) <= 0
  || (VAR_12 = FUNC_7()) < 0 || (VAR_13 = FUNC_7()) < 0 || (VAR_14 = FUNC_7()) < 0)
   return -1;
  VAR_8 = FUNC_3(VAR_9, VAR_6[VAR_11-1], VAR_12, VAR_13, VAR_14);
  if ((VAR_9 = FUNC_8()) == 0 || (VAR_10 = FUNC_8()) == 0
  || (VAR_12 = FUNC_7()) < 0 || (VAR_13 = FUNC_7()) < 0)
   return -1;
  if (*VAR_9 != '?')
   FUNC_2(VAR_9, VAR_10, VAR_12, VAR_13, VAR_14, VAR_8);
 }
 if ((VAR_5 = FUNC_7()) < 0)
  return -1;
 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
  int VAR_15, VAR_16, VAR_17, VAR_18;
  if ((VAR_15 = FUNC_7()) < 0 || (VAR_16 = FUNC_7()) < 0 || (VAR_17 = FUNC_7()) < 0
  || (VAR_18 = FUNC_7()) < 0)
   return -1;
  if (VAR_15)
   FUNC_4(VAR_2, VAR_6[VAR_15-1], VAR_16, VAR_17, VAR_18);
 }
 return 1;
}
