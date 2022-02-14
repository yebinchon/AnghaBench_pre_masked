
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {size_t cpu; } ;
struct sparc_stackf {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct thread_info *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = (unsigned long) VAR_3;


 if (VAR_4 & (16UL - 1))
  return 0;

 if (VAR_4 >= (VAR_5 + sizeof(struct thread_info)) &&
     VAR_4 <= (VAR_5 + VAR_0 - sizeof(struct sparc_stackf)))
  return 1;

 if (VAR_1[VAR_3->cpu]) {
  VAR_5 = (unsigned long) VAR_1[VAR_3->cpu];
  if (VAR_4 >= VAR_5 &&
      VAR_4 <= (VAR_5 + VAR_0 - sizeof(struct sparc_stackf)))
   return 1;
  VAR_5 = (unsigned long) VAR_2[VAR_3->cpu];
  if (VAR_4 >= VAR_5 &&
      VAR_4 <= (VAR_5 + VAR_0 - sizeof(struct sparc_stackf)))
   return 1;
 }
 return 0;
}
