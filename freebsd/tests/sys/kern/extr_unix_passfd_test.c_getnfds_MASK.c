
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int,int*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 size_t VAR_3;
 int VAR_4[4], VAR_5, VAR_6;

 VAR_3 = sizeof(VAR_5);
 VAR_4[0] = VAR_0;
 VAR_4[1] = VAR_1;
 VAR_4[2] = VAR_2;
 VAR_4[3] = 0;

 VAR_6 = FUNC_1(VAR_4, 4, &VAR_5, &VAR_3, ((void*)0), 0);
 FUNC_0(VAR_6 != -1, "sysctl(KERN_PROC_NFDS) failed");
 return (VAR_5);
}
