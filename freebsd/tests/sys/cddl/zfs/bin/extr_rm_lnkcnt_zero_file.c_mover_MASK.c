
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*,int) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_4)
{
 char VAR_5[256];
 int VAR_6, VAR_7;

 while (VAR_1) {
  VAR_6 = FUNC_1();
  (void) FUNC_3(VAR_5, "%s.%03d", VAR_3, VAR_6);
  VAR_7 = FUNC_2(VAR_3, VAR_5);
  if (VAR_7 < 0 && VAR_2 != VAR_0)
   (void) FUNC_0("renaming file");
 }

 return (((void*)0));
}
