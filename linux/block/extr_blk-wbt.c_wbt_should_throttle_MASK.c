
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {int dummy; } ;
struct bio {int bi_opf; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct bio*) ;

__attribute__((used)) static inline bool FUNC_1(struct rq_wb *VAR_2, struct bio *VAR_3)
{
 switch (FUNC_0(VAR_3)) {
 case 128:



  if ((VAR_3->bi_opf & (VAR_1 | VAR_0)) ==
      (VAR_1 | VAR_0))
   return 0;

 case 129:
  return 1;
 default:
  return 0;
 }
}
