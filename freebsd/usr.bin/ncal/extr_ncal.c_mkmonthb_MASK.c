
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tm ;
struct tm {int tm_mon; } ;
struct monthlines {char** lines; int* extralen; int * name; } ;
struct TYPE_4__ {int y; int m; int d; } ;
typedef TYPE_1__ date ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int,int*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct tm*,int ,int) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,char*,struct tm*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(int VAR_4, int VAR_5, int VAR_6, struct monthlines *VAR_7)
{

 struct tm VAR_8;

 date VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 char *VAR_19;



 if (VAR_6) {
  VAR_19 = VAR_3;
  VAR_10 = 4;
 } else {
  VAR_19 = VAR_0;
  VAR_10 = 3;
 }


 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.tm_mon = VAR_5;
 FUNC_6(VAR_7->name, sizeof(VAR_7->name) / sizeof(VAR_7->name[0]),
   L"%OB", &VAR_8);
 VAR_7->name[0] = FUNC_5(VAR_7->name[0]);






 VAR_9.y = VAR_4;
 VAR_9.m = VAR_5 + 1;
 VAR_9.d = 1;
 VAR_11 = FUNC_4(&VAR_9);
 if (VAR_5 == 11) {
  VAR_9.y = VAR_4 + 1;
  VAR_9.m = 1;
  VAR_9.d = 1;
 } else {
  VAR_9.y = VAR_4;
  VAR_9.m = VAR_5 + 2;
  VAR_9.d = 1;
 }
 VAR_18 = FUNC_4(&VAR_9);

 if (VAR_6) {
  VAR_9.y = VAR_4;
  VAR_9.m = 1;
  VAR_9.d = 1;
  VAR_17 = FUNC_4(&VAR_9);
 }





 VAR_12 = VAR_11 - (FUNC_7(VAR_11)+1) % 7;






 for (VAR_13 = 0; VAR_13 != 6; VAR_13++) {
  VAR_16 = 0;
  for (VAR_14 = VAR_12 + 7 * VAR_13, VAR_15 = 0; VAR_14 < VAR_18 && VAR_15 != VAR_10 * 7;
      VAR_14++, VAR_15 += VAR_10) {
   if (VAR_14 >= VAR_11) {
    if (VAR_6)
     VAR_9.d = VAR_14 - VAR_17 + 1;
    else
     FUNC_3(VAR_14, &VAR_9);
    if (VAR_14 == VAR_2 && !VAR_1)
     FUNC_0(VAR_7->lines[VAR_13] + VAR_15,
         VAR_19 + VAR_9.d * VAR_10, VAR_10, &VAR_16);
    else
     FUNC_1(VAR_7->lines[VAR_13] + VAR_15 + VAR_16,
            VAR_19 + VAR_9.d * VAR_10, VAR_10);
   } else
    FUNC_1(VAR_7->lines[VAR_13] + VAR_15 + VAR_16, "    ", VAR_10);
  }
  if (VAR_15 == 0)
   VAR_7->lines[VAR_13][1] = '\0';
  else
   VAR_7->lines[VAR_13][VAR_15 + VAR_16] = '\0';
  VAR_7->extralen[VAR_13] = VAR_16;
 }
}
