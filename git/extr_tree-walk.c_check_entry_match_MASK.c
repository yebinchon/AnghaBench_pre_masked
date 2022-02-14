
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char const*,int,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);


 if (!VAR_4)
  return VAR_4;

 if (0 < VAR_4) {




  return 1;
 }


 if (VAR_1 < VAR_3 && !FUNC_0(VAR_0, VAR_2, VAR_1) && VAR_2[VAR_1] < '/')
  return 1;

 return -1;
}
