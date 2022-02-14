
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_threshold {scalar_t__ count; scalar_t__ limit; } ;



__attribute__((used)) static int
FUNC_0(struct pf_threshold *VAR_0)
{
 return (VAR_0->count > VAR_0->limit);
}
