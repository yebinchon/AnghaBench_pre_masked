
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 != 0) {
  FUNC_1("unlink of %s failed", VAR_0);
  VAR_2 = 1;
 } else {
  VAR_2 = 0;
 }
 return (VAR_2);
}
