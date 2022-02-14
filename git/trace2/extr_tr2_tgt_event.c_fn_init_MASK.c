
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_5 = FUNC_2(&VAR_2);
 int VAR_6;
 int VAR_7;
 const char *VAR_8;
 const char *VAR_9;

 if (!VAR_5)
  return VAR_5;

 VAR_8 = FUNC_3(VAR_1);
 if (VAR_8 && *VAR_8 && ((VAR_6 = FUNC_0(VAR_8)) > 0))
  VAR_4 = VAR_6;

 VAR_9 = FUNC_3(VAR_0);
 if (VAR_9 && *VAR_9 &&
     ((VAR_7 = FUNC_1(VAR_9)) != -1))
  VAR_3 = VAR_7;

 return VAR_5;
}
