
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*) ;
 char const** VAR_3 ;

void
FUNC_3 (const char *VAR_4)
{

 if (VAR_1 == VAR_0) {
  FUNC_1(VAR_2, "too many words; try bumping W_MAX in inf.h\n");
  FUNC_0(1);
 }

 if (VAR_4 && FUNC_2(VAR_4))
  VAR_3[VAR_1++] = VAR_4;
 else
  VAR_3[VAR_1++] = ((void*)0);
 return;
}
