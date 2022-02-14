
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_struct {unsigned long base0; scalar_t__ base1; scalar_t__ base2; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct desc_struct *VAR_0)
{
 unsigned long VAR_1 = (unsigned long)VAR_0->base2 << 24;

 return VAR_1 | ((unsigned long)VAR_0->base1 << 16) | VAR_0->base0;
}
