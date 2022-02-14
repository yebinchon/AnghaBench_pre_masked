
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int dummy; } ;



__attribute__((used)) static inline bool FUNC_0(struct spu_queue *VAR_0, unsigned int VAR_1,
    unsigned long VAR_2, unsigned long VAR_3)
{
 if (VAR_2 <= VAR_3) {
  if (VAR_1 > VAR_2 && VAR_1 <= VAR_3)
   return 1;
 } else {
  if (VAR_1 > VAR_2 || VAR_1 <= VAR_3)
   return 1;
 }
 return 0;
}
