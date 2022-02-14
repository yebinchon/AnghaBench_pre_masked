
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_2,
        const char *VAR_3, int VAR_4)
{
 if (VAR_4) {
  VAR_0 = 0;
  VAR_1 = 0;
 }
 else {
  VAR_0 = 1;
  if (VAR_3)
   VAR_1 = FUNC_0(VAR_3);
 }
 return 0;
}
