
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct dpages {TYPE_1__ context_bi; scalar_t__ context_ptr; } ;
struct bio_vec {unsigned long bv_len; unsigned int bv_offset; struct page* bv_page; } ;
typedef scalar_t__ sector_t ;


 struct bio_vec FUNC_0 (struct bio_vec*,TYPE_1__) ;

__attribute__((used)) static void FUNC_1(struct dpages *VAR_0, struct page **VAR_1,
    unsigned long *VAR_2, unsigned *VAR_3)
{
 struct bio_vec VAR_4 = FUNC_0((struct bio_vec *)VAR_0->context_ptr,
          VAR_0->context_bi);

 *VAR_1 = VAR_4.bv_page;
 *VAR_2 = VAR_4.bv_len;
 *VAR_3 = VAR_4.bv_offset;


 VAR_0->context_bi.bi_sector = (sector_t)VAR_4.bv_len;
}
