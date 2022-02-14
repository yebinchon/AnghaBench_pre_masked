
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lz_decoder {unsigned int pos; size_t dict_size; int * obuf; scalar_t__ wrapped; } ;
typedef size_t off_t ;



__attribute__((used)) static uint8_t
FUNC_0(const struct lz_decoder *VAR_0, unsigned VAR_1)
{
 off_t VAR_2 = VAR_0->pos - VAR_1 - 1;

 if (VAR_2 >= 0)
  return VAR_0->obuf[VAR_2];

 if (VAR_0->wrapped)
  return VAR_0->obuf[VAR_0->dict_size + VAR_2];

 return 0;
}
