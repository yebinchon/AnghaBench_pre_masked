
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char const*,char const*,char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const char *VAR_2,
    const char *VAR_3, char *VAR_4, int VAR_5, bool VAR_6)
{
 char VAR_7[40];
 int VAR_8;

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7, sizeof(VAR_7));

 VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5);
 if (VAR_6 && VAR_8 == -VAR_0 && VAR_1) {
  FUNC_1(((void*)0), VAR_2, VAR_3, VAR_7, sizeof(VAR_7));
  VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5);
 }
 return VAR_8;
}
