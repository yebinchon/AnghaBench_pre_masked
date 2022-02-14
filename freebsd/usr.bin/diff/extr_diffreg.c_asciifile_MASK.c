
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned char*,int,int,int *) ;
 int * FUNC_1 (unsigned char*,char,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_1)
{
 unsigned char VAR_2[VAR_0];
 size_t VAR_3;

 if (VAR_1 == ((void*)0))
  return (1);

 FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_2, 1, sizeof(VAR_2), VAR_1);
 return (FUNC_1(VAR_2, '\0', VAR_3) == ((void*)0));
}
