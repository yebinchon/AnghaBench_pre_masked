
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int ** VAR_5 ;
 int FUNC_2 (char const*,int,int ,char const**) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_6[], int VAR_7)
{
 int VAR_8;
 int VAR_9;

 if (VAR_7 > 2) {
  for (VAR_8 = 2; VAR_8 < VAR_7; VAR_8++) {
   const char *VAR_10;
   VAR_9 = FUNC_2(VAR_6[VAR_8], 1, VAR_1, &VAR_10);
   if (VAR_10) {
    if (VAR_2 == VAR_0 && VAR_4)
     FUNC_1(VAR_6[VAR_8]);
   } else {
    if (VAR_9 < VAR_3 && VAR_5[VAR_9] != ((void*)0))
     FUNC_0(VAR_9);
   }
  }
 }
 else
  for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
   if (VAR_5[VAR_9] != ((void*)0))
    FUNC_0(VAR_9);
}
