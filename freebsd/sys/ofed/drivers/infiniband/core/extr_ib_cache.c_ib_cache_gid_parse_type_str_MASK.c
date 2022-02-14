
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const**) ;
 int VAR_0 ;
 char const** VAR_1 ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;

int FUNC_3(const char *VAR_2)
{
 unsigned int VAR_3;
 size_t VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == 0)
  return -VAR_0;

 if (VAR_2[VAR_4 - 1] == '\n')
  VAR_4--;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3)
  if (VAR_1[VAR_3] && !FUNC_2(VAR_2, VAR_1[VAR_3], VAR_4) &&
      VAR_4 == FUNC_1(VAR_1[VAR_3])) {
   VAR_5 = VAR_3;
   break;
  }

 return VAR_5;
}
