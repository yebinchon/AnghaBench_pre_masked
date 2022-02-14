
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path_zoneinfo_file ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_5)
{
 int VAR_6;
 FILE *VAR_7;
 char VAR_8[VAR_1];

 if ((size_t)FUNC_5(VAR_8, sizeof(VAR_8),
     "%s/%s", VAR_3, VAR_5) >= sizeof(VAR_8))
  FUNC_0(1, "%s/%s name too long", VAR_3, VAR_5);
 VAR_6 = FUNC_4(VAR_8);


 if (VAR_4 && (VAR_6 & VAR_0) == 0) {
  if ((VAR_7 = FUNC_2(VAR_2, "w")) != ((void*)0)) {
   FUNC_3(VAR_7, "%s\n", VAR_5);
   FUNC_1(VAR_7);
  }
 }

 return (VAR_6);
}
