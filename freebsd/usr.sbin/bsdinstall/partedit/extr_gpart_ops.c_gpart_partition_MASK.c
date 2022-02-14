
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gctl_req {int dummy; } ;
struct TYPE_4__ {int defaultno; } ;
struct TYPE_3__ {int bootcode; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (char*,char*,int ,int ) ;
 int FUNC_4 (struct gctl_req*) ;
 struct gctl_req* FUNC_5 () ;
 char* FUNC_6 (struct gctl_req*) ;
 int FUNC_7 (struct gctl_req*,char*,int,char const*) ;
 TYPE_1__* FUNC_8 (char const*,int) ;
 int FUNC_9 (char*,int *,char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*,char const*) ;

int
FUNC_12(const char *VAR_4, const char *VAR_5)
{
 int VAR_6;
 struct gctl_req *VAR_7;
 const char *VAR_8;

schememenu:
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_1(FUNC_2());

  if (VAR_5 == ((void*)0))
   return (-1);

  if (!FUNC_10(VAR_5)) {
   char VAR_9[512];
   FUNC_11(VAR_9, "This partition scheme (%s) is not "
       "bootable on this platform. Are you sure you want "
       "to proceed?", VAR_5);
   VAR_3.defaultno = VAR_2;
   VAR_6 = FUNC_3("Warning", VAR_9, 0, 0);
   VAR_3.defaultno = VAR_0;
   if (VAR_6) {

    VAR_5 = ((void*)0);
    goto schememenu;
   }
  }
 }

 VAR_7 = FUNC_5();
 FUNC_7(VAR_7, "class", -1, "PART");
 FUNC_7(VAR_7, "arg0", -1, VAR_4);
 FUNC_7(VAR_7, "flags", -1, VAR_1);
 FUNC_7(VAR_7, "scheme", -1, VAR_5);
 FUNC_7(VAR_7, "verb", -1, "create");

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 != ((void*)0) && VAR_8[0] != '\0') {
  FUNC_9("Error", ((void*)0), VAR_8);
  FUNC_4(VAR_7);
  VAR_5 = ((void*)0);
  goto schememenu;
 }
 FUNC_4(VAR_7);

 if (FUNC_0(VAR_5) != ((void*)0))
  FUNC_8(VAR_4, 1)->bootcode = 1;
 return (0);
}
