
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_5 = FUNC_2(&VAR_3);
 int VAR_6;
 const char *VAR_7;

 if (!VAR_5)
  return VAR_5;

 FUNC_1(&VAR_2, '.', VAR_0);

 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 && *VAR_7 &&
     ((VAR_6 = FUNC_0(VAR_7)) != -1))
  VAR_4 = VAR_6;

 return VAR_5;
}
