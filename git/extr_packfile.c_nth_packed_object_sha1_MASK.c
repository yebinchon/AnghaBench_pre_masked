
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int const uint32_t ;
struct packed_git {unsigned char* index_data; unsigned int const num_objects; int index_version; } ;
struct TYPE_2__ {unsigned int rawsz; } ;


 scalar_t__ FUNC_0 (struct packed_git*) ;
 TYPE_1__* VAR_0 ;

const unsigned char *FUNC_1(struct packed_git *VAR_1,
         uint32_t VAR_2)
{
 const unsigned char *VAR_3 = VAR_1->index_data;
 const unsigned int VAR_4 = VAR_0->rawsz;
 if (!VAR_3) {
  if (FUNC_0(VAR_1))
   return ((void*)0);
  VAR_3 = VAR_1->index_data;
 }
 if (VAR_2 >= VAR_1->num_objects)
  return ((void*)0);
 VAR_3 += 4 * 256;
 if (VAR_1->index_version == 1) {
  return VAR_3 + (VAR_4 + 4) * VAR_2 + 4;
 } else {
  VAR_3 += 8;
  return VAR_3 + VAR_4 * VAR_2;
 }
}
