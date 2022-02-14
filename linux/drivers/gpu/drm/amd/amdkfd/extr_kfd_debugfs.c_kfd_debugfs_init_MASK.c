
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

void FUNC_2(void)
{
 VAR_1 = FUNC_0("kfd", ((void*)0));

 FUNC_1("mqds", VAR_0 | 0444, VAR_1,
       VAR_5, &VAR_2);
 FUNC_1("hqds", VAR_0 | 0444, VAR_1,
       VAR_4, &VAR_2);
 FUNC_1("rls", VAR_0 | 0444, VAR_1,
       VAR_6, &VAR_2);
 FUNC_1("hang_hws", VAR_0 | 0644, VAR_1,
       ((void*)0), &VAR_3);
}
