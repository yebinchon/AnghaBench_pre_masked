
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,size_t*) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,char*,int ,int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(void)
{
 regex_t VAR_4;
 size_t VAR_5;
 int VAR_6;
 char *VAR_7;
 FILE *VAR_8;

 if ((VAR_8 = FUNC_3(VAR_2, "r")) == ((void*)0))
  return (2);
 (void)FUNC_4(VAR_3, "?...");
 (void)FUNC_1(VAR_3);
 if ((VAR_7 = FUNC_2(VAR_8, &VAR_5)) == ((void*)0) ||
     FUNC_6(&VAR_4, FUNC_5(VAR_1), VAR_0) != 0) {
  (void)FUNC_0(VAR_8);
  return (0);
 }
 VAR_7[VAR_5 - 1] = '\0';
 VAR_6 = FUNC_7(&VAR_4, VAR_7, 0, ((void*)0), 0);
 (void)FUNC_0(VAR_8);
 FUNC_8(&VAR_4);
 return (VAR_6 == 0);
}
