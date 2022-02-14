
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int min_write_pgs; } ;



__attribute__((used)) static inline int FUNC_0(struct pblk *VAR_0, int VAR_1)
{
 return !(VAR_1 % VAR_0->min_write_pgs);
}
