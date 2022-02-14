
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int *,void*,int *) ;

void FUNC_2(void)
{
 u32 VAR_4 = 0;



 (void)FUNC_1(VAR_1, VAR_0,
      VAR_2,
      VAR_3, ((void*)0),
      (void *)&VAR_4, ((void*)0));

 FUNC_0("Found %u predefined names in the namespace\n", VAR_4);
}
