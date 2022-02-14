
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uchar ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

uchar *
FUNC_2(uchar *VAR_0, int VAR_1, int VAR_2)
{
 uchar *VAR_3 = (uchar *)FUNC_0(VAR_1+VAR_2+1);

 VAR_3[VAR_1+VAR_2] = '\0';
 return (uchar*)FUNC_1((char*)VAR_3+VAR_2, (char*)VAR_0, VAR_1) - VAR_2;
}
