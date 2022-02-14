
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0, 0, 0, 0, 0,
        ((void*)0));
 if (VAR_3 && VAR_3 != -VAR_0)
  FUNC_1("failed to reset CPU[%u]: %d\n",
        FUNC_2(), VAR_3);
}
