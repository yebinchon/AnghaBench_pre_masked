
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3 = FUNC_1(&VAR_1);
 int VAR_4;
 const char *VAR_5;

 if (!VAR_3)
  return VAR_3;

 VAR_5 = FUNC_2(VAR_0);
 if (VAR_5 && *VAR_5 &&
     ((VAR_4 = FUNC_0(VAR_5)) != -1))
  VAR_2 = VAR_4;

 return VAR_3;
}
