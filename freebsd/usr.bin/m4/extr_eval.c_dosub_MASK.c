
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0[], int VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_2 = VAR_0[2];



 VAR_3 = VAR_2 + FUNC_0(VAR_0[3]);

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_1 >= 5)



  VAR_5 = FUNC_2(VAR_5, FUNC_0(VAR_0[4]));

 if (VAR_3 >= VAR_2 && VAR_3 < VAR_2 + FUNC_4(VAR_2))
  for (VAR_4 = VAR_3 + VAR_5 - 1; VAR_4 >= VAR_3; VAR_4--)
   FUNC_3(*VAR_4);
}
