
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char const*,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_7(char const *VAR_2)
{
 FILE *VAR_3;

 FUNC_0(VAR_2 != ((void*)0));

 if ((VAR_3 = FUNC_2(VAR_2, "w")) == ((void*)0)) {
  FUNC_6(VAR_0, "Could not open file %s. %s (%d)",
   VAR_2, FUNC_5(VAR_1), VAR_1);
  return (-1);
 }

 FUNC_3(VAR_3, "%d", FUNC_4());
 FUNC_1(VAR_3);

 return (0);
}
