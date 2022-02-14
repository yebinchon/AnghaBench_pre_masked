
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 char* FUNC_1 (void*,int,int ,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3()
{
 char VAR_1[10240];
 char *VAR_2;

 FUNC_2("test_rth_init", sizeof("test_rth_init\0"));

 VAR_2 = FUNC_1((void *)VAR_1, 10, VAR_0, 100);
 FUNC_0(((void*)0), VAR_2, "buffer too small\0");

 VAR_2 = FUNC_1((void *)VAR_1, 10240, VAR_0, 0);
 FUNC_0((caddr_t)&VAR_1, VAR_2, "0 segments\0");

 VAR_2 = FUNC_1((void *)VAR_1, 10240, VAR_0, 127);
 FUNC_0((caddr_t)&VAR_1, VAR_2, "127 segments\0");

 VAR_2 = FUNC_1((void *)VAR_1, 10240, VAR_0, -1);
 FUNC_0(((void*)0), VAR_2, "negative number of segments\0");

 VAR_2 = FUNC_1((void *)VAR_1, 10240, VAR_0, 128);
 FUNC_0(((void*)0), VAR_2, "128 segments\0");
}
