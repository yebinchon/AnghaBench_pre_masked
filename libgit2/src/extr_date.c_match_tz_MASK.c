
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0, int *VAR_1)
{
 char *VAR_2;
 int VAR_3 = FUNC_0(VAR_0 + 1, &VAR_2, 10);
 size_t VAR_4 = VAR_2 - (VAR_0 + 1);
 int VAR_5 = 0;

 if (VAR_4 == 4) {

  VAR_5 = VAR_3 % 100;
  VAR_3 = VAR_3 / 100;
 } else if (VAR_4 != 2) {
  VAR_5 = 99;
 } else if (*VAR_2 == ':') {

  VAR_5 = FUNC_0(VAR_2 + 1, &VAR_2, 10);
  if (VAR_2 - (VAR_0 + 1) != 5)
   VAR_5 = 99;
 }
 if (VAR_5 < 60 && VAR_3 < 24) {
  int VAR_6 = VAR_3 * 60 + VAR_5;
  if (*VAR_0 == '-')
   VAR_6 = -VAR_6;
  *VAR_1 = VAR_6;
 }
 return VAR_2 - VAR_0;
}
