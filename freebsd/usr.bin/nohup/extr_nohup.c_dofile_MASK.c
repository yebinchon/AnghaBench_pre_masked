
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char const*,int,int) ;
 scalar_t__ FUNC_6 (char*,int,char*,char const*,char*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_10;
 char VAR_11[VAR_2];
 const char *VAR_12;
 VAR_12 = VAR_1;
 VAR_10 = FUNC_5(VAR_12, VAR_5 | VAR_4 | VAR_3, VAR_7 | VAR_8);
 if (VAR_10 != -1)
  goto dupit;
 if ((VAR_12 = FUNC_4("HOME")) != ((void*)0) && *VAR_12 != '\0' &&
     (size_t)FUNC_6(VAR_11, sizeof(VAR_11), "%s/%s", VAR_12, VAR_1) <
     sizeof(VAR_11)) {
  VAR_10 = FUNC_5(VAR_12 = VAR_11, VAR_5 | VAR_4 | VAR_3,
      VAR_7 | VAR_8);
  if (VAR_10 != -1)
   goto dupit;
 }
 FUNC_2(VAR_0, "can't open a nohup.out file");

dupit:
 if (FUNC_0(VAR_10, VAR_6) == -1)
  FUNC_1(VAR_0, ((void*)0));
 (void)FUNC_3(VAR_9, "appending output to %s\n", VAR_12);
}
