
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
struct pmcstat_image {int * pi_addr2line; int pi_fullpath; } ;
typedef int imagepath ;
typedef int cmdline ;
struct TYPE_2__ {char* pa_fsroot; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,size_t,int *) ;
 int FUNC_5 (int *,char*,void*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int,char*,char*,...) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*) ;

int
FUNC_13(struct pmcstat_image *VAR_3, uintfptr_t VAR_4,
    char *VAR_5, size_t VAR_6, unsigned *VAR_7,
    char *VAR_8, size_t VAR_9)
{
 static int VAR_10 = 0;

 char *VAR_11, VAR_12[VAR_1], VAR_13[VAR_1];
 unsigned VAR_14;
 int VAR_15;

 if (VAR_3->pi_addr2line == ((void*)0)) {

  FUNC_10(VAR_13, sizeof(VAR_13),
      "/usr/lib/debug/%s%s.debug",
      VAR_2.pa_fsroot,
      FUNC_8(VAR_3->pi_fullpath));
  VAR_15 = FUNC_6(VAR_13, VAR_0);
  if (VAR_15 < 0) {

   FUNC_10(VAR_13, sizeof(VAR_13), "%s%s.symbols",
       VAR_2.pa_fsroot,
       FUNC_8(VAR_3->pi_fullpath));
   VAR_15 = FUNC_6(VAR_13, VAR_0);
   if (VAR_15 < 0) {
    FUNC_10(VAR_13, sizeof(VAR_13), "%s%s",
        VAR_2.pa_fsroot,
        FUNC_8(
            VAR_3->pi_fullpath));
   }
  }
  if (VAR_15 >= 0)
   FUNC_1(VAR_15);





  FUNC_10(VAR_12, sizeof(VAR_12), "addr2line -Cfe \"%s\"",
      VAR_13);
  VAR_3->pi_addr2line = FUNC_9(VAR_12, "r+");
  if (VAR_3->pi_addr2line == ((void*)0)) {
   if (!VAR_10) {
    VAR_10 = 1;
    FUNC_12(
"WARNING: addr2line is needed for source code information."
        );
   }
   return (0);
  }
 }

 if (FUNC_2(VAR_3->pi_addr2line) || FUNC_3(VAR_3->pi_addr2line)) {
  FUNC_12("WARNING: addr2line pipe error");
  FUNC_7(VAR_3->pi_addr2line);
  VAR_3->pi_addr2line = ((void*)0);
  return (0);
 }

 FUNC_5(VAR_3->pi_addr2line, "%p\n", (void *)VAR_4);

 if (FUNC_4(VAR_8, VAR_9, VAR_3->pi_addr2line) == ((void*)0)) {
  FUNC_12("WARNING: addr2line function name read error");
  return (0);
 }
 VAR_11 = FUNC_11(VAR_8, '\n');
 if (VAR_11 != ((void*)0))
  *VAR_11 = '\0';

 if (FUNC_4(VAR_5, VAR_6, VAR_3->pi_addr2line) == ((void*)0)) {
  FUNC_12("WARNING: addr2line source file read error");
  return (0);
 }
 VAR_11 = FUNC_11(VAR_5, ':');
 if (VAR_11 == ((void*)0)) {
  FUNC_12("WARNING: addr2line source line separator missing");
  return (0);
 }
 *VAR_11 = '\0';
 VAR_14 = FUNC_0(VAR_11+1);
 if (VAR_14 == 0)
  return (0);
 *VAR_7 = VAR_14;
 return (1);
}
