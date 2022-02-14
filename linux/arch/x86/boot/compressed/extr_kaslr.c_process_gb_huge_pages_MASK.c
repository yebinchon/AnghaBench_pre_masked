
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_vector {unsigned long start; unsigned long size; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mem_vector*,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct mem_vector *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5 = 0;
 struct mem_vector VAR_6;
 int VAR_7 = 0;

 if (!VAR_1) {
  FUNC_1(VAR_2, VAR_3);
  return;
 }

 VAR_4 = FUNC_0(VAR_2->start, VAR_0);

 if (VAR_4 < VAR_2->start + VAR_2->size)
  VAR_5 = VAR_2->size - (VAR_4 - VAR_2->start);


 while (VAR_5 > VAR_0 && VAR_1) {
  VAR_5 -= VAR_0;
  VAR_1--;
  VAR_7++;
 }


 if (!VAR_7) {
  FUNC_1(VAR_2, VAR_3);
  return;
 }







 if (VAR_4 >= VAR_2->start + VAR_3) {
  VAR_6.start = VAR_2->start;
  VAR_6.size = VAR_4 - VAR_2->start;
  FUNC_1(&VAR_6, VAR_3);
 }

 VAR_5 = VAR_2->size - (VAR_4 - VAR_2->start) - VAR_7 * VAR_0;
 if (VAR_5 >= VAR_3) {
  VAR_6.start = VAR_4 + VAR_7 * VAR_0;
  VAR_6.size = VAR_5;
  FUNC_1(&VAR_6, VAR_3);
 }
}
