
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {struct bio* bi_next; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;

__attribute__((used)) static inline struct bio *FUNC_1(struct bio *VAR_1, sector_t VAR_2)
{
 if (FUNC_0(VAR_1) < VAR_2 + VAR_0)
  return VAR_1->bi_next;
 else
  return ((void*)0);
}
