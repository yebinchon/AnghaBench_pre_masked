
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char**,char*,char const*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*,int,int,int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,unsigned int,int ) ;
 int FUNC_13 (int,struct stat*) ;
 int FUNC_14 (char const*,int ) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_18(const char *VAR_5)
{
 struct stat VAR_6;
 FILE *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 char *VAR_18, *VAR_19;

 VAR_11 = FUNC_14(VAR_5, VAR_2);
 if (VAR_11 == -1)
  FUNC_4(VAR_1, "Couldn't open file '%s'", VAR_5);
 VAR_9 = FUNC_13(VAR_11, &VAR_6);
 if (VAR_9 == -1)
  FUNC_4(VAR_1, "fstat() failed");
 if (FUNC_0(VAR_6.st_mode))
  FUNC_5(VAR_1, "'%s' is a directory", VAR_5);
 VAR_7 = FUNC_7(VAR_11, "r");
 if (VAR_7 == ((void*)0))
  FUNC_4(VAR_1, "fdopen() failed");
 VAR_10 = 1024;
 VAR_19 = FUNC_3(1, VAR_10);
 if (VAR_19 == ((void*)0))
  FUNC_4(VAR_1, "Couldn't allocate memory");

 FUNC_1(&VAR_18, "/usr/bin/elfdump -c %s | grep -A 8 kern_conf"
     "| tail -5 | cut -d ' ' -f 2 | paste - - - - -", VAR_5);
 if (VAR_18 == ((void*)0))
  FUNC_5(VAR_1, "asprintf() failed");
 VAR_8 = FUNC_16(VAR_18, "r");
 if (VAR_8 == ((void*)0))
  FUNC_5(VAR_1, "popen() failed");
 FUNC_11(VAR_18);
 (void)FUNC_10(VAR_19, VAR_10, 1, VAR_8);
 FUNC_15(VAR_8);
 VAR_11 = FUNC_17(VAR_19, "%d%d%d%d%d", &VAR_13, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
 FUNC_11(VAR_19);
 if (VAR_11 != 5)
  FUNC_5(VAR_1, "File %s doesn't contain configuration "
      "file. Either unsupported, or not compiled with "
      "INCLUDE_CONFIG_FILE", VAR_5);
 VAR_11 = FUNC_12(VAR_7, VAR_13, VAR_3);
 if (VAR_11 != 0)
  FUNC_4(VAR_1, "fseek() failed");
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_11 = FUNC_8(VAR_7);
  if (VAR_11 == VAR_0)
   break;
  if (VAR_11 == '\0') {
   FUNC_2(VAR_12 == VAR_14 - 1 &&
       ("\\0 found in the middle of a file"));
   break;
  }
  FUNC_9(VAR_11, VAR_4);
 }
 FUNC_6(VAR_7);
}
