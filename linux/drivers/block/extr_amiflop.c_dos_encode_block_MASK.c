
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ushort *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  *VAR_0=FUNC_0(*VAR_1++);
  *VAR_0|=((VAR_0[-1]&1)||(*VAR_0&0x4000))? 0: 0x8000;
  VAR_0++;
 }
}
