
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_decoder {int crc; } ;



__attribute__((used)) static unsigned
FUNC_0(const struct lz_decoder *VAR_0)
{
 return VAR_0->crc ^ 0xffffffffU;
}
