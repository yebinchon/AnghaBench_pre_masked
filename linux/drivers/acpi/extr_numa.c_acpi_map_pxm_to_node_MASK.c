
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;

int FUNC_4(int VAR_6)
{
 int VAR_7;

 if (VAR_6 < 0 || VAR_6 >= VAR_1 || VAR_4)
  return VAR_2;

 VAR_7 = VAR_5[VAR_6];

 if (VAR_7 == VAR_2) {
  if (FUNC_3(VAR_3) >= VAR_0)
   return VAR_2;
  VAR_7 = FUNC_1(VAR_3);
  FUNC_0(VAR_6, VAR_7);
  FUNC_2(VAR_7, VAR_3);
 }

 return VAR_7;
}
