
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio_vec {unsigned int bv_offset; unsigned int bv_len; } ;


 unsigned int FUNC_0 (struct request_queue*) ;

__attribute__((used)) static inline bool FUNC_1(struct request_queue *VAR_0,
  struct bio_vec *VAR_1, unsigned int VAR_2)
{
 return (VAR_2 & FUNC_0(VAR_0)) ||
  ((VAR_1->bv_offset + VAR_1->bv_len) & FUNC_0(VAR_0));
}
