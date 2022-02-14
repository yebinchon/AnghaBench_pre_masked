
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4,
  unsigned int VAR_5)
{
 int VAR_6;

 VAR_6 = (VAR_0[VAR_1] & VAR_3) << VAR_5;
 VAR_6 |= (VAR_0[VAR_2] & VAR_4) >> 1;
 if (VAR_0[VAR_2] & 0x01)
  VAR_6 = -VAR_6;

 return VAR_6;
}
