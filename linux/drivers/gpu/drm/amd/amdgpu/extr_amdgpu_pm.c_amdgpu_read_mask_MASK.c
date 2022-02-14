
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ssize_t ;
typedef int buf_cpy ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,long*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (size_t,int) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char**,char const*) ;

__attribute__((used)) static ssize_t FUNC_5(const char *VAR_2, size_t VAR_3, uint32_t *VAR_4)
{
 int VAR_5;
 long VAR_6;
 char *VAR_7 = ((void*)0);
 char *VAR_8;
 char VAR_9[VAR_0 + 1];
 const char VAR_10[3] = {' ', '\n', '\0'};
 size_t VAR_11;

 *VAR_4 = 0;

 VAR_11 = FUNC_2(VAR_3, sizeof(VAR_9) - 1);
 FUNC_1(VAR_9, VAR_2, VAR_11);
 VAR_9[VAR_11] = '\0';
 VAR_8 = VAR_9;
 while (VAR_8[0]) {
  VAR_7 = FUNC_4(&VAR_8, VAR_10);
  if (FUNC_3(VAR_7)) {
   VAR_5 = FUNC_0(VAR_7, 0, &VAR_6);
   if (VAR_5)
    return -VAR_1;
   *VAR_4 |= 1 << VAR_6;
  } else
   break;
 }

 return 0;
}
