
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ,int,int ) ;

const char *FUNC_1(char *VAR_1, u64 VAR_2)
{
 char VAR_3[20];
 const char *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_2, 10, VAR_0);
 VAR_5 = VAR_1;

 while (VAR_4 != VAR_3) {
  *(VAR_5++) = *(--VAR_4);
 }

 *VAR_5 = 0;
 return (VAR_1);
}
