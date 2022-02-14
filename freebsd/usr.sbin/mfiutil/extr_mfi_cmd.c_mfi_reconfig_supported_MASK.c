
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mibname ;
typedef int dummy ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 scalar_t__ FUNC_1 (char*,int*,size_t*,int *,int ) ;

int
FUNC_2(void)
{
 char VAR_1[64];
 size_t VAR_2;
 int VAR_3;

 VAR_2 = sizeof(VAR_3);
 FUNC_0(VAR_1, sizeof(VAR_1), "dev.mfi.%d.delete_busy_volumes",
     VAR_0);
 return (FUNC_1(VAR_1, &VAR_3, &VAR_2, ((void*)0), 0) == 0);
}
