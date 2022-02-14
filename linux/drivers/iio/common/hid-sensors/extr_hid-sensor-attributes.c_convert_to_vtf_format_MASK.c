
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static u32 FUNC_3(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 int VAR_6 = 1;

 if (VAR_2 < 0 || VAR_3 < 0)
  VAR_6 = -1;
 VAR_1 = FUNC_1(VAR_1);
 if (VAR_1 < 0) {
  VAR_4 = FUNC_2(10, 6 + VAR_1);
  VAR_5 = FUNC_0(VAR_2) * FUNC_2(10, -VAR_1);
  VAR_5 += FUNC_0(VAR_3) / VAR_4;
 } else {
  VAR_4 = FUNC_2(10, VAR_1);
  VAR_5 = FUNC_0(VAR_2) / VAR_4;
 }
 if (VAR_6 < 0)
  VAR_5 = ((1LL << (VAR_0 * 8)) - VAR_5);

 return VAR_5;
}
