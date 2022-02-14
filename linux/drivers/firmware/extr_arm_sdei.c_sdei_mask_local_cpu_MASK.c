
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(void)
{
 int VAR_2;

 FUNC_0(FUNC_3());

 VAR_2 = FUNC_1(VAR_1, 0, 0, 0, 0, 0, ((void*)0));
 if (VAR_2 && VAR_2 != -VAR_0) {
  FUNC_2("failed to mask CPU[%u]: %d\n",
         FUNC_4(), VAR_2);
  return VAR_2;
 }

 return 0;
}
