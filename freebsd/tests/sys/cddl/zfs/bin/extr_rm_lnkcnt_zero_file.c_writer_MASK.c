
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_5)
{
 int *VAR_6 = (int *)VAR_5;

 while (VAR_3) {
  (void) FUNC_0 (*VAR_6);
  *VAR_6 = FUNC_1(VAR_4, VAR_0 | VAR_2 | VAR_1, 0644);
  if (*VAR_6 < 0)
   FUNC_2("refreshing file");
  (void) FUNC_3(*VAR_6, "test\n", 5);
 }

 return (((void*)0));
}
