
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char**,char**,char**) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(int VAR_4, char *VAR_5[])
{
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 FUNC_1(VAR_4 > 1);
 FUNC_1(VAR_5 != ((void*)0));



 VAR_10 = VAR_1;
 if (VAR_4 == 2) {
  FUNC_3(VAR_2, "Enumeration not supported on netgroup\n");
  VAR_10 = VAR_0;
 } else {
  for (VAR_11 = 2; VAR_11 < VAR_4; VAR_11++) {
   FUNC_8(VAR_5[VAR_11]);
   VAR_9 = 1;
   while (FUNC_5(&VAR_6, &VAR_7, &VAR_8) != 0) {
    if (VAR_9) {
     VAR_9 = 0;
     (void)FUNC_4(VAR_5[VAR_11], VAR_3);
    }
    (void)FUNC_6(" (%s,%s,%s)",
        (((VAR_6) != ((void*)0)) ? (VAR_6) : ""),
        (((VAR_7) != ((void*)0)) ? (VAR_7) : ""),
        (((VAR_8) != ((void*)0)) ? (VAR_8) : ""));
   }
   if (!VAR_9)
    (void)FUNC_7('\n');
   FUNC_2();
  }
 }
 return VAR_10;
}
