
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, bool *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1) {
  *VAR_2 = 0;
 } else if (FUNC_0(VAR_1, "auto") == 0) {
  *VAR_2 = 1;
 } else {
  *VAR_2 = 0;
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
