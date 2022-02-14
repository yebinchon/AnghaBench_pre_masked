
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;

int FUNC_3(int VAR_2, int VAR_3)
{







 static int VAR_4[3] = { -1, -1, -1 };

 if (VAR_2 < 1 || VAR_2 >= FUNC_0(VAR_4))
  FUNC_1("file descriptor out of range: %d", VAR_2);

 if (VAR_3 < 0)
  VAR_3 = VAR_1;

 if (VAR_3 == VAR_0) {
  if (VAR_4[VAR_2] < 0)
   VAR_4[VAR_2] = FUNC_2(VAR_2);
  return VAR_4[VAR_2];
 }
 return VAR_3;
}
