
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iconv_t ;


 scalar_t__ FUNC_0 (char const*,size_t,size_t*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (char const*,size_t,scalar_t__,int ,int *) ;
 int VAR_2 ;

void FUNC_4(int VAR_3, const char **VAR_4)
{
 int VAR_5 = 0;
 const char *VAR_6;
 char *VAR_7;
 iconv_t VAR_8;

 if (VAR_1 != 1)
  return;

 VAR_8 = FUNC_2(VAR_2, VAR_0);
 if (VAR_8 == (iconv_t) -1)
  return;

 while (VAR_5 < VAR_3) {
  size_t VAR_9;
  VAR_6 = VAR_4[VAR_5];
  if (FUNC_0(VAR_6, (size_t)-1, &VAR_9)) {
   VAR_7 = FUNC_3(VAR_6, VAR_9, VAR_8, 0, ((void*)0));
   if (VAR_7)
    VAR_4[VAR_5] = VAR_7;
  }
  VAR_5++;
 }
 FUNC_1(VAR_8);
}
