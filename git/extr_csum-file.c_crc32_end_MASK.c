
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hashfile {int crc32; scalar_t__ do_crc; } ;



uint32_t FUNC_0(struct hashfile *VAR_0)
{
 VAR_0->do_crc = 0;
 return VAR_0->crc32;
}
