
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_2(void)
{
 char VAR_1;

 if (FUNC_1(VAR_0, &VAR_1, (size_t)1) != 1) {
  FUNC_0("lost connection in noresponse()");

 }
 if (VAR_1 == '\0')
  return(0);
 return(1);
}
