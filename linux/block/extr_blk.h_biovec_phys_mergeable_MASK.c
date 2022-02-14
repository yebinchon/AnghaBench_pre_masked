
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio_vec {unsigned long bv_offset; unsigned long bv_len; int bv_page; } ;
typedef unsigned long phys_addr_t ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct bio_vec*,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static inline bool FUNC_4(struct request_queue *VAR_0,
  struct bio_vec *VAR_1, struct bio_vec *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);
 phys_addr_t VAR_4 = FUNC_0(VAR_1->bv_page) + VAR_1->bv_offset;
 phys_addr_t VAR_5 = FUNC_0(VAR_2->bv_page) + VAR_2->bv_offset;

 if (VAR_4 + VAR_1->bv_len != VAR_5)
  return 0;
 if (FUNC_3() && !FUNC_2(VAR_1, VAR_2->bv_page))
  return 0;
 if ((VAR_4 | VAR_3) != ((VAR_5 + VAR_2->bv_len - 1) | VAR_3))
  return 0;
 return 1;
}
