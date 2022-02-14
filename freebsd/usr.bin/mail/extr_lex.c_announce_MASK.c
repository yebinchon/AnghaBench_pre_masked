
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;

void
FUNC_3(void)
{
 int VAR_4[2], VAR_5;

 VAR_5 = FUNC_1(0);
 VAR_4[0] = VAR_5;
 VAR_4[1] = 0;
 VAR_0 = &VAR_2[VAR_5 - 1];
 if (VAR_3 > 0 && FUNC_2("noheader") == ((void*)0)) {
  VAR_1++;
  FUNC_0(VAR_4);
  VAR_1 = 0;
 }
}
