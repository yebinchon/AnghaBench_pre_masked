
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pblk_line_meta {scalar_t__ sec_per_line; } ;
struct pblk {struct pblk_line_meta lm; } ;



__attribute__((used)) static inline int FUNC_0(struct pblk *VAR_0, u64 VAR_1)
{
 struct pblk_line_meta *VAR_2 = &VAR_0->lm;

 if (VAR_1 > VAR_2->sec_per_line)
  return 1;

 return 0;
}
