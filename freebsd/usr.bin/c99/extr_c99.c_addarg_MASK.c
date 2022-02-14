
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int ** FUNC_1 (int **,int) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3)
{
 if (VAR_2 + 1 >= VAR_1) {
  VAR_1 += 16;
  if ((VAR_0 = FUNC_1(VAR_0, sizeof(*VAR_0) * VAR_1)) == ((void*)0))
   FUNC_0(1, "malloc");
 }
 if ((VAR_0[VAR_2++] = FUNC_2(VAR_3)) == ((void*)0))
  FUNC_0(1, "strdup");
 VAR_0[VAR_2] = ((void*)0);
}
