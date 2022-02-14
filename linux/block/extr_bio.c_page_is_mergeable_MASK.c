
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct bio_vec {int bv_offset; int bv_len; struct page* bv_page; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct bio_vec const*,struct page*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static inline bool FUNC_5(const struct bio_vec *VAR_1,
  struct page *VAR_2, unsigned int VAR_3, unsigned int VAR_4,
  bool *VAR_5)
{
 phys_addr_t VAR_6 = FUNC_1(VAR_1->bv_page) +
  VAR_1->bv_offset + VAR_1->bv_len - 1;
 phys_addr_t VAR_7 = FUNC_1(VAR_2);

 if (VAR_6 + 1 != VAR_7 + VAR_4)
  return 0;
 if (FUNC_4() && !FUNC_3(VAR_1, VAR_2))
  return 0;

 *VAR_5 = ((VAR_6 & VAR_0) == VAR_7);
 if (!*VAR_5 && FUNC_2(FUNC_0(VAR_6)) + 1 != VAR_2)
  return 0;
 return 1;
}
