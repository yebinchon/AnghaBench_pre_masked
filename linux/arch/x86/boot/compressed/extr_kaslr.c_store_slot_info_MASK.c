
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_area {unsigned long num; int addr; } ;
struct mem_vector {unsigned long size; int start; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct slot_area* VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static void FUNC_0(struct mem_vector *VAR_5, unsigned long VAR_6)
{
 struct slot_area VAR_7;

 if (VAR_2 == VAR_1)
  return;

 VAR_7.addr = VAR_5->start;
 VAR_7.num = (VAR_5->size - VAR_6) /
   VAR_0 + 1;

 if (VAR_7.num > 0) {
  VAR_3[VAR_2++] = VAR_7;
  VAR_4 += VAR_7.num;
 }
}
