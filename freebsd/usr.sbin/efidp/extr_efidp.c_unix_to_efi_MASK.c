
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * efidp ;
typedef int efi ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int **) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];
 efidp VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_5 = ((void*)0);
 while (FUNC_3(VAR_3, sizeof(VAR_3), VAR_2)) {
  VAR_6= FUNC_6(VAR_3);
  FUNC_4(VAR_5);
  VAR_5 = ((void*)0);
  VAR_7 = FUNC_2(VAR_6, &VAR_5);
  if (VAR_7 != 0 || VAR_5 == ((void*)0)) {
   VAR_1 = VAR_7;
   FUNC_7("Can't convert '%s' to efi", VAR_6);
   continue;
  }
  if (FUNC_0(VAR_4, sizeof(VAR_4),
      VAR_5, FUNC_1(VAR_5)) < 0) {
   FUNC_8("Can't format dp for '%s'", VAR_6);
   continue;
  }
  FUNC_5("%s\n", VAR_4);
 }
 FUNC_4(VAR_5);
}
