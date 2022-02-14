
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char*) ;
 char* VAR_1 ;
 int FUNC_1 (int,char*,char const*,...) ;
 void* FUNC_2 (int ) ;
 char const* VAR_2 ;
 void* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 int * VAR_3 ;
 char const* VAR_4 ;
 int * FUNC_5 (char*,int ) ;
 int * VAR_5 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 char* VAR_8 ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_9, const char *VAR_10)
{
 struct stat VAR_11;

 if (VAR_9 == ((void*)0) || FUNC_11(VAR_9, "-") == 0) {
  VAR_2 = "[stdin]";
  VAR_4 = ((void*)0);
  VAR_3 = FUNC_2(VAR_6);
 } else {
  VAR_2 = VAR_9;
  VAR_4 = VAR_9;
  VAR_3 = FUNC_3(VAR_9, "rb");
  if (VAR_3 == ((void*)0))
   FUNC_1(2, "can't open %s", VAR_9);
 }
 if (FUNC_11(VAR_10, "-") == 0) {
  VAR_5 = FUNC_2(VAR_7);
  FUNC_6();
  return;
 }
 if (FUNC_10(VAR_10, &VAR_11) < 0) {
  VAR_5 = FUNC_3(VAR_10, "wb");
  if (VAR_5 == ((void*)0))
   FUNC_1(2, "can't create %s", VAR_10);
  FUNC_6();
  return;
 }

 VAR_8 = FUNC_0(VAR_10, ".XXXXXX");
 VAR_5 = FUNC_5(VAR_8, VAR_11.st_mode);
 if (VAR_5 == ((void*)0))
  FUNC_1(2, "can't create %s", VAR_8);

 FUNC_6();

 if (VAR_1 != ((void*)0)) {
  char *VAR_12 = FUNC_0(VAR_10, VAR_1);
  if (FUNC_8(VAR_10, VAR_12) < 0)
   FUNC_1(2, "can't rename \"%s\" to \"%s\"", VAR_10, VAR_12);
  FUNC_4(VAR_12);
 }

 if (!VAR_0 && VAR_1 == ((void*)0)) {
  if (FUNC_7(VAR_8) < 0)
   FUNC_12("can't remove \"%s\"", VAR_8);
 } else if (FUNC_9(VAR_8, VAR_10) < 0)
  FUNC_1(2, "can't rename \"%s\" to \"%s\"", VAR_8, VAR_10);
 FUNC_4(VAR_8);
 VAR_8 = ((void*)0);
}
