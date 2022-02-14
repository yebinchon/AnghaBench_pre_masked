
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (scalar_t__,int ,unsigned long,int,int) ;

__attribute__((used)) static void FUNC_2(__le32 VAR_2, unsigned long VAR_3)
{
 if (VAR_1 < 0 || VAR_3 > 0xfffc)
  return;
 if (VAR_3 & 3) {
  FUNC_0(VAR_2 >> 24, VAR_3);
  FUNC_0(VAR_2 >> 16, VAR_3 + 1);
  FUNC_0(VAR_2 >> 8, VAR_3 + 2);
  FUNC_0(VAR_2 , VAR_3 + 3);
  return;
 }
 FUNC_1(VAR_1, VAR_0, VAR_3, VAR_2, 4);
}
