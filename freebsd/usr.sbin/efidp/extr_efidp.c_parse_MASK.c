
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int * efidp ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int VAR_2 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 char VAR_3[VAR_0];
 efidp VAR_4;
 ssize_t VAR_5;
 char *VAR_6;

 VAR_5 = VAR_0;
 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4 == ((void*)0))
  FUNC_1(1, "Can't allocate memory.");
 while (FUNC_2(VAR_3, sizeof(VAR_3), VAR_2)) {
  VAR_6= FUNC_5(VAR_3);
  VAR_5 = FUNC_0(VAR_6, VAR_4, VAR_5);
  if (VAR_5 == -1)
   FUNC_1(1, "Can't parse %s", VAR_6);
  FUNC_6(VAR_1, VAR_4, VAR_5);
 }
 FUNC_3(VAR_4);
}
