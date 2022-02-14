
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char const*) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_0, mode_t VAR_1)
{
 int VAR_2;
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = FUNC_3(VAR_0);

 if (VAR_4 && VAR_0[VAR_4-1] == '/') {
  if ((VAR_3 = FUNC_2(VAR_0)) == ((void*)0))
   return -1;
  VAR_3[VAR_4-1] = '\0';
 }
 else
  VAR_3 = (char *)VAR_0;

 VAR_2 = FUNC_1(VAR_3, VAR_1);
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_3);

 return VAR_2;
}
