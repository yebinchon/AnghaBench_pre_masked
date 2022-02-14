
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(void)
{
 ssize_t VAR_0 = -1;
 const char *VAR_1 = FUNC_1("CONTENT_LENGTH");

 if (VAR_1 && *VAR_1 && !FUNC_2(VAR_1, &VAR_0))
  FUNC_0("failed to parse CONTENT_LENGTH: %s", VAR_1);
 return VAR_0;
}
