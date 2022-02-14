
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cy8ctmg110 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cy8ctmg110*,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct cy8ctmg110 *VAR_1, bool VAR_2)
{
 unsigned char VAR_3[3];

 if (VAR_2) {
  VAR_3[0] = 0x00;
  VAR_3[1] = 0xff;
  VAR_3[2] = 5;
 } else {
  VAR_3[0] = 0x10;
  VAR_3[1] = 0xff;
  VAR_3[2] = 0;
 }

 return FUNC_0(VAR_1, VAR_0, 3, VAR_3);
}
