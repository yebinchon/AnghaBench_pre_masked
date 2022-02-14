
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6 = 0;


 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_5 = VAR_4;
 for (;;) {
  VAR_5 = FUNC_3(VAR_5, '/');
  if (!VAR_5)
   break;
  VAR_5[0] = '\0';
  VAR_6 = FUNC_0(VAR_4, 0755);
  if (VAR_6 && VAR_6 != -VAR_0)
   break;
  VAR_5[0] = '/';
  VAR_5++;
 }
 FUNC_1(VAR_4);
 return VAR_6;
}
