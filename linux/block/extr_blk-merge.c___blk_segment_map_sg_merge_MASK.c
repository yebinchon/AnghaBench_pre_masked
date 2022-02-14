
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; } ;
struct request_queue {int dummy; } ;
struct bio_vec {int bv_len; } ;


 int FUNC_0 (struct request_queue*,struct bio_vec*,struct bio_vec*) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;

__attribute__((used)) static inline bool
FUNC_2(struct request_queue *VAR_0, struct bio_vec *VAR_1,
      struct bio_vec *VAR_2, struct scatterlist **VAR_3)
{

 int VAR_4 = VAR_1->bv_len;

 if (!*VAR_3)
  return 0;

 if ((*VAR_3)->length + VAR_4 > FUNC_1(VAR_0))
  return 0;

 if (!FUNC_0(VAR_0, VAR_2, VAR_1))
  return 0;

 (*VAR_3)->length += VAR_4;

 return 1;
}
