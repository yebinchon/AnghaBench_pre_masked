
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx842_slentry {int dummy; } ;
struct nx842_scatterlist {int entry_nr; } ;



__attribute__((used)) static inline unsigned long FUNC_0(
    struct nx842_scatterlist *VAR_0)
{
 return VAR_0->entry_nr * sizeof(struct nx842_slentry);
}
