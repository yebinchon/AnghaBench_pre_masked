
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scrnmap ;
typedef int scrmap_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *,int,int,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int * FUNC_6 (char const**,char const**,char const**,char const**,char**) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_2)
{
 FILE *VAR_3;
 int VAR_4;
 char *VAR_5;
 scrmap_t VAR_6;
 const char *VAR_7[] = {"", VAR_1, ((void*)0)};
 const char *VAR_8[] = {VAR_2, ((void*)0)};
 const char *VAR_9[] = {"", ".scm", ((void*)0)};
 const char *VAR_10[] = {"", ((void*)0)};

 VAR_3 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, &VAR_5);

 if (VAR_3 == ((void*)0)) {
  FUNC_7();
  FUNC_2(1, "screenmap file not found");
 }

 VAR_4 = sizeof(VAR_6);

 if (FUNC_0(VAR_3, (char *)&VAR_6, VAR_4) != VAR_4) {
  FUNC_8(VAR_3);

  if (FUNC_4(&VAR_6, 1, VAR_4, VAR_3) != (size_t)VAR_4) {
   FUNC_3(VAR_3);
   FUNC_7();
   FUNC_2(1, "bad screenmap file");
  }
 }

 if (FUNC_5(0, VAR_0, &VAR_6) == -1) {
  FUNC_7();
  FUNC_1(1, "loading screenmap");
 }

 FUNC_3(VAR_3);
}
