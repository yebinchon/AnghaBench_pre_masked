
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,int ) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_1, const char *VAR_2, const char *VAR_3,
  va_list VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;

 if (*VAR_2)
  VAR_6 += FUNC_0(VAR_1, "%s", VAR_2);
 VAR_6 += FUNC_1(VAR_1, VAR_3, VAR_4);
 if (*VAR_2)
  VAR_6 += FUNC_0(VAR_1, "%s", VAR_0);
 if (VAR_5)
  VAR_6 += FUNC_0(VAR_1, "%s", VAR_5);
 return VAR_6;
}
