
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* opts; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char** VAR_1 ;
 TYPE_1__* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char**,char*) ;

int
FUNC_4(const char *VAR_4)
{
 int VAR_5, VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;

 VAR_6 = -1;
 VAR_7 = VAR_8 = FUNC_2(VAR_4);
 VAR_9 = FUNC_3(&VAR_7, ",");
 if (VAR_9 != ((void*)0)) {
  if (FUNC_1(VAR_9, "bootrom") == 0) {
   VAR_3 = VAR_7;
   VAR_6 = 0;
   goto done;
  }
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (FUNC_1(VAR_9, VAR_1[VAR_5]) == 0) {
    VAR_2[VAR_5].opts = VAR_7;
    VAR_6 = 0;
    goto done;
   }
  }
 }

done:
 if (VAR_6)
  FUNC_0(VAR_8);

 return (VAR_6);
}
