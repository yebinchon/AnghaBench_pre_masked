
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int ,int*,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_6)
{
 u8 VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_10 = (VAR_6 * VAR_2) / VAR_1;

 VAR_12 = FUNC_0(VAR_4, &VAR_7,
  VAR_0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_9 = ((VAR_7 & VAR_3) + 1) * 10;

 VAR_11 = VAR_10 * 1000 / VAR_9;

 for (VAR_8 = 58; VAR_8 >= 0; VAR_8--) {
  int VAR_13 = VAR_5[VAR_8];
  if ((VAR_13 - VAR_11) >= 0)
   break;
 }

 return VAR_8 + 1;
}
