
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_1(VAR_1 < 0 || VAR_2 < 0))
  return -VAR_0;

 if (VAR_2 == 0)
  return 0;

 if (VAR_1 > (VAR_2 << 16))
  return FUNC_0(VAR_1, VAR_2);
 else
  VAR_3 = VAR_1 / VAR_2;

 return VAR_3;
}
