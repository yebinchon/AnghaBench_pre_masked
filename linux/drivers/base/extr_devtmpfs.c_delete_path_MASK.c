
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2)
{
 char *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3)
  return -VAR_0;

 for (;;) {
  char *VAR_5;

  VAR_5 = FUNC_3(VAR_3, '/');
  if (!VAR_5)
   break;
  VAR_5[0] = '\0';
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   break;
 }

 FUNC_1(VAR_3);
 return VAR_4;
}
