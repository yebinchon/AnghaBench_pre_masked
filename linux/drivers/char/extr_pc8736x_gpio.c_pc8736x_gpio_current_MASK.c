
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned VAR_1)
{
 int VAR_2, VAR_3;
 VAR_1 &= 0x1f;
 VAR_2 = VAR_1 >> 3;
 VAR_3 = VAR_1 & 7;
 return ((VAR_0[VAR_2] >> VAR_3) & 0x01);
}
