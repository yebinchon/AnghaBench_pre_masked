
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,char*,size_t) ;

ssize_t
FUNC_1(int VAR_2, void *VAR_3, size_t VAR_4)
{
  size_t VAR_5, VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += VAR_5)
    switch ((VAR_5 = FUNC_0(VAR_2, (char *)VAR_3 + VAR_6, VAR_4 - VAR_6))) {
      case 0:
        return VAR_6;
      case -1:
        if (VAR_1 == VAR_0)
          VAR_5 = 0;
        else
          return -1;
    }
  return VAR_6;
}
