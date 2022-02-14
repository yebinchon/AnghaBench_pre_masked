
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ndptr ;


 int FUNC_0 (char const**,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*) ;

void
FUNC_5(const char *VAR_0[], int VAR_1)
{
 ndptr VAR_2;

 VAR_0[1] = ((void*)0);
 VAR_2 = FUNC_4(VAR_0[2]);
 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_0+1, VAR_1-1, FUNC_3(VAR_2), FUNC_1(VAR_2));
 else
  FUNC_2(1, "unknown builtin %s.", VAR_0[2]);
}
