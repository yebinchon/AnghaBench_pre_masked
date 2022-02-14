
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {scalar_t__ q_type; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static unsigned long FUNC_0(struct spu_queue *VAR_5, unsigned long VAR_6)
{
 if (VAR_5->q_type == VAR_2) {
  VAR_6 += VAR_3;
  if (VAR_6 == (VAR_3 * VAR_4))
   VAR_6 = 0;
 } else {
  VAR_6 += VAR_0;
  if (VAR_6 == (VAR_0 * VAR_1))
   VAR_6 = 0;
 }
 return VAR_6;
}
