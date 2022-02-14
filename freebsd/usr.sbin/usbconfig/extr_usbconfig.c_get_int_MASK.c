
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 VAR_0 = 0;
 VAR_2 = FUNC_2(VAR_1, &VAR_3, 0);
 if (VAR_0) {
  FUNC_0(1, "%s", VAR_1);
 }
 if (*VAR_3 != '\0') {
  FUNC_1(1, "illegal number: %s", VAR_1);
 }
 return VAR_2;
}
