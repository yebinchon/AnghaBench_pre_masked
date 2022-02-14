
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, const char *VAR_4)
{
 int VAR_5;

 if (VAR_0 >= VAR_2)
  FUNC_0();


 for (VAR_5 = VAR_0 - 1; VAR_5 >= VAR_3; VAR_5--)
  VAR_1[VAR_5 + 1] = VAR_1[VAR_5];

 VAR_1[VAR_3] = FUNC_1(VAR_4);
 VAR_0++;
}
