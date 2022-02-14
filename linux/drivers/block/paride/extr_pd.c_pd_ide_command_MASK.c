
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int sectors; int heads; scalar_t__ can_lba; } ;


 int FUNC_0 (struct pd_unit*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct pd_unit *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_0->can_lba) {
  VAR_7 = VAR_2 & 255;
  VAR_5 = (VAR_2 >>= 8) & 255;
  VAR_4 = (VAR_2 >>= 8) & 255;
  VAR_6 = ((VAR_2 >>= 8) & 15) + 0x40;
 } else {
  VAR_7 = (VAR_2 % VAR_0->sectors) + 1;
  VAR_6 = (VAR_2 /= VAR_0->sectors) % VAR_0->heads;
  VAR_5 = (VAR_2 /= VAR_0->heads) % 256;
  VAR_4 = (VAR_2 >>= 8);
 }
 FUNC_0(VAR_0, VAR_3, VAR_7, VAR_6, VAR_5, VAR_4, VAR_1);
}
