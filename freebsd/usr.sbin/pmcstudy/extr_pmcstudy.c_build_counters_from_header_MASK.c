
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counters {int dummy; } ;
typedef int buffer ;
typedef int FILE ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int,int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int ,size_t) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_4)
{
 char VAR_5[8192], *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 size_t VAR_10;




 if (FUNC_0(VAR_5, sizeof(VAR_5), VAR_4) == ((void*)0)) {
  FUNC_3("First line can't be read from file err:%d\n", VAR_1);
  return;
 }
 VAR_8 = FUNC_5(VAR_5);
 for (VAR_7=0, VAR_9=0; VAR_7<VAR_8; VAR_7++) {
  if (FUNC_6(&VAR_5[VAR_7], "s/", 2) == 0) {
   VAR_9++;
   for(;VAR_7<VAR_8;VAR_7++) {
    if (VAR_5[VAR_7] == ' ')
     break;
   }
  }
 }
 VAR_10 = sizeof(struct counters) * VAR_9;
 VAR_0 = FUNC_1(VAR_10);
 VAR_2 = VAR_9;
 if (VAR_0 == ((void*)0)) {
  FUNC_3("No memory err:%d\n", VAR_1);
  return;
 }
 FUNC_2(VAR_0, 0, VAR_10);
 for (VAR_7=0, VAR_9=0; VAR_7<VAR_8; VAR_7++) {
  if (FUNC_6(&VAR_5[VAR_7], "s/", 2) == 0) {
   VAR_6 = &VAR_5[VAR_7];
   for(;VAR_7<VAR_8;VAR_7++) {
    if (VAR_5[VAR_7] == ' ') {
     VAR_5[VAR_7] = 0;
     break;
    }
   }
   FUNC_4(VAR_9, VAR_6);
   VAR_9++;
  }
 }
 if (VAR_3)
  FUNC_3("We have %d entries\n", VAR_9);
}
