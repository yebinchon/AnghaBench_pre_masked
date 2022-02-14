
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lz_range_decoder {int range; int code; int fp; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned
FUNC_1(struct lz_range_decoder *VAR_0, int VAR_1)
{
 unsigned VAR_2 = 0;

 for (int VAR_3 = VAR_1; VAR_3 > 0; VAR_3--) {
  VAR_0->range >>= 1;
  VAR_2 <<= 1;
  if (VAR_0->code >= VAR_0->range) {
   VAR_0->code -= VAR_0->range;
   VAR_2 |= 1;
  }
  if (VAR_0->range <= 0x00FFFFFFU) {
   VAR_0->range <<= 8;
   VAR_0->code = (VAR_0->code << 8) | (uint8_t)FUNC_0(VAR_0->fp);
  }
 }

 return VAR_2;
}
