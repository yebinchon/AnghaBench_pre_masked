
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color {int value; void* type; int blue; int green; int red; } ;


 int FUNC_0 (char const* const*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char const*,int,char const* const) ;
 long FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_4(struct color *VAR_4, const char *VAR_5, int VAR_6)
{

 static const char * const VAR_7[] = {
  "black", "red", "green", "yellow",
  "blue", "magenta", "cyan", "white"
 };
 char *VAR_8;
 int VAR_9;
 long VAR_10;


 if (FUNC_2(VAR_5, VAR_6, "normal")) {
  VAR_4->type = VAR_2;
  return 0;
 }


 if (VAR_6 == 7 && VAR_5[0] == '#') {
  if (!FUNC_1(VAR_5 + 1, &VAR_4->red) &&
      !FUNC_1(VAR_5 + 3, &VAR_4->green) &&
      !FUNC_1(VAR_5 + 5, &VAR_4->blue)) {
   VAR_4->type = VAR_3;
   return 0;
  }
 }


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7); VAR_9++) {
  if (FUNC_2(VAR_5, VAR_6, VAR_7[VAR_9])) {
   VAR_4->type = VAR_1;
   VAR_4->value = VAR_9;
   return 0;
  }
 }


 VAR_10 = FUNC_3(VAR_5, &VAR_8, 10);
 if (VAR_8 - VAR_5 == VAR_6) {




  if (VAR_10 < -1)
   ;
  else if (VAR_10 < 0) {
   VAR_4->type = VAR_2;
   return 0;

  } else if (VAR_10 < 8) {
   VAR_4->type = VAR_1;
   VAR_4->value = VAR_10;
   return 0;
  } else if (VAR_10 < 256) {
   VAR_4->type = VAR_0;
   VAR_4->value = VAR_10;
   return 0;
  }
 }

 return -1;
}
