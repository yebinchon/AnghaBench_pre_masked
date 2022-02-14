
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {unsigned char* data; int len; } ;
struct git_pack_file {int index_version; int num_objects; TYPE_1__ index_map; } ;
typedef int git_off_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static git_off_t FUNC_1(const struct git_pack_file *VAR_0, uint32_t VAR_1)
{
 const unsigned char *VAR_2 = VAR_0->index_map.data;
 const unsigned char *VAR_3 = VAR_2 + VAR_0->index_map.len;
 VAR_2 += 4 * 256;
 if (VAR_0->index_version == 1) {
  return FUNC_0(*((uint32_t *)(VAR_2 + 24 * VAR_1)));
 } else {
  uint32_t VAR_4;
  VAR_2 += 8 + VAR_0->num_objects * (20 + 4);
  VAR_4 = FUNC_0(*((uint32_t *)(VAR_2 + 4 * VAR_1)));
  if (!(VAR_4 & 0x80000000))
   return VAR_4;
  VAR_2 += VAR_0->num_objects * 4 + (VAR_4 & 0x7fffffff) * 8;


  if (VAR_2 >= VAR_3 - 8)
   return -1;

  return (((uint64_t)FUNC_0(*((uint32_t *)(VAR_2 + 0)))) << 32) |
     FUNC_0(*((uint32_t *)(VAR_2 + 4)));
 }
}
