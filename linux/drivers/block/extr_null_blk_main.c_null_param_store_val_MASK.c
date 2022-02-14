
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,int,int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, int *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_1, 10, &VAR_6);
 if (VAR_5)
  return -VAR_0;

 if (VAR_6 < VAR_3 || VAR_6 > VAR_4)
  return -VAR_0;

 *VAR_2 = VAR_6;
 return 0;
}
