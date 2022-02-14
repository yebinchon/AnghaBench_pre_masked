
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int msg ;


 int FUNC_0 (int,int,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char*,int,char const*,int ) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const char *VAR_2, va_list VAR_3)
{
 int VAR_4;
 char VAR_5[4096];

 VAR_4 = FUNC_2(VAR_5, sizeof(VAR_5), "%s", VAR_1);
 VAR_4 += FUNC_1(VAR_5 + VAR_4, sizeof(VAR_5) - VAR_4, VAR_2, VAR_3);
 if (VAR_4 > (sizeof(VAR_5) - 1))
  VAR_4 = sizeof(VAR_5) - 1;
 VAR_5[VAR_4++] = '\n';

 if (VAR_0)
  FUNC_0(1, 2, VAR_5, VAR_4, VAR_0);
 else
  FUNC_3(2, VAR_5, VAR_4);
}
