
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3)
{
 if (VAR_2 >= VAR_1) {
  if (VAR_1 == 0)
   VAR_1 = 16;
  else
   VAR_1 *= 2;
  VAR_0 = FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0),
     "too many m4wraps");
 }
 VAR_0[VAR_2++] = FUNC_1(VAR_3);
}
