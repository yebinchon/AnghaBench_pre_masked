
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef int path ;
typedef int line ;
typedef int errormsg ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,struct archive_entry**) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,int ,int ,int ) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_8 (char*,int,int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char const*,...) ;
 size_t FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char const*,size_t) ;
 scalar_t__ FUNC_14 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_7)
{
 static FILE *VAR_8 = ((void*)0);
 char *VAR_9;
 int VAR_10;
 int VAR_11;
 size_t VAR_12;
 struct archive_entry *VAR_13;
 char VAR_14[512];
 char VAR_15[VAR_2];
 char VAR_16[VAR_2 + 512];

 if (VAR_8 == ((void*)0)) {
  FUNC_11(VAR_15, sizeof(VAR_15), "%s/MANIFEST", VAR_5);
  VAR_8 = FUNC_9(VAR_15, "r");
 }

 if (VAR_8 != ((void*)0)) {
  FUNC_10(VAR_8);
  while (FUNC_8(VAR_14, sizeof(VAR_14), VAR_8) != ((void*)0)) {
   VAR_9 = &VAR_14[0];
   VAR_12 = FUNC_12(VAR_9, "\t") ;
   if (VAR_12 < 1 || FUNC_13(VAR_9, VAR_7, VAR_12) != 0)
    continue;





   VAR_12 = FUNC_12(VAR_9 += VAR_12 + (*VAR_9 != '\0' ? 1 : 0), "\t");
   VAR_12 = FUNC_12(VAR_9 += VAR_12 + (*VAR_9 != '\0' ? 1 : 0), "\t");
   if (VAR_12 > 0) {
    VAR_10 = (int)FUNC_14(VAR_9, (char **)((void*)0), 10);
    if (VAR_10 == 0 && VAR_6 == VAR_1)
     continue;
    return (VAR_10);
   }
  }
 }





 if ((VAR_4 = FUNC_2()) == ((void*)0)) {
  FUNC_11(VAR_16, sizeof(VAR_16),
      "Error: %s\n", FUNC_0(((void*)0)));
  FUNC_7("Extract Error", VAR_16, 0, 0, VAR_3);
  return (-1);
 }
 FUNC_6(VAR_4);
 FUNC_5(VAR_4);
 FUNC_11(VAR_15, sizeof(VAR_15), "%s/%s", VAR_5, VAR_7);
 VAR_11 = FUNC_4(VAR_4, VAR_15, 4096);
 if (VAR_11 != VAR_0) {
  FUNC_11(VAR_16, sizeof(VAR_16),
      "Error while extracting %s: %s\n", VAR_7,
      FUNC_0(VAR_4));
  FUNC_7("Extract Error", VAR_16, 0, 0, VAR_3);
  VAR_4 = ((void*)0);
  return (-1);
 }

 VAR_10 = 0;
 while (FUNC_3(VAR_4, &VAR_13) == VAR_0)
  VAR_10++;
 FUNC_1(VAR_4);
 VAR_4 = ((void*)0);

 return (VAR_10);
}
