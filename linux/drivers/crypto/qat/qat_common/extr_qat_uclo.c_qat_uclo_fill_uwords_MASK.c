
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct icp_qat_uclo_objhandle {unsigned int uword_in_bytes; } ;
struct icp_qat_uclo_encap_page {unsigned int uwblock_num; TYPE_1__* uwblock; } ;
struct TYPE_2__ {unsigned int start_addr; int words_num; scalar_t__ micro_words; } ;


 int VAR_0 ;
 int FUNC_0 (int*,void*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct icp_qat_uclo_objhandle *VAR_1,
     struct icp_qat_uclo_encap_page *VAR_2,
     uint64_t *VAR_3, unsigned int VAR_4,
     unsigned int VAR_5, uint64_t VAR_6)
{
 uint64_t VAR_7 = 0;
 unsigned int VAR_8;

 if (!VAR_2) {
  *VAR_3 = VAR_6;
  return;
 }
 for (VAR_8 = 0; VAR_8 < VAR_2->uwblock_num; VAR_8++) {
  if (VAR_5 >= VAR_2->uwblock[VAR_8].start_addr &&
      VAR_5 <= VAR_2->uwblock[VAR_8].start_addr +
      VAR_2->uwblock[VAR_8].words_num - 1) {
   VAR_5 -= VAR_2->uwblock[VAR_8].start_addr;
   VAR_5 *= VAR_1->uword_in_bytes;
   FUNC_0(&VAR_7, (void *)(((uintptr_t)
          VAR_2->uwblock[VAR_8].micro_words) + VAR_5),
          VAR_1->uword_in_bytes);
   VAR_7 = VAR_7 & 0xbffffffffffull;
  }
 }
 *VAR_3 = VAR_7;
 if (*VAR_3 == VAR_0)
  *VAR_3 = VAR_6;
}
