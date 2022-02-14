
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_stat {int printable; int nonprintable; scalar_t__ nul; scalar_t__ lonecr; } ;



__attribute__((used)) static int FUNC_0(const struct text_stat *VAR_0)
{
 if (VAR_0->lonecr)
  return 1;
 if (VAR_0->nul)
  return 1;
 if ((VAR_0->printable >> 7) < VAR_0->nonprintable)
  return 1;
 return 0;
}
