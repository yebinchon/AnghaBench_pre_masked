
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 unsigned int* VAR_0 ;

__attribute__((used)) static u8 FUNC_0(unsigned int VAR_1) {
 int VAR_2;
 u8 VAR_3 = 0;






 for (VAR_2 = VAR_1 < 32; VAR_2 < 16; VAR_2 += 2)
  VAR_3 |= ((VAR_0[VAR_2] >> (VAR_1 % 32)) & 1) << (VAR_2 / 2);

 return VAR_3;
}
