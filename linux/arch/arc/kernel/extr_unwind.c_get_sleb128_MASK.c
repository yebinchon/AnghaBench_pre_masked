
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u8 ;
typedef unsigned int sleb128_t ;



__attribute__((used)) static sleb128_t FUNC_0(const u8 **VAR_0, const u8 *VAR_1)
{
 const u8 *VAR_2 = *VAR_0;
 sleb128_t VAR_3;
 unsigned VAR_4;

 for (VAR_4 = 0, VAR_3 = 0; VAR_2 < VAR_1; VAR_4 += 7) {
  if (VAR_4 + 7 > 8 * sizeof(VAR_3)
      && (*VAR_2 & 0x7fU) >= (1U << (8 * sizeof(VAR_3) - VAR_4))) {
   VAR_2 = VAR_1 + 1;
   break;
  }
  VAR_3 |= (sleb128_t) (*VAR_2 & 0x7f) << VAR_4;
  if (!(*VAR_2 & 0x80)) {
   VAR_3 |= -(*VAR_2++ & 0x40) << VAR_4;
   break;
  }
 }
 *VAR_0 = VAR_2;

 return VAR_3;
}
