
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_1;

 FUNC_0(&VAR_0, ((void*)0), 1);
 VAR_1 = FUNC_2();
 if (VAR_1) {
  FUNC_1("Failed to reset platform: %d\n", VAR_1);
  FUNC_3();
 }

 return VAR_1;
}
