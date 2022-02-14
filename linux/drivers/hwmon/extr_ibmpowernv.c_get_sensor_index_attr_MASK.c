
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, u32 *VAR_3, char *VAR_4)
{
 char *VAR_5 = FUNC_1(VAR_2, '#');
 char VAR_6[8] = { 0 };
 char *VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, '-');
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = VAR_7 - VAR_5 - 1;
 if (VAR_8 >= sizeof(VAR_6))
  return -VAR_0;

 FUNC_2(VAR_6, VAR_5 + 1, VAR_8);

 VAR_9 = FUNC_0(VAR_6, 10, VAR_3);
 if (VAR_9)
  return VAR_9;

 FUNC_2(VAR_4, VAR_7 + 1, VAR_1);

 return 0;
}
