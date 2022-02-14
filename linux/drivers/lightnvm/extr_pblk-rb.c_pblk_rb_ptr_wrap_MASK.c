
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rb {int nr_entries; } ;



unsigned int FUNC_0(struct pblk_rb *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 return (VAR_1 + VAR_2) & (VAR_0->nr_entries - 1);
}
