
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio_vec {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct bio_vec*,unsigned int) ;
 int FUNC_1 (struct request_queue*) ;

__attribute__((used)) static inline bool FUNC_2(struct request_queue *VAR_0,
  struct bio_vec *VAR_1, unsigned int VAR_2)
{
 if (!FUNC_1(VAR_0))
  return 0;
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
