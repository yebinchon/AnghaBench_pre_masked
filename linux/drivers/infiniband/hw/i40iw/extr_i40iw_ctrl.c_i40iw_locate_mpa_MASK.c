
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static u8 *FUNC_0(u8 *VAR_1)
{

 VAR_1 += VAR_0;


 VAR_1 += 4 * (VAR_1[0] & 0x0f);
 VAR_1 += 4 * ((VAR_1[12] >> 4) & 0x0f);
 return VAR_1;
}
