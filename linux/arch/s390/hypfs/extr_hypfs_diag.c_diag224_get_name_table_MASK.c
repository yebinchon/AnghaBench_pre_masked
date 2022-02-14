
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int*) ;
 int* VAR_4 ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(void)
{

 VAR_4 = (char *) FUNC_1(VAR_3 | VAR_2);
 if (!VAR_4)
  return -VAR_0;
 if (FUNC_2(VAR_4)) {
  FUNC_3((unsigned long) VAR_4);
  return -VAR_1;
 }
 FUNC_0(VAR_4 + 16, (*VAR_4 + 1) * 16);
 return 0;
}
