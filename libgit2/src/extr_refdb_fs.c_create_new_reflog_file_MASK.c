
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4)
{
 int VAR_5, VAR_6;

 if ((VAR_6 = FUNC_0(VAR_4, VAR_0)) < 0)
  return VAR_6;

 if ((VAR_5 = FUNC_2(VAR_4,
   VAR_3 | VAR_2,
   VAR_1)) < 0)
  return -1;

 return FUNC_1(VAR_5);
}
