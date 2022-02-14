
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_struct {unsigned long limit0; scalar_t__ limit1; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct desc_struct *VAR_0)
{
 return ((unsigned long)VAR_0->limit1 << 16) | VAR_0->limit0;
}
