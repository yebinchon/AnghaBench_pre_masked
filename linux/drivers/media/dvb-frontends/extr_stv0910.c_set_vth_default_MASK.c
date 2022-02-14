
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv {int* vth; scalar_t__ regoff; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_1)
{
 VAR_1->vth[0] = 0xd7;
 VAR_1->vth[1] = 0x85;
 VAR_1->vth[2] = 0x58;
 VAR_1->vth[3] = 0x3a;
 VAR_1->vth[4] = 0x34;
 VAR_1->vth[5] = 0x28;
 FUNC_0(VAR_1, VAR_0 + VAR_1->regoff + 0, VAR_1->vth[0]);
 FUNC_0(VAR_1, VAR_0 + VAR_1->regoff + 1, VAR_1->vth[1]);
 FUNC_0(VAR_1, VAR_0 + VAR_1->regoff + 2, VAR_1->vth[2]);
 FUNC_0(VAR_1, VAR_0 + VAR_1->regoff + 3, VAR_1->vth[3]);
 FUNC_0(VAR_1, VAR_0 + VAR_1->regoff + 4, VAR_1->vth[4]);
 FUNC_0(VAR_1, VAR_0 + VAR_1->regoff + 5, VAR_1->vth[5]);
 return 0;
}
